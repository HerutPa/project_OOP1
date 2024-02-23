#pragma once

#include <SFML/Graphics.hpp>
//#include <SFML/Audio.hpp>
#include <string.h>
#include <vector>


//enum Sound { SONG, CLICK, MINUS_LIFE, EAT, CLOCK_SOUND, DOOR_SOUND, FREEZE_SOUND, KEY_SOUND, EXTRA_LIFE, SUPER_PACMAN_SOUND, GAME_OVER };
enum Button { PLAY, HELP, EXIT, VIDEO_PLAY, BACK };
enum Title { TITLE, HELLO, WANNA_PLAY, LETS_GO, TITLE_PACMAN, TITLE_DEAMONS };
enum Direction { Up, Down, Right, Left, Stay };
//enum Sound { SONG, CLICK, MINUS_LIFE, EAT, CLOCK_SOUND, DOOR_SOUND, FREEZE_SOUND, KEY_SOUND, EXTRA_LIFE, SUPER_PACMAN_SOUND, GAME_OVER };
enum Object { PACMAN, DEAMON_ORANGE, DEAMON_PINK, DEAMON_RED, DEAMON_AZURE, KEY, WALL, DOOR, COOKIE, SUPER_PRESENT, ADD_LIFE, FREEZE, ADD_TIME };


//consts
const int BUTTONS = 5;
const int TITLE_OBJECTS = 6;
const int INSTRUCTIONS = 7;
const int GAME_OBJECTS = 13;
const int TOOL_BAR = 5;
//const int WINDOW_HEIGHT = 900;
//const int WINDOW_WIDTH = 1200;
//const int SOUNDS = 11;
const float SPRITE_SIZE = 400.f;


class Resources
{
public:

	enum TextureObject
	{
		t_wall, t_door, t_cat ,t_mouse, t_cheese, t_present, t_key, t_save, t_reset, t_LifeGift, t_TimeGift, t_FreezeGift,
		// Add other...
		t_Total
	};

	~Resources();
	static Resources& instance(); //static so the resources will called once
	const sf::Texture& getTexture(TextureObject texObj) const;
	//const sf::Texture& getMenuTexture(Menu_Textures texture) const;
	//const sf::Font& getFont() const;
	//sf::SoundBuffer& GetSound(Sound);

	

	//enum Sounds
	//	//{
	//	//	s_Eat_cookie,
	//	//	s_Pacman_dead,
	//	//	s_Eat_demon,
	//	//	s_Eat_gift,
	//	//	s_Eat_key,
	//	//	s_Supermode,
	//	//	s_hit_ghost,
	//	//	s_Start_music,
	//	//	s_Win_stage,
	//	//	s_Gift,
	//	//	// Add other...

	//	//	s_Total
	//	//};




private:
	Resources(); //private so there will be no duplicates
	Resources(const Resources&) = default;
	Resources& operator=(const Resources&) = default;
	//void loadSounds();
	void loadTextures();
	//sf::SoundBuffer m_Sounds[SOUNDS];



	std::vector<sf::Texture> m_textureVec;
	std::vector<sf::Texture> m_MenuTexture;
	//std::vector<sf::SoundBuffer> m_sound;
	sf::Font m_font;



};