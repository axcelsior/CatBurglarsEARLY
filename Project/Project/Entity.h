#ifndef INCLUDED_ENTITY
#define INCLUDED_ENTITY

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Entity
{
public:
	Entity(sf::Vector2i position, sf::IntRect rect);
	~Entity();
	virtual void Update() = 0;
	virtual void Render(sf::RenderWindow *mainWindow) = 0;
	virtual sf::Vector2i GetPosition()=0;
protected:
	sf::Vector2i mPosition, mTexturePosition;
	sf::Sprite mSprite;
	sf::IntRect mHitBox;
};

#endif