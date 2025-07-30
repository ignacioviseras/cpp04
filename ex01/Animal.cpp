#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called\n";
}

Animal::~Animal() {
    std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assignment operator called\n";
    if (this != &other)
        type = other.type;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "*Generic Animal Sound*\n";
}

std::string Animal::getType() const {
    return type;
}
