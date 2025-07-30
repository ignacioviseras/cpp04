#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "---- CORRECT ANIMALS ----\n";
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nSounds:\n";
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << "\nDelete\n";
    delete animal;
    delete dog;
    delete cat;

    std::cout << "\nWrong animal\n";
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nMakeSound\n";
    wrong->makeSound();
    wrongCat->makeSound();  // WrongAnimal::makeSound

    std::cout << "\nDelete\n";
    delete wrong;
    delete wrongCat;

    return 0;
}
