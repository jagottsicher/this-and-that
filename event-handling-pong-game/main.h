// main.h

#ifndef PONG_MAIN_H
#define PONG_MAIN_H

#include <raylib.h>

#include "pad.h"
#include "ball.h"

typedef struct {
    Pad player1;
    Pad player2;
    Ball ball;
} GameData;

#endif
