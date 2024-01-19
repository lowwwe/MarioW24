/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>


enum class Direction
{
	None,
	Up,
	Down,
	Left,
	Right
};


class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void move();
	
	void checkDirection();
	void setupFontAndText();
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	

	sf::Texture m_marioTexture;// mario luigi texture image
	sf::Sprite m_marioSprite;// mario / luigi sprite
	sf::Vector2f m_location{400.0f, 200.0f};// mario's position
	Direction m_direction = Direction::None; // where is mario going
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

