#pragma once
#include "SFML/Graphics.hpp"
#include "brick.h"

struct BrickRow {
	Brick arr[10];
	int size;
	
};
void BrickInit(BrickRow& brickRow, int sixe, sf::Vector2f position, float stepX)
{
	brickRow.size = size;
	for (int i = 0; i < brickRow.size; i++) {
		sf::Color color{ (sf::Uint8)(25 * i), 100, 100 };
		sf::Vector2f brickPos{position.x + i * stepX, }

	}
}
