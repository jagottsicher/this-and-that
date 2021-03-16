// main.c

#include "main.h"

// #define INITIAL_BALL_VELOCITY {.x = 100, .y = 50}


void Loop(GameData* data);
void Update(GameData* data);
void Draw(GameData* data);

int main()
{
    int screenWidth = 800;
    int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Pong");
    SetTargetFPS(60);

    int height = GetScreenHeight();
    int width = GetScreenWidth();

    GameData data;

    Vector2 ballPosition = {.x = width / 2, .y = height / 2};
    Vector2 ballVelocity = {.x = 100, .y = 50};
    data.ball.Position = ballPosition;
    data.ball.Velocity = ballVelocity;

    Vector2 padSize = {.x = 10, .y = 100};

    InputScheme player1Input = {.UpButton = KEY_W, .DownButton = KEY_S};
    Vector2 player1Position = {.x = (20), .y = (height / 2.f)};
    data.player1.Position = player1Position;
    data.player1.Size = padSize;
    data.player1.Speed = 220;
    data.player1.Score = 0;
    data.player1.Scheme = player1Input;

    InputScheme player2Input = {.UpButton = KEY_UP, .DownButton = KEY_DOWN};
    Vector2 player2Position = {.x = (width - 20.f - padSize.x), .y = (height / 2.f)};
    data.player2.Position = player2Position;
    data.player2.Size = padSize;
    data.player2.Speed = 220;
    data.player2.Score = 0;
    data.player2.Scheme = player2Input;

    Loop(&data);

    return 0;
}

void Loop(GameData* data)
{
    // The main game loop in raylib is really simple - just loop until window should close!
    while (!WindowShouldClose())
    {
        // Update();
        UpdatePad(&data->player1);
		UpdatePad(&data->player2);
		UpdateBall(&data->ball);
        //Draw();
    }
}

void Update(GameData* data) {

    int height = GetScreenHeight();
    int width = GetScreenWidth();
    Vector2 ballVelocity = {.x = 100, .y = 50};

	if (DetectBallTouchesPad(&data->ball, &data->player1) || DetectBallTouchesPad(&data->ball, &data->player2))
	{
		data->ball.Velocity.x *= -1;
	}

	if (data->ball.Position.y > height || data->ball.Position.y < 0)
	{
		data->ball.Velocity.y *= -1;
	}

	if (data->ball.Position.x > width)
	{
		data->player1.Score += 1;
		Vector2 ballPosition = {.x = width / 2, .y = height / 2};
		data->ball.Position = ballPosition;
		data->ball.Velocity = ballVelocity;
	}

	if (data->ball.Position.x < 0)
	{
		data->player2.Score += 1;
		Vector2 ballPosition = {.x = width / 2, .y = height / 2};
		data->ball.Position = ballPosition;
		data->ball.Velocity = ballVelocity;
	}
}

void Draw(GameData* data)
{
    BeginDrawing();
    ClearBackground(BLACK);

    // Create the structs giving values to x and y
	Vector2 from = {.x = (GetScreenWidth() / 2.f), .y = 5};
	Vector2 to = {.x = (GetScreenWidth() / 2.f), .y = (GetScreenHeight() - 5.f)};

	// Pass the structs to the DrawLineEx function to draw the line on the screen
	DrawLineEx(from, to, 2, LIGHTGRAY);

	const char* scoreLeft = TextFormat("%d", 10);
	int scoreSizeLeft = MeasureText(scoreLeft, 20);
	DrawText(scoreLeft, (GetScreenWidth() / 2) - 10 - scoreSizeLeft, 10, 20, LIGHTGRAY);

	const char* scoreRight = TextFormat("%d", 11);
	DrawText(scoreRight, (GetScreenWidth() / 2) + 10, 10, 20, LIGHTGRAY);

	DrawBall(&data->ball);
	DrawPad(&data->player1);
	DrawPad(&data->player2);

    EndDrawing();
}