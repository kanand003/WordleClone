#include "Game.h"

class SFMLGame
{
public:
	//Initialize game to start
	SFMLGame();
	virtual ~SFMLGame() = default;

	void GameLoop();
private:
	sf::RenderWindow _window;

	// The font used throughout the game.
	sf::Font _font;

	// Reference to the Game used to manage all the interfaces within the game.
	Game _game;

	// Loads the font
	static sf::Font loadFont();
};