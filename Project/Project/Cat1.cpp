#include "Cat1.h"
#include <iostream>

Cat1::Cat1(sf::Texture *texture, int x, int y, int ID) : GameObject(),
mID(ID)
{
	mSprite.setTexture(*texture, true);
	mSprite.setPosition(x, y);
	mPosition.x = x;
	mPosition.y = y;
}
Cat1::~Cat1(){

}

void Cat1::Render(sf::RenderWindow *mainWindow){
	mainWindow->draw(mSprite);
}

void Cat1::Update(){
	
}

int Cat1::getChannelID(){
	return -100;
}

void Cat1::move(int x, int y){
	mPosition.x += x;
	mPosition.y += y;
	mSprite.setPosition(sf::Vector2f(mPosition));
}

sf::Vector2i Cat1::GetPosition(){
	return mPosition;
}

bool Cat1::getInteraction(GameObject *obj){
	return false;
}

bool Cat1::interacting(){
	return isInteracting;
	//return true;
}

bool Cat1::isReciever(){
	return false;
}