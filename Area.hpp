#pragma once
#ifndef AREA_HPP // Include guard start
#define AREA_HPP
#include <map>
#include <string>
#include "Room.hpp"

class Area {
private:
	std::map<std::string, Room*> rooms;
public:
	void AddRoom(const std::string& name, Room* room);
	Room* GetRoom(const std::string& name);
	void ConnectRooms(const std::string& room1Name, const std::string& room2Name, const std::string& direction);
	void LoadMapFromFile(const std::string& filename);
};

#endif
