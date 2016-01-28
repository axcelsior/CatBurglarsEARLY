#ifndef INCLUDE_PLAYER
#define INCLUDE_PLAYER

#include "GameObject.h"

class Player: public GameObject
{
public:
	Player();
	~Player();
	virtual void Render(sf::RenderWindow *mainWindow) = 0;
	virtual void Update() = 0;
	virtual void move(int x, int y) = 0;
private:
};

#endif