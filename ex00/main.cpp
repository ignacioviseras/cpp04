#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "CORRECT ANIMALS" << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nSounds:" << std::endl;
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << "\nDelete" << std::endl;
    delete animal;
    delete dog;
    delete cat;

    std::cout << "\nWrong animal" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nMakeSound" << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();  // WrongAnimal

    std::cout << "\nDelete" << std::endl;
    delete wrong;
    delete wrongCat;

    return 0;
}
