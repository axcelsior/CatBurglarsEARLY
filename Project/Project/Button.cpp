#include "Button.h"
#include "Channels.h"

int INTERACTION_RADIUS = 20;


Button::Button(int id, sf::Texture *texture,sf::Vector2i vec) :
	mChannelID(id),
	mPosition(vec){
	mSprite.setPosition(sf::Vector2f(mPosition));
	mSprite.setTexture(*texture);
	
	defaultColor = mSprite.getColor();
}

int length(sf::Vector2i v1, sf::Vector2i v2){
	int length;
	int dx = v2.x - v1.x;
	int dy = v2.y - v1.y;

	length = sqrt((dy * dy) + (dx * dx));
	return length;
}

int Button::getChannelID(){
	return mChannelID;
}

bool Button::getInteraction(GameObject *obj){
	
		if (length(mPosition, obj->GetPosition()) < INTERACTION_RADIUS){
			if (obj->interacting()){
				mSprite.setColor(sf::Color::Black);
				if (!isReciever()){
					// activate channel
					Channels::setActive(mChannelID, false, 1);
					// play sound
					return true;
				}
			}
			else {
				mSprite.setColor(defaultColor);
			}
		}
}
bool Button::interacting(){
	return false;
}

bool Button::isReciever(){
	return false;
}

sf::Vector2i Button::GetPosition(){
	return mPosition;
}

void Button::Render(sf::RenderWindow *window){

	window->draw(mSprite);
}
void Button::Update(){

}