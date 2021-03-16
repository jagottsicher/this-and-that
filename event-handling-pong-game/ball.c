
#include "ball.h"

#define SPEEDFACTOR (GetRandomValue(4, 6))

void UpdateBall(Ball* ball)
{
    ball->Position.x += SPEEDFACTOR * (GetFrameTime() * ball->Velocity.x);
    ball->Position.y += SPEEDFACTOR * (GetFrameTime() * ball->Velocity.y);
}

void DrawBall(Ball* ball)
{
    DrawRectangle(ball->Position.x - 5, ball->Position.y - 5, 10, 10, WHITE);
}

bool DetectBallTouchesPad(Ball* ball, Pad* pad)
{
    if (ball->Position.x >= pad->Position.x && ball->Position.x <= pad->Position.x + pad->Size.x)
    {
        if (ball->Position.y >= pad->Position.y - (pad->Size.y / 2) &&
            ball->Position.y <= pad->Position.y + (pad->Size.y / 2))
        {
            return true;
        }
    }

    return false;
}
