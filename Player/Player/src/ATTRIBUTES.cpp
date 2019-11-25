#include "../include/ATTRIBUTES.h"
#include "../include/MACRO.h"

/// <summary>
/// ATTRIBUTES Constructor
/// </summary>
/// <param name="intelligence">Character's intelligence</param>
/// <param name="strength">Character's strength</param>
/// <param name="vitality">Character's vitality</param>
/// <param name="dexterity">Character's dexterity</param>
/// <param name="luck">Character's luck</param>
ATTRIBUTES::ATTRIBUTES(const int& intelligence, const int& strength, const int& vitality, const int& dexterity, const int& luck) :
	m_intelligence(intelligence), m_strength(strength), m_vitality(vitality), m_dexterity(dexterity), m_luck(luck)
{ }

/// <summary>
/// Default ATTRIBUTES Constructor
/// </summary>
ATTRIBUTES::ATTRIBUTES() { };

/// <summary>
/// Default ATTRIBUTES De-Constructor
/// </summary>
ATTRIBUTES::~ATTRIBUTES() { };

/// <summary>
/// Set Intelligence
/// </summary>
/// <param name="intelligence">Intelligence Value</param>
void ATTRIBUTES::set_intelligence(const int& intelligence)
{
	this->m_intelligence = intelligence;
}

/// <summary>
/// Set Strength
/// </summary>
/// <param name="strength">Strength Value</param>
void ATTRIBUTES::set_strength(const int& strength)
{
	this->m_strength = strength;
}

/// <summary>
/// Set Vitality
/// </summary>
/// <param name="vitality">Vitality Value</param>
void ATTRIBUTES::set_vitality(const int& vitality)
{
	this->m_vitality = vitality;
}

/// <summary>
/// Set Dexterity
/// </summary>
/// <param name="dexterity">Dexterity Value</param>
void ATTRIBUTES::set_dexterity(const int& dexterity)
{
	this->m_dexterity = dexterity;
}

/// <summary>
/// Set Luck
/// </summary>
/// <param name="luck">Luck Value</param>
void ATTRIBUTES::set_luck(const int& luck)
{
	this->m_luck = luck;
}

/// <summary>
/// Get Intelligence
/// </summary>
/// <returns>INT : Intelligence Value</returns>
int ATTRIBUTES::get_intelligence()
{
	return this->m_intelligence;
}

/// <summary>
/// Get Strength
/// </summary>
/// <returns>INT : Strength Value</returns>
int ATTRIBUTES::get_strength()
{
	return this->m_strength;
}

/// <summary>
/// Get Vitality
/// </summary>
/// <returns>INT : Vitality Value</returns>
int ATTRIBUTES::get_vitality()
{
	return this->m_vitality;
}

/// <summary>
/// Get Dexterity
/// </summary>
/// <returns>INT : Dexterity Value</returns>
int ATTRIBUTES::get_dexterity()
{
	return this->m_dexterity;
}

/// <summary>
/// Get Luck
/// </summary>
/// <returns>INT : Luck Value</returns>
int ATTRIBUTES::get_luck()
{
	return this->m_luck;
}

/// <summary>
/// Display Attribute Information
/// </summary>
void ATTRIBUTES::display_attributes()
{
	std::cout << "  > Attributes"      << std::endl;
	std::cout << "    Intelligence:\t" << this->m_intelligence << std::endl;
	std::cout << "    Strength:\t\t"   << this->m_strength     << std::endl;
	std::cout << "    Vitality:\t\t"   << this->m_vitality     << std::endl;
	std::cout << "    Dexterity:\t\t"  << this->m_dexterity    << std::endl;
	std::cout << "    Luck:\t\t"       << this->m_luck         << std::endl;
	std::cout << std::endl;
}