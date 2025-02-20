#pragma once
#ifndef ITEM_HPP // Include guard start
#define ITEM_HPP
#include <iostream>
#include <string>

class Item {
private:
	std::string name;
	std::string description;
	std::string id;

public:
	Item(const std::string& name, const std::string& desc);

	// getter for the name of item
	std::string GetName() const {
		return name;
	}

	// getter for description
	std::string GetDescription() const {
		return description;
	}

	bool operator==(Item other);

	void Interact() const;
};

extern Item key; // Declaration of the global variable key

// Example usage: 
// Item key("Key", "A shiny key that looks important."); 

#endif
