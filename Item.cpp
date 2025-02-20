#include "Item.hpp"

Item::Item(const std::string& name, const std::string& desc) : name(name), description(desc) {
}

void Item::Interact() const {
}

bool Item::operator==(Item other) {
    return id == other.id;
}

