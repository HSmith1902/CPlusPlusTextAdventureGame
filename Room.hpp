#pragma once
#ifndef ROOM_HPP // Include guard start
#define ROOM_HPP

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Item.hpp"


class Room {
private:
	std::string description;
	std::map<std::string, Room*> exits;
	std::vector<Item> items;
	std::string id;

public:
	Room(const std::string& desc);
	std::string GetDescription() const;
	Room* GetExit(const std::string& direction) const;
	void AddItem(const Item& item);
	void GetItems(const Item& item);
	void RemoveItem(const Item& item);
	void AddExit(const std::string& direction, Room* room);
	void SetExit(const std::string& direction, Room* room);
	bool operator==(Room other);

	const std::vector<Item>& GetItems() const {
		return items;
	}

	// Method to find an item by name
	const Item* FindItem(const std::string& itemName) const;

	// Method to remove an item from the room
	void RemoveItem(const std::string& itemName) {
		for (auto it = items.begin(); it != items.end(); ++it) {
			if (it->GetName() == itemName) {
				items.erase(it);
				break; // Item found and removed, exit loop
			}
		}
	}
};

// example usage of class
// Room startRoom("You are in a dimly lit room.");

#endif
