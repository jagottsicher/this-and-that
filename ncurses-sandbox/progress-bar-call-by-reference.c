#include <ncurses.h>
#include <string.h>

#define MAXVALUE (12345)
#define MAXSCREENWIDTH 256 // in chars

WINDOW * lowerBar;
//lowerBar = nullptr;

int drawBars(const char * barMeans, const int barNumber, const double * maxValue, double * currentValue);

int main(int argc, char *argv[])
{
    // start ncurses
    initscr();
    refresh();

    // start color
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLUE); // Full bar
    init_pair(2,COLOR_BLUE,COLOR_WHITE); // Empty bar bar
    // set "real" background colors for sdtscr provided by ncurses instead of partly interpreted by tty
    bkgd(COLOR_PAIR(1));
    refresh();
    //
    noecho();
    keypad(stdscr, TRUE);
    cbreak();
    curs_set(0);

    int i = 0;
    int *ptr_i = &i;

    double theMaximumValue = MAXVALUE;
    double * ptr_theMaximumValue = &theMaximumValue;


    for (i = 0; i < MAXVALUE; i++) {
        drawBars("Yet a percentage bar for any kind of procedure which needs a progress bar", 0, ptr_theMaximumValue, ptr_i);
    }
//    for (int i = 0; i < (5 * MAXVALUE); i++) {
//        drawBars("This is a progress bar for a different procedure ", 0, 5 * MAXVALUE, i);
//    }
//    for (int i = 0; i < MAXVALUE; i++) {
//        drawBars("and one more of these procedures which need a progress bar", 0, MAXVALUE, i);
//    }
    printw("... and done.");
    refresh();

    getch();
    endwin();

  return 0;
}

int drawBars(const char * barMeans, const int barNumber, const double * maxValue, double * currentValue) {

double percentage = 0.00;
int changeColorPosition = 0;
char completeString[MAXSCREENWIDTH] = "", gap[MAXSCREENWIDTH] = "";
char currentValueString[10], maxValueString[20], percentageString[4];
int currentValueStringLength = 0, maxValueStringLength = 0, percentageStringLength = 0, gapWidth = 0;
(*currentValue) += 1.00000;

static bool firstCall = true;

    if (firstCall == true) {
        lowerBar = newwin(1,COLS,LINES-1,0);
        wbkgd(lowerBar,COLOR_PAIR(2));
    }

    // calc percentage
    percentage = ((100 * (*currentValue)) / (*maxValue));
    // cast the double percentage to an int, and eventually to a string
    sprintf(percentageString, "%d", (int)percentage);
    // add "%" to the percentage
    strcat(percentageString,"\%");
    // get the length of the percentage string
    percentageStringLength = strlen(percentageString);

    // cast doubles to int to string and get the lengths
    sprintf(currentValueString, "%d", (int)(*currentValue));
    currentValueStringLength = strlen(currentValueString);
    // this adresses a problem with the last value disappearing, it is a logical error,
    // so this is just a workaround
    if ((*currentValue) == (*maxValue)) {
        sprintf(maxValueString, "%d", (int)(*currentValue));
    } else {
        sprintf(maxValueString, "%d", (int)(*maxValue));
    }
    maxValueStringLength = strlen(maxValueString);

    // I want a gap betweet the purpose of the progress bar on the left and the percentage and the values on the right.
    // here I calculate the with of it
    gapWidth = (COLS - strlen(barMeans) - currentValueStringLength - maxValueStringLength - percentageStringLength - 2); // 2 here means one for / one for SPACER

    // and here I prepare it.
    for (int j = 0; j < gapWidth; j++) {
    strcat(gap, " ");
    }

    // putting together the whole output string
    // not elegant though
    strcpy(completeString, ""); //empty it!
    strcat(completeString,barMeans); // text
    strcat(completeString,gap); // as much space(s) as calculated are needed
    strcat(completeString,currentValueString); // current value
    strcat(completeString,"\/"); // just a slash
    strcat(completeString,maxValueString); // of value all together
    strcat(completeString," "); // a SPACER
    strcat(completeString,percentageString); // percentage including percentage sign

    // here I get the position where I want to invert color I get that from the percentage
    changeColorPosition = ((COLS * (int)percentage) / 100); // from here on the background shall change (inverted

    // goto start and moving the cursor here
    wmove(lowerBar,0,0);

    // outputting the string char-by-char and changing color when needed
    for (int i = 0; i < COLS; i++) {
        if (i < changeColorPosition) {
            wattron(lowerBar,COLOR_PAIR(2));
        }
        else {
            wattron(lowerBar,COLOR_PAIR(1));
        }
        waddch(lowerBar, completeString[i]);
    }

    // only in case of the first call of this function the window shall be started
    // this is ensured with a static variable above. after first run. it is set to false
    // so in the second, third, fourth run there will be no attempts to open more windows
    firstCall = false;

    // show what we have so far
    wrefresh(lowerBar);

    // last run done? delwin
    // delete the window
    // touch stdscr to make sure in main the refresh will make the window disappear
    // if window is closed, then it needs to be like you open the window for the first time, so first call i set to true again
    if ((*currentValue) == (*maxValue)) {
        delwin(lowerBar);
        touchwin(stdscr);
        firstCall = true;
        // just show effect, sleep a second
        sleep(1);
    }

return 0; // if okay, else error
}
