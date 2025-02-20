#pragma once
#include <iostream>
#include <vector>
#include "Item.hpp"
#include "Room.hpp"

class Inventory {
private:
    std::vector<const Item*> items;
public:
    // Function to add an item to the inventory
    void addItem(const Item* item) {
        items.push_back(item);
    }

    // Method to display the inventory
    void displayInventory() const {
        if (items.empty()) {
            std::cout << "Your inventory is empty." << std::endl;
        }
        else {
            std::cout << "Inventory:" << std::endl;
            for (const Item* item : items) {
                std::cout << "- " << item->GetName() << std::endl;
            }
        }
    }
};
