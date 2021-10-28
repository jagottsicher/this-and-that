#include <ncurses.h>
#include <string.h>

#define MAXVALUE (123456)
#define MAXSCREENWIDTH 256

WINDOW * lowerBar;
//lowerBar = nullptr;

int drawBars(const char * barMeans, int barNumber, double maxValue, double currentValue);

int main(int argc, char *argv[])
{
    // start ncurses
    initscr();
    refresh();

    // start color
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLACK); // Full bar
    init_pair(2,COLOR_BLACK,COLOR_WHITE); // Empty bar bar
    // set "real" background colors for sdtscr provided by ncurses instead of partly interpreted by tty
    bkgd(COLOR_PAIR(1));
    refresh();
    //
    noecho();
    keypad(stdscr, TRUE);
    cbreak();
    curs_set(0);

    for (int i = 0; i < MAXVALUE; i++) {
        drawBars("Yet a percentage bar for any kind of procedure which needs a progress bar", 0, MAXVALUE, i);
    }
    for (int i = 0; i < (5 * MAXVALUE); i++) {
        drawBars("This is a progress bar for a different procedure ", 0, 5 * MAXVALUE, i);
    }
    for (int i = 0; i < MAXVALUE; i++) {
        drawBars("and one more of these procedures which need a progress bar", 0, MAXVALUE, i);
    }
    printw("... and done.");
    refresh();

    getch();
    endwin();

  return 0;
}

int drawBars(const char * barMeans, int barNumber, const double maxValue, double currentValue) {

double percentage = 0.00;
int changeColorPosition = 0;
char completeString[MAXSCREENWIDTH] = "", gap[MAXSCREENWIDTH] = "";
char currentValueString[10], maxValueString[20], percentageString[4];
int currentValueStringLength = 0, maxValueStringLength = 0, percentageStringLength = 0, gapWidth = 0;
currentValue += 1.00000;

static bool firstCall = true;

    if (firstCall == true) {
        lowerBar = newwin(1,COLS,LINES-1,0);
        wbkgd(lowerBar,COLOR_PAIR(2));
    }

    // calc percentage
    percentage = ((100 * currentValue) / maxValue);
    sprintf(percentageString, "%d", (int)percentage);
    strcat(percentageString,"\%");
    percentageStringLength = strlen(percentageString);

    // cast doubles to int to string and get the lengths
    sprintf(currentValueString, "%d", (int)currentValue);
    currentValueStringLength = strlen(currentValueString);

    if (currentValue == maxValue) {
        sprintf(maxValueString, "%d", (int)currentValue);
    } else {
        sprintf(maxValueString, "%d", (int)maxValue);
    }
    maxValueStringLength = strlen(maxValueString);

    gapWidth = (COLS - strlen(barMeans) - currentValueStringLength - maxValueStringLength - percentageStringLength - 2); // 2 here means one for / one for SPACER

    for (int j = 0; j < gapWidth; j++) {
    strcat(gap, " ");
    }

    strcpy(completeString, ""); //empty it!
    strcat(completeString,barMeans); // text
    strcat(completeString,gap); // as much space(s) as calculated are needed
    strcat(completeString,currentValueString); // current value
    strcat(completeString,"\/"); // just a slash
    strcat(completeString,maxValueString); // of value all together
    strcat(completeString," "); // a SPACER
    strcat(completeString,percentageString); // percentage including percentage sign

    changeColorPosition = ((COLS * (int)percentage) / 100); // from here on the background shall change (inverted
    wmove(lowerBar,0,0);

    for (int i = 0; i < COLS; i++) {
        if (i < changeColorPosition) {
            wattron(lowerBar,COLOR_PAIR(2));
        }
        else {
            wattron(lowerBar,COLOR_PAIR(1));
        }
        waddch(lowerBar, completeString[i]);
    }

    firstCall = false;

    wrefresh(lowerBar);

    //last run done? delwin
    if (currentValue == maxValue) {
        delwin(lowerBar);
        touchwin(stdscr);
        firstCall = true;
    }

return 0; // if okay, else error
}
