#include <ncurses.h>

int main() {
	// init
    initscr(); // init ncurses
    noecho(); // no echoing on screen
    clear(); // empty the screen
    curs_set(0); // no visible cursor

    WINDOW *sidebar_opener;

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
		wgetch(sidebar_opener);
	}

	// and out
    refresh();
    getch();
	endwin();
    return(0);
}

