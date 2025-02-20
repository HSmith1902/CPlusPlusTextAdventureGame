#include "Room.hpp"

bool Room::operator==(Room other) {
    return id == other.id;
}

Room::Room(const std::string& desc) : description(desc), exits(), items() {
 // initialised room, description, exits and items
}

void Room::AddExit(const std::string& direction, Room* room) {
	exits[direction] = room;
}

std::string Room::GetDescription() const {
    return description;
}

// get room pointer for given direction
Room* Room::GetExit(const std::string& direction) const {
    auto it = exits.find(direction);
    if (it != exits.end()) {
        return it->second;
    }
    else {
        return nullptr; // Direction not found
    }
}

void Room::SetExit(const std::string& direction, Room* room) {
    exits[direction] = room;
}

void Room::AddItem(const Item& item) {
    items.push_back(item);
}

void Room::GetItems(const Item& item) {
}

// FindItem implementation
const Item* Room::FindItem(const std::string& itemName) const {
    for (const Item& item : items) {
        if (item.GetName() == itemName) {
            return &item; // Return pointer to the found item
        }
    }
    return nullptr; // Item not found
}

void RemoveItem(const std::string& itemName) {
}

