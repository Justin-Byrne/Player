#ifndef _ATTRIBUTES_H
#define _ATTRIBUTES_H

class ATTRIBUTES
{
private:
	// MEMBERS
	int m_intelligence;
	int m_strength;
	int m_vitality;
	int m_dexterity;
	int m_luck;

public:
	// CONSTRUCTORS
	ATTRIBUTES(const int& intelligence, const int& strength, const int& vitality, const int& dexterity, const int& luck);
	ATTRIBUTES();
	~ATTRIBUTES();

	// SETTER
	void set_intelligence(const int& intelligence);
	void set_strength(const int& strength);
	void set_vitality(const int& vitality);
	void set_dexterity(const int& dexterity);
	void set_luck(const int& luck);

	// GETTERS
	int get_intelligence();
	int get_strength();
	int get_vitality();
	int get_dexterity();
	int get_luck();

	// PUBLIC FUNCTIONS
	void display_attributes();
};

#endif // !_ATTRIBUTES_H
