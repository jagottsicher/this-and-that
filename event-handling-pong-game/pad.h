#ifndef PAD_H_INCLUDED
#define PAD_H_INCLUDED

#include <raylib.h>

typedef struct {
    int UpButton;
    int DownButton;
} InputScheme;

typedef struct {
    InputScheme Scheme;
    int Score;
    float Speed;

    Vector2 Position;
    Vector2 Size;
} Pad;

#endif // PAD_H_INCLUDED
