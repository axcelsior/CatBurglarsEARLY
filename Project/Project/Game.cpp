#include "Game.h"
#include "TextureHandler.h"
#include "Channels.h"
#include "Channel.h"
#include "Button.h"

static sf::RenderWindow *window;
static TextureHandler textures;
sf::Texture *texture=textures.GetTexture(0);
Controller controller1;


Game::Game() :
mEntities(),
mCat(),
mController()
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
	window->setVerticalSyncEnabled(true);
	textures.Initialize();
	mCat = new Cat1(textures.GetTexture(10), 50, 50, 1);
	mEntities.push_back(mCat);

	Channel c1 = Channel(1);
	Channel c2 = Channel(2);
	
	Button *b1 = new Button(1, textures.GetTexture(10), sf::Vector2i(150, 150));
	Button *b2 = new Button(2, textures.GetTexture(10), sf::Vector2i(450, 450));

	mEntities.push_back(b1);
	mEntities.push_back(b2);

	Channels::addChannel(c1);
	Channels::addChannel(c2);

}

Game::~Game()
{

}

void Game::Run(){
	while (window->isOpen())
	{
		mController.move(mCat);
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}

		Render();
		Update();
	}
}

void Game::Update(){

	Channels::update();

	if (Channels::isChannelActive(1)){
		cout << "1 IS ACTIVE" << endl;
	}
	if (Channels::isChannelActive(2)){
		cout << "2 IS ACTIVE" << endl;
	}

	for each (GameObject *o in mEntities)
	{
		for each (GameObject *o1 in mEntities){
			o->getInteraction(o1);
		}
	}
}

void Game::Render()
{
	window->clear(sf::Color(0, 200, 0, 255));


	for each (Entity *e in mEntities){
		e->Render(window);
	}
	window->display();
}