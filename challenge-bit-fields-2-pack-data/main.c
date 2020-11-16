#include <stdio.h>
#include <stdbool.h>   //C99, defines bool, true, false


// definitions

/* line styles     */
#define SOLID   0
#define DOTTED  1
#define DASHED  2

/* primary colors  */
#define BLUE    4
#define GREEN   2
#define RED     1

/* mixed colors    */
#define BLACK   0
#define YELLOW  (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN    (GREEN | BLUE)
#define WHITE   (RED | GREEN | BLUE)

// an Array of strings with 8 members
const char * colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

// the struct for the box properties
// according to the definition above
struct box_props {
    // opaque or transparent
    bool opaque                 : 1;  // or unsigned int (pre C99)
    // fill color as a mix of RGB where R = 1, G = 2, B = 4 so RGB as 111.
    unsigned int fill_color     : 3;
    // padding
    unsigned int                : 4;
    // show border (1) or not (0)
    bool show_border            : 1;  // or unsigned int (pre C99)
    // boder color as a mix of RGB where R = 1, G = 2, B = 4 so RGB as 111.
    unsigned int border_color   : 3;
    // Style has three option, needs 2 bits, 0 = solid, 1 = dotted, 2 = dashed
    unsigned int border_style   : 2;
    // rest is padding)
    unsigned int                : 2;
};

// declare a function showing a struct of box properties with a pointer to it
void show_settings(const struct box_props * pb);

int main(void) {

    /* create and initialize box_props structure for box */
    struct box_props box = {true, YELLOW , true, GREEN, DASHED};

    printf("Original box settings:\n");
    show_settings(&box);

    box.opaque = false;
    box.fill_color = WHITE;
    box.border_color = MAGENTA;
    box.border_style = SOLID;
    printf("\nModified box settings:\n");
    show_settings(&box);

    return 0;
}


// the function to show the struct box
void show_settings(const struct box_props * pb) {
    // these values we have in direct access by the members of the struct
    printf("Box is %s.\n", pb->opaque == true ? "opaque": "transparent");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n",  pb->show_border == true ? "shown" : "not shown");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf ("The border style is ");

    // but the value of the border style we have to chose by a switch statement
    switch(pb->border_style)
    {
        case SOLID  : printf("solid.\n"); break;
        case DOTTED : printf("dotted.\n"); break;
        case DASHED : printf("dashed.\n"); break;
        default     : printf("unknown type.\n");
    }
}