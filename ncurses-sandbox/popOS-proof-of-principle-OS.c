#include <ncurses.h>

#define MINSIDEBARWIDTH 30
#define SIDEBARDIVIDER 7


int main() {
	// init
    initscr(); // init ncurses
    noecho(); // no echoing on screen
    clear(); // empty the screen
    curs_set(0); // no visible cursor

    WINDOW *sidebar_opener;
    WINDOW *sidebar;
    int sidebaropen = 0;
    char input;
    int sidebarwidth = MINSIDEBARWIDTH;

    /* colors */
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLUE);

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
	}

	// and out
    refresh();
    getch();
	endwin();
    return(0);
}

