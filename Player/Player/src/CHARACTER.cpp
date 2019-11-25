#include "../include/CHARACTER.h"
#include "../include/MACRO.h"

/// <summary>
/// CHARACTER Constructor
/// </summary>
/// <param name="player_number">Player's number</param>
/// <param name="name">Name of Player</param>
/// <param name="classification">Class of Player</param>
CHARACTER::CHARACTER(const int& number, const char* name, const char* classification) :
	m_character_number(number), m_name(name), m_class(classification)
{}

/// <summary>
/// CHARACTER Constructor
/// </summary>
/// <param name="player_number">Player's number</param>
/// <param name="name">Name of Player</param>
/// <param name="classification">Class of Player</param>
/// <param name="rng">Maximum Bounds for Randomly Generated Number</param>
CHARACTER::CHARACTER(const int& number, const char* name, const char* classification, const int& rng) :
	m_character_number(number), m_name(name), m_class(classification)
{
	int min_value = 1;

	this->set_intelligence(RNG(min_value, rng));
	this->set_strength(RNG(min_value, rng));
	this->set_vitality(RNG(min_value, rng));
	this->set_dexterity(RNG(min_value, rng));
	this->set_luck(RNG(min_value, rng));
}

/// <summary>
/// CHARACTER Constructor
/// </summary>
/// <param name="player_number">Player's number</param>
/// <param name="name">Name of Player</param>
/// <param name="classification">Class of Player</param>
/// <param name="intelligence">Intelligence Value</param>
/// <param name="strength">Strength Value</param>
/// <param name="vitality">Vitality Value</param>
/// <param name="dexterity">Dexterity Value</param>
/// <param name="luck">Luck Value</param>
CHARACTER::CHARACTER(const int& number, const char* name, const char* classification, const int& intelligence, const int& strength, const int& vitality, const int& dexterity, const int& luck) :
	m_character_number(number), m_name(name), m_class(classification)
{
	this->set_intelligence(intelligence);
	this->set_strength(strength);
	this->set_vitality(vitality);
	this->set_dexterity(dexterity);
	this->set_luck(luck);
}

/// <summary>
/// Default CHARACTER Constructor
/// </summary>
CHARACTER::CHARACTER() {};

/// <summary>
/// Default CHARACTER De-Constructor
/// </summary>
CHARACTER::~CHARACTER() { };

/// <summary>
/// Set Character's Name
/// </summary>
/// <param name="name">Name of Character</param>
void CHARACTER::set_name(const char*& name)
{
	this->m_name = name;
}

/// <summary>
/// Set Character's Classification
/// </summary>
/// <param name="classification">Class of Character</param>
void CHARACTER::set_class(const char*& classification)
{
	this->m_class = classification;
}

/// <summary>
/// Get Character Number
/// </summary>
/// <returns>INT : Number Value of Character</returns>
int CHARACTER::get_character_number()
{
	return this->m_character_number;
}

/// <summary>
/// Get Name of Character
/// </summary>
/// <returns>CHAR* : Name of Character</returns>
const char* CHARACTER::get_name()
{
	return this->m_name;
}

/// <summary>
/// Get Classification of Character
/// </summary>
/// <returns>INT : Class of Character</returns>
const char* CHARACTER::get_class()
{
	return this->m_class;
}

/// <summary>
/// Display Character Information
/// </summary>
void CHARACTER::display_character()
{
	std::cout << "  > Character" << std::endl;
	std::cout << "    Number:\t\t" << this->m_character_number << std::endl;
	std::cout << "    Name:\t\t" << this->m_name << std::endl;
	std::cout << "    Class:\t\t" << this->m_class << std::endl;
	std::cout << std::endl;
}

/// <summary>
/// Generate CHARACTER
/// </summary>
/// <param name="player_number">Player's number</param>
/// <param name="name">Name of Player</param>
/// <param name="classification">Class of Player</param>
/// <returns>CHARACTER</returns>
CHARACTER CHARACTER::generate_character(const int& number, const char* name, const char* classification)
{
	return CHARACTER(number, name, classification);
}

/// <summary>
/// Generate CHARACTER
/// </summary>
/// <param name="player_number">Player's number</param>
/// <param name="name">Name of Player</param>
/// <param name="classification">Class of Player</param>
/// <param name="rng">Maximum Bounds for Randomly Generated Number</param>
/// <returns>CHARACTER</returns>
CHARACTER CHARACTER::generate_character(const int& number, const char* name, const char* classification, const int& rng)
{
	return CHARACTER(number, name, classification, rng);
}

/// <summary>
/// Generate CHARACTER
/// </summary>
/// <param name="player_number">Player's number</param>
/// <param name="name">Name of Player</param>
/// <param name="classification">Class of Player</param>
/// <param name="intelligence">Intelligence Value</param>
/// <param name="strength">Strength Value</param>
/// <param name="vitality">Vitality Value</param>
/// <param name="dexterity">Dexterity Value</param>
/// <param name="luck">Luck Value</param>
/// <returns>CHARACTER</returns>
CHARACTER CHARACTER::generate_character(const int& number, const char* name, const char* classification, const int& intelligence, const int& strength, const int& vitality, const int& dexterity, const int& luck)
{
	return CHARACTER(number, name, classification, intelligence, strength, vitality, dexterity, luck);
}
