#include "Character.hpp"

Character::Character(const std::string& name, int health) : name(name), health(health) {
}

void Character::TakeDamage(int damage) {
}

Player::Player(const std::string& name, int health) : Character(name, health), location(nullptr) {
}

void Player::SetLocation(Room* room) {
	location = room;
}

Room* Player::GetLocation() const {
	return location;
}
