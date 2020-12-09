
#include <ncurses.h>

int main () {
    char first[32];
    char last[32];

    initscr();
    addstr("Given name: ");
    getnstr(first,32);
    addstr("Family name: ");
    getnstr(last,32);
    getch();
    printw("Hello, %s %s", first, last);
    refresh();
    getch();

    endwin();
    return 0;
}
