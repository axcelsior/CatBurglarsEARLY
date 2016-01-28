#include "Controller.h"
#include <iostream>

Controller::Controller()
{
	
}

Controller::~Controller(){

}

void Controller::assignController(int player, Cat1 *cat){
	if (player == 1)
	{
		mCat = cat;
	}
}

void Controller::move(Cat1 *cat){
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		cat->move(0, -5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		cat->move(-5, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		cat->move(0, 5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		cat->move(5, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		cat->isInteracting = true;
	}
	else{
		cat->isInteracting = false;
	}
}