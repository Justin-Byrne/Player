#include "ATTRIBUTES.h"

#ifndef _CHARACTER_H
#define _CHARACTER_H

class CHARACTER : public ATTRIBUTES
{
private:
	// MEMBERS
	int m_character_number;
	const char* m_name;
	const char* m_class;

public:
	// CONSTRUCTORS
	CHARACTER(const int& character_number, const char* name, const char* classification);
	CHARACTER(const int& character_number, const char* name, const char* classification, const int& rng);
	CHARACTER(const int& character_number, const char* name, const char* classification, const int& intelligence, const int& strength, const int& vitality, const int& dexterity, const int& luck);
	CHARACTER();
	~CHARACTER();

	// SETTERS
	void set_name(const char*& name);
	void set_class(const char*& classification);

	// GETTERS
	int get_character_number();
	const char* get_name();
	const char* get_class();

	// PUBLIC FUNCTIONS
	void display_character();
	CHARACTER generate_character(const int& character_number, const char* name, const char* classification);
	CHARACTER generate_character(const int& character_number, const char* name, const char* classification, const int& rng);
	CHARACTER generate_character(const int& character_number, const char* name, const char* classification, const int& intelligence, const int& strength, const int& vitality, const int& dexterity, const int& luck);
};

#endif // !_CHARACTER_H
