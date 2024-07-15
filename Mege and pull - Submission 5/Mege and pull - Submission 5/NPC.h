#pragma once
#include <string>
#include <iostream>
class NPC
{
private:
	int health;
	int defense;
	std::string dialogue;
public:
	NPC() {
		health = 10;
		defense = 10;
	}
	NPC(std::string newdialogue) {
		dialogue = newdialogue;
	}
public: 
	void PrintDialogue() {
		std::cout << dialogue;
	}
};

