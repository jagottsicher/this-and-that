#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>

int msleep(long tms);

int main(int argc, char *argv[]) {

    int x = 0, y = 0;
    int max_y = 0, max_x = 0;
    int next_x = 0;
    int direction = 1;

    initscr();
    noecho();
    curs_set(FALSE);

    // stdscr created by initscr
    getmaxyx(stdscr, max_y, max_x);

    while (1) {
        getmaxyx(stdscr, max_y, max_x);
        clear();
        mvprintw(y,x, "o");
        refresh();
        msleep(10);
        next_x = x + direction;

        if (next_x >= max_x || next_x < 0) {
            direction *= -1;
        } else {
            x += direction;
        }
    }

    endwin();

    return 0;
}


// sleep in milliseconds
int msleep(long tms)
{
    struct timespec ts;
    int ret;

    if (tms < 0)
    {
    return -1;
    }

    ts.tv_sec = tms / 1000;
    ts.tv_nsec = (tms % 1000) * 1000000;

    do
    {
    // printf("sleeping for %d", ret);
    ret = nanosleep(&ts, &ts);
    }
    while (ret);

    return ret;
}
