#include <stdio.h>
// #include <conio.h>
// #include <curses.h>
#include <termios.h>
#include <unistd.h>

int mygetch (void)
{
    int ch;
    struct termios oldt, newt;

    tcgetattr ( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO );
    tcsetattr ( STDIN_FILENO,TCSANOW, &newt );
    ch = getchar();
    tcsetattr ( STDIN_FILENO,TCSANOW, &oldt );

    return ch;
}


void main ( void )
{
    // bis zu 255 Zeichen als char empfangen, aber muss mit Return abgeschlossen werden
    char text[255];
    printf("Eingabe\n");
    fgets(text, 255, stdin);
    printf("Eingegeben wurde %s\n", text);

    // nur 1 Zeichen als char empfangen, here msdos mit conio-h funktioniert nicht, ncurses probieren
    // cputs("Eingabe (eine Taste)\n");
    // cprintf(("Eingegeben wurde die Taste %c\n", cgetc());

    // nur 1 Zeichen als char empfangen, ncurses
    // printf("Eingabe (eine Taste)\n");
    // cbreak();
    // int inputChar = getch();
    // printf("Eingegeben wurde die Taste mit dem ASCII-Code %d\n", inputChar);
    printf("Eingabe mit mygetch-Funktion\n");
    while (1)
    {
    text[1] = mygetch();
    printf("%c", text[1]);
    }
}
