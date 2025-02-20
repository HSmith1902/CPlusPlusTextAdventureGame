#pragma once
#ifndef CHARACTER_HPP // Include guard start
#define CHARACTER_HPP
#include <iostream> 
#include <string> 
#include <vector>
#include <chrono>
#include <thread>
#include "Room.hpp"

class Character {
private:     
	std::string name;     
	int health;     
	std::vector<Item> inventory;  

public:     
	Character(const std::string&name, int health);     
	void TakeDamage(int damage);
};  

class Player : public Character { 
private:     
	Room* location;  

public:
	Player(const std::string& name, int health);
	void SetLocation(Room* room);
	Room* GetLocation() const;
};

#endif
