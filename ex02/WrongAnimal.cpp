#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called\n";
}

void WrongAnimal::makeSound() const {
    std::cout << "*Wrong animal noise*\n";
}

std::string WrongAnimal::getType() const {
    return type;
}
