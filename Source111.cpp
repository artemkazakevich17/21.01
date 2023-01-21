#include "settings.h"
#include "founctions.h"
#include "bat.h"
#include "ball.h"
#include "textobj.h"
#include "brick.h"
using namespace sf;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	srand(time(0));
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		WINDOW_TITLE);
	int score = 0;
	Bat bat;
	batInit(bat);
	Ball ball;
	ballInit(ball);
	TextObj scoreText;
	textInit(scoreText, score);
	Brick brick;
	brickInit(brick, Color::Yellow, Vector2f{ 10.f, 50.f });
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame(bat, ball, scoreText, score, brick);
		//имгра закончена? - прервать цикл
		if (ball.shape.getPosition().y >= WINDOW_HEIGHT - 2 * BALL_RADIUS)
			break;
		checkCollisions(bat, ball);
		drawGame(window, bat, ball, scoreText, brick);
		drawGame(window, bat, ball, scoreText, brick);
	}

	return 0;
}