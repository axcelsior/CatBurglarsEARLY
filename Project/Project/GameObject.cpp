#include "GameObject.h"

static const int width = 50, height = 50;
sf::Vector2i position;
GameObject::GameObject() :Entity(position, sf::IntRect(position.x, position.y, width, height))
{

}

GameObject::~GameObject(){

}

void GameObject::Render(sf::RenderWindow *mainWindow){
}

void GameObject::Update(){

}


