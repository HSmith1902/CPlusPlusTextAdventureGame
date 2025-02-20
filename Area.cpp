#include "Area.hpp"

void Area::AddRoom(const std::string& name, Room* room) {
    rooms[name] = room;
}

Room* Area::GetRoom(const std::string& name) {
    auto it = rooms.find(name);
    if (it != rooms.end()) {
        return it->second;
    }
    else {
        return nullptr; // Room not found
    }
}

static std::string GetOppositeDirection(const std::string& direction) {
    if (direction == "north") {
        return "south";
    }
    else if (direction == "south") {
        return "north";
    }
    else if (direction == "east") {
        return "west";
    }
    else if (direction == "west") {
        return "east";
    }
    else {
        // Handle unrecognized direction
        return ""; // Return empty string as default
    }
}

void Area::ConnectRooms(const std::string& room1Name, const std::string& room2Name, const std::string& direction) {
    Room* room1 = GetRoom(room1Name);
    Room* room2 = GetRoom(room2Name);
    if (room1 && room2) {
        room1->SetExit(direction, room2);
        room2->SetExit(GetOppositeDirection(direction), room1);
    }
    else {
        // Handle error: one or both rooms not found
    }
}

void Area::LoadMapFromFile(const std::string& filename) {
}
