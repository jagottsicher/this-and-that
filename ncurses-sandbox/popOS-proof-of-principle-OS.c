#include <ncurses.h>
#include <time.h>

#define MINSIDEBARWIDTH 30
#define SIDEBARDIVIDER 7

// window for clock global
WINDOW *space4clock;


int main() {
	// init
    initscr(); // init ncurses
    noecho(); // no echoing on screen
    clear(); // empty the screen
    curs_set(0); // no visible cursor
    // cbreak(); // no line buffering
    halfdelay(1);

	// for sidebar
    WINDOW *sidebar_opener;
    WINDOW *sidebar;
    int sidebaropen = 0;
    char input;
    int sidebarwidth = MINSIDEBARWIDTH;

	// for clock
	time_t now;
    struct tm *clock;

	// write the current time
	void writeCurrentTime(void);

    /* colors */
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLUE);
    init_pair(2,COLOR_WHITE,COLOR_RED);

    // init the sidebar opener
	sidebar_opener = newwin(3,3,0,0);
	wbkgd(sidebar_opener, COLOR_PAIR(1));
	if (sidebar_opener == NULL) {
		printf("Opening the window epic-failed");
		refresh();
		getch();
	} else {
		wmove(sidebar_opener,1,1);
		waddch(sidebar_opener,A_ALTCHARSET | ACS_PLMINUS);
		wrefresh(sidebar_opener);
	}

	// init a window for clock
	space4clock = newwin(1,8,0,COLS - 8);
	wbkgd(space4clock, COLOR_PAIR(2));
	if (space4clock == NULL) {
		printf("Opening the clock window epic-failed");
		refresh();
		getch();
	} else {
		writeCurrentTime();
		// waddstr(space4clock, "12:34:56");
		wrefresh(space4clock);
	}

	while (1) {
		input = wgetch(sidebar_opener);
		sidebarwidth = ((COLS / SIDEBARDIVIDER) > MINSIDEBARWIDTH) ? MINSIDEBARWIDTH : (COLS / SIDEBARDIVIDER);

		if (input == '+') {
			if (sidebaropen == 0) {
				mvwin(sidebar_opener,0,3);
				sidebar = newwin(COLS,3,0,0);
				wbkgd(sidebar, COLOR_PAIR(1));
				sidebaropen = 1;
				if (sidebar == NULL) {
					printf("Opening the window epic-failed");
					break;
				} else {
					mvwaddstr(sidebar,0,0,"\n\n\n\n 1\n\n 2\n\n 3\n\n .\n\n X\n");
					wrefresh(sidebar);
					wrefresh(sidebar_opener);
				}
			} else
					if (sidebaropen == 1) {
						mvwin(sidebar_opener,0,sidebarwidth);
						wresize(sidebar,COLS,sidebarwidth);
						wbkgd(sidebar, COLOR_PAIR(1));
						sidebaropen = 2;
						if (sidebar == NULL) {
							printf("Resizing the window epic-failed");
							break;
						} else {
							mvwaddstr(sidebar,0,0,"\n\n\n\n Frist\n\n Second\n\n Third\n\n ...\n\n Xth\n");
							wrefresh(sidebar);
							wrefresh(sidebar_opener);
						}
					}
				 else
					if (sidebaropen == 2) {
						delwin(sidebar);
						touchwin(stdscr);
						mvwin(sidebar_opener,0,0);
						sidebaropen = 0;
						refresh();
						wrefresh(sidebar_opener);
					}

			}
	input = NULL;
	writeCurrentTime();
	}

	// and out
    refresh();
    getch();
	endwin();
    return(0);
}


void writeCurrentTime(void) {
    time_t now;
    struct tm *clock;

    /* fetch the current time */
    time(&now);
    /* fill the time structure */
    clock = localtime(&now);
    /* display the clock */
	mvwin(space4clock,0,COLS - 8);
	mvwprintw(space4clock,0,0, "%2d:%02d:%2d",
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec
		);
	wrefresh(space4clock);
    return(0);
}

