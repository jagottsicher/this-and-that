
#include <ncurses.h>

int main()
{
    int ch;

    initscr();
    addstr("Type a few characters to checkout the returns from he getch() function.\n");
    addstr("Type ~ to stop.\n");
    refresh();

    while ( (ch = getch()) != '~');

    endwin();
    return 0;
}
