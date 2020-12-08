#include <ncurses.h>

int main()
{
    initscr();
    printw("This is just a simple text\n");
    printw("This is text on the second line\n");
    refresh();
    getch();
    move(3,10);
    printw("This is text on the fourth line wihch is intended 10 chars\n");
    refresh();
    getch();


    endwin();
    return 0;
}
