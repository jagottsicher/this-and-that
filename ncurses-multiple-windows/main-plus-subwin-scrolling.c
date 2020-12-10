
#include <ncurses.h>

void draw_borders(WINDOW *screen);

int main(int argc, char *argv[]) {
    int parent_x, parent_y, new_x, new_y;
    int left_size = 10;
    initscr();
    noecho();
    curs_set(FALSE);

    // init color use and define two colorpairs
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLUE);
    init_pair(2,COLOR_BLACK, COLOR_YELLOW);
    init_pair(3,COLOR_BLACK, COLOR_CYAN);


    // get our maximum window dimensions
    getmaxyx(stdscr, parent_y, parent_x);

    // set up initial windows
    WINDOW *field = newwin(parent_y - left_size, parent_x, 0, 0);
    WINDOW *left = newwin(left_size, parent_x/2, parent_y - left_size, 0);
    WINDOW *right = newwin(left_size, parent_x/2, parent_y - left_size, parent_x/2);
    WINDOW *subwindow;


    //assign color to windows
    wbkgd(field,COLOR_PAIR(1));
    wbkgd(left,COLOR_PAIR(2));
    wbkgd(right,COLOR_PAIR(3));

    // draw our borders
    draw_borders(field);
    draw_borders(left);
    draw_borders(right);


// simulate the game loop
//    while(1) {
//        getmaxyx(stdscr, new_y, new_x);
//        if (new_y != parent_y || new_x != parent_x) {
//            parent_x = new_x;
//            parent_y = new_y;
//            wresize(field, new_y - left_size, new_x);
//            wresize(left, left_size, new_x/2);
//            wresize(right, left_size, new_x/2);
//
//            mvwin(left, new_y - left_size, 0);
//            mvwin(right, new_y - left_size, parent_x/2);
//
//
//
//            wclear(stdscr);
//            wclear(field);
//            wclear(left);
//            wclear(right);
//
//            draw_borders(field);
//            draw_borders(left);
//            draw_borders(right);
//
//        }

            wresize(field,parent_y - left_size, parent_x);
            wresize(left, left_size, parent_x/2);
            wresize(right, left_size, parent_x/2);

            mvwin(left, parent_y - left_size, 0);
            mvwin(right, parent_y - left_size, parent_x/2);

            wclear(stdscr);
            wclear(field);
            wclear(left);
            wclear(right);

            draw_borders(field);
//            draw_borders(left);
            draw_borders(right);


        // draw to our windows
        mvwprintw(field, 1, 1, "Field\n");
        mvwprintw(left, 1, 1, "Left. ");
        mvwprintw(right, 1, 1, "Right");

        // refresh each window
        refresh();
        wrefresh(field);
        wrefresh(left);
        wrefresh(right);

        subwindow = derwin(left, left_size-2, (parent_x/2)-2, 1, 1);
        //scroll newly setup subwindow or not
        scrollok(subwindow, TRUE);


        for (int i = 0 ; i < 20 ; i++) {
            waddstr(subwindow, "This is just some boring placeholder text. ");
            napms(100);
            wrefresh(subwindow);
        }

        for (int i = 0 ; i < 3 ; i++) {
            scroll(subwindow);
            napms(100);
            wrefresh(subwindow);
        }

        for (int i = 0 ; i < 1 ; i++) {
            wscrl(subwindow,-3);
            napms(100);
            wrefresh(subwindow);
        }

//    }
getch();
        // clean up
        delwin(field);
        delwin(left);
        endwin();
return 0;
}

void draw_borders(WINDOW *screen) {

    int x, y, i; getmaxyx(screen, y, x);

    // 4 corners
    mvwprintw(screen, 0, 0, "+");
    mvwprintw(screen, y - 1, 0, "+");
    mvwprintw(screen, 0, x - 1, "+");
    mvwprintw(screen, y - 1, x - 1, "+");

    // sides
    for (i = 1; i < (y - 1); i++) {
        mvwprintw(screen, i, 0, "|");
        mvwprintw(screen, i, x - 1, "|");
    }

    // top and bottom
    for (i = 1; i < (x - 1); i++) {
        mvwprintw(screen, 0, i, "-");
        mvwprintw(screen, y - 1, i, "-");
    }
}
