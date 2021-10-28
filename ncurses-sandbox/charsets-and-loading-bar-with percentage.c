#include <ncurses.h>
#include <string.h>

#define MAXVALUE 1234567
#define MAXSCREENWIDTH 256

WINDOW * lowerBar;

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

    //
    noecho();
    keypad(stdscr, TRUE);
    cbreak();
    curs_set(0);

    for (int i = 0; i < MAXVALUE; i++) {
        drawBars("Yet a percentage bar for any kind of procedure which needs a progress bar", 0, MAXVALUE, i);
    }
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

/*
This function draws the actual percentage bar(s)
Wenn noch kein Window existiert, wird eines gemacht.

wenn es existiert, wird es mit den aktuellen Werten geupdated und refreshed

*/
//if (1) { // window exists
//// draw it
//} else {
//// make the window
    lowerBar = newwin(1,COLS,LINES-1,0);
    wbkgd(lowerBar,COLOR_PAIR(2));

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


    // notwendig bei alles voll
//    if (currentValue == maxValue) {
//        sprintf(maxValueString, "%d", (int)currentValue);
//        maxValueStringLength = strlen(maxValueString);
//    }


    gapWidth = (COLS - strlen(barMeans) - currentValueStringLength - maxValueStringLength - percentageStringLength - 2); // 2 here means one for / one for SPACER

    for (int j = 0; j < gapWidth; j++) {
    strcat(gap, " ");
    }
    strcpy(completeString, ""); //empty it!
    strcat(completeString,barMeans);
    strcat(completeString,gap);
    //strcat(completeString,"                                            ");
    strcat(completeString,currentValueString);
    strcat(completeString,"\/");
    strcat(completeString,maxValueString);
    strcat(completeString," ");
    strcat(completeString,percentageString);

    changeColorPosition = ((COLS * (int)percentage) / 100);
    wmove(lowerBar,0,0);
    for (int i = 0; i < COLS; i++) {
        if (i == changeColorPosition) {
            wattron(lowerBar,COLOR_PAIR(1));
        }
        waddch(lowerBar, completeString[i]);
    }

    // wprintw(lowerBar,"Test: %s: %d%, Abolute: %d ",completeString, (int)percentage, changeColorPosition);
    wrefresh(lowerBar);
//}

return 0; // if okay, else error
}

//
//
//#include <ncurses.h>
//#include <locale.h>
//int main(void)
//        {
//        setlocale(LC_ALL, "");
//        initscr();
//        attron(A_UNDERLINE);
//        attroff(A_UNDERLINE);
//        printw("Upper left corner         "); addch(ACS_ULCORNER); printw("  ACS_ULCORNER\n");
//        printw("Lower left corner         "); addch(ACS_LLCORNER); printw("  ACS_LLCORNER\n");
//        printw("Upper right corner        "); addch(ACS_URCORNER); printw("  ACS_URCORNER\n");
//        printw("Lower right corner        "); addch(ACS_LRCORNER); printw("  ACS_LRCORNER\n");
//        printw("Tee pointing right        "); addch(ACS_LTEE); printw("  ACS_LTEE\n");
//        printw("Tee pointing left         "); addch(ACS_RTEE); printw("  ACS_RTEE\n");
//        printw("Tee pointing up           "); addch(ACS_BTEE); printw("  ACS_BTEE\n");
//        printw("Tee pointing down         "); addch(ACS_TTEE); printw("  ACS_TTEE\n");
//        printw("Horizontal line           "); addch(ACS_HLINE); printw("  ACS_HLINE\n");
//        printw("Vertical line             "); addch(ACS_VLINE); printw("  ACS_VLINE\n");
//        printw("Large Plus or cross over  "); addch(ACS_PLUS); printw("  ACS_PLUS\n");
//        printw("Scan Line 1               "); addch(ACS_S1); printw("  ACS_S1\n");
//        printw("Scan Line 3               "); addch(ACS_S3); printw("  ACS_S3\n");
//        printw("Scan Line 7               "); addch(ACS_S7); printw("  ACS_S7\n");
//        printw("Scan Line 9               "); addch(ACS_S9); printw("  ACS_S9\n");
//        printw("Diamond                   "); addch(ACS_DIAMOND); printw("  ACS_DIAMOND\n");
//        printw("Checker board (stipple)   "); addch(ACS_CKBOARD); printw("  ACS_CKBOARD\n");
//        printw("Degree Symbol             "); addch(ACS_DEGREE); printw("  ACS_DEGREE\n");
//        printw("Plus/Minus Symbol         "); addch(ACS_PLMINUS); printw("  ACS_PLMINUS\n");
//        printw("Bullet                    "); addch(ACS_BULLET); printw("  ACS_BULLET\n");
//        printw("Arrow Pointing Left       "); addch(ACS_LARROW); printw("  ACS_LARROW\n");
//        printw("Arrow Pointing Right      "); addch(ACS_RARROW); printw("  ACS_RARROW\n");
//        printw("Arrow Pointing Down       "); addch(ACS_DARROW); printw("  ACS_DARROW\n");
//        printw("Arrow Pointing Up         "); addch(ACS_UARROW); printw("  ACS_UARROW\n");
//        printw("Board of squares          "); addch(ACS_BOARD); printw("  ACS_BOARD\n");
//        printw("Lantern Symbol            "); addch(ACS_LANTERN); printw("  ACS_LANTERN\n");
//        printw("Solid Square Block        "); addch(ACS_BLOCK); printw("  ACS_BLOCK\n");
//        printw("Less/Equal sign           "); addch(ACS_LEQUAL); printw("  ACS_LEQUAL\n");
//        printw("Greater/Equal sign        "); addch(ACS_GEQUAL); printw("  ACS_GEQUAL\n");
//        printw("Pi                        "); addch(ACS_PI); printw("  ACS_PI\n");
//        printw("Not equal                 "); addch(ACS_NEQUAL); printw("  ACS_NEQUAL\n");
//        printw("UK pound sign             "); addch(ACS_STERLING); printw("  ACS_STERLING\n\n");
//        refresh();
//        getch();
//        endwin();
//        return 0;
//        }

//#define MAXVALUE 1234567
//
//WINDOW *lowerBar;
//
//
//
//int makeBar(int maxValue, int actualValue);
//
//int main(int argc, char *argv[])
//{
//    initscr();
//    refresh();
//
//    // start color
//    start_color();
//    init_pair(1,COLOR_WHITE,COLOR_RED);
//    wrefresh(lowerBar);
//
//    noecho();
//    keypad(stdscr, TRUE);
//    cbreak();
//    curs_set(0);
//
//    // make the window
//    lowerBar = newwin(1,COLS,LINES-1,0);
//    wbkgd(lowerBar,COLOR_PAIR(1));
//
//    for (int i = 1; i < MAXVALUE; i++) {
//        makeBar(MAXVALUE,i);
//    }
//
//    refresh();
//    getch();
//
//    endwin();
//
//  return 0;
//}
//
//
//int makeBar(int maxValue, int actualValue) {
//
//// COLS * ACT   CUR
//// --- ------ =
//// MAX
//    float currenSpot = (((float)COLS / (float)maxValue) * (float)actualValue);
//
//    //wmove(lowerBar,0,0);
//    //wprintw(lowerBar,"Current Spot: %f",currenSpot);
//    mvwaddch(lowerBar,0,(int)currenSpot,'_');
//
//    wrefresh(lowerBar);
//    //napms(20);
//return 0;
//}


//int main()
//{
//    int a;
//
//    initscr();
//
//    for(a=32;a<127;a++)
//    {
//        // printw("\t%2X: ",a);
//        addch(A_ALTCHARSET | a);
//    }
//    refresh();
//    getch();
//
//    endwin();
//    return(0);
//}

//#include <ncurses.h>
//
//int main()
//{
//	initscr();			/* Start curses mode 		  */
//	printw("Hello World !!!\n");	/* Print Hello World		  */
//	refresh();
//	getch();			/* Print it on to the real screen */
//	def_prog_mode();		/* Save the tty modes		  */
//	endwin();			/* End curses mode temporarily	  */
//	system("/bin/sh");		/* Do whatever you like in cooked mode */
//	reset_prog_mode();		/* Return to the previous tty mode*/
//					/* stored by def_prog_mode() 	  */
//	refresh();			/* Do refresh() to restore the	  */
//					/* Screen contents		  */
//	printw("Another String\n");	/* Back to curses use the full    */
//	getch();
//	refresh();			/* capabilities of curses	  */
//	endwin();			/* End curses mode		  */
//
//	return 0;
//}


//#include <ncurses.h>
//int main(void)
//        {
//        int counter, counter2=0;
//        initscr();
//        curs_set(0);
//        attron(A_UNDERLINE);
//        mvprintw(0,24,"NCURSES ALTCHARSET CHARACTERS\n");
//        attroff(A_UNDERLINE);
//        for (counter=43; counter < 256; counter++)
//                {
//                printw("%3d = ", counter);
//                addch(counter | A_ALTCHARSET);
//                if (counter2 < 7)
//                        {
//                        addch(' ');
//                        addch(ACS_VLINE);
//                        printw(" ");
//                        }
//                counter2++;
//                if (counter2 > 7)
//                        {
//                        addch('\n');
//                        counter2=0;
//                        }
//                switch (counter)
//                        {
//                        case 46:
//                                counter=47;
//                                break;
//                        case 48:
//                                counter=95;
//                                break;
//                        case 97:
//                                counter=101;
//                                break;
//                        case 126:
//                                counter=127;
//                                break;
//                        case 128:
//                                counter=160;
//                                break;
//                        case 172:
//                                counter=173;
//                        }
//                }
//        getch();
//        endwin();
//        return 0;
//        }

