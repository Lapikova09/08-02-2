#pragma once
#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"
struct Obstacle {
	sf::Texture texture;
	sf::Sprite sprite;
	float speedY;
	float speedX;
};
void obstacleInit(Obstacle& obs) {
	obs.texture.loadFromFile("obs.png");
	obs.sprite.setTexture(obs.texture);
	sf::Vector2f first{ 150.f, 0.f };
	sf::Vector2f second{ 200.f, 0.f };
	sf::Vector2f third{ 250.f, 0.f };
	sf::Vector2f fourth{ 300.f, 0.f };
	int choice = rand() % 4 + 1;
	if (choice == 1) { obs.sprite.setPosition(first); }
	else if (choice == 2) { obs.sprite.setPosition(second); }
	else if (choice == 3) { obs.sprite.setPosition(third); }
	else if (choice == 4) { obs.sprite.setPosition(fourth); }
	obs.speedY = 3.f;
	obs.speedX = 0.f;
}
void obstacleUpdate(Obstacle& obs) {
	obs.sprite.move(obs.speedX, obs.speedY);
	if (obs.sprite.getPosition().y >= WINDOW_HEIGHT) {

	}
}
void obstacleDraw(sf::RenderWindow& window, const Obstacle& obs) {
	window.draw(obs.sprite);
}