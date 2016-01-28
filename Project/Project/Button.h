#ifndef INCLUDED_BUTTON
#define INCLUDED_BUTTON
#include "GameObject.h"
class Button : public GameObject{
public:
	Button(int ID, sf::Texture *texture, sf::Vector2i pos);
	virtual void Render(sf::RenderWindow *mainWindow);
	virtual void Update();
	virtual sf::Vector2i GetPosition();

	virtual bool interacting();
	virtual bool getInteraction(GameObject *obj);
	virtual bool isReciever();

	virtual int getChannelID();

private:
	sf::Sprite mSprite;
	sf::Vector2i mPosition;
	int mChannelID;
	sf::Color defaultColor;


};



#endif