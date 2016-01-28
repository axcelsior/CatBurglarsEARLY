#include "Entity.h"

Entity::Entity(sf::Vector2i position, sf::IntRect rect)
: mPosition(position), mHitBox(rect)
{

}

Entity::~Entity()
{

}
