#include "Game.hpp"

int game() {

	// Create Rooms
	Room startRoom("You are in a dimly lit room.");
	Room hallway("You are in a long hallway.");
	Room treasureRoom("You have entered a treasure room!");

	Player player1("Alice", 100);
	player1.SetLocation(&startRoom); // Set the player's starting room 
	return 0;

	// Create Rooms
	// Room startRoom("You are in a dimly lit room.");
	// Room hallway("You are in a long hallway.");
	// Room treasureRoom("You have entered a treasure room!");

	// Define exits between rooms
	startRoom.AddExit("north", &hallway);
	hallway.AddExit("south", &startRoom);
	hallway.AddExit("north", &treasureRoom);
	treasureRoom.AddExit("south", &hallway);
