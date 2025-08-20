#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define SIZE 4

int main()
{
    std::cout << "Creating Animals" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nDeleting Animals" << std::endl;

    delete j; // should not create a memory leak
    delete i;

    std::cout << "\nCreating Animal Array" << std::endl;

    Animal* animals[SIZE];
    for (int k = 0; k < SIZE / 2; ++k)
        animals[k] = new Dog();
    for (int k = SIZE / 2; k < SIZE; ++k)
        animals[k] = new Cat();

    std::cout << "\nMaking Sounds" << std::endl;
    for (int k = 0; k < SIZE; ++k)
        animals[k]->makeSound();

    std::cout << "\nDeleting Animal Array" << std::endl;
    for (int k = 0; k < SIZE; ++k)
        delete animals[k];

    std::cout << "\nDeep Copy Test" << std::endl;

    Dog original;
    original.setIdea(0, "Play fetch");

    Dog copy = original; // copy constructor
    copy.setIdea(0, "Eat shoes");

    std::cout << "Original idea: " << original.getIdea(0) << std::endl;
    std::cout << "Copy idea: " << copy.getIdea(0) << std::endl;

    std::cout << "\nDestructors" << std::endl;

    return 0;
}
