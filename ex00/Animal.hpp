/*
	For every exercise, you have to provide the most complete tests you can.
	Constructors and destructors of each class must display specific messages. Don’t use the
	same message for all classes.
	Start by implementing a simple base class called Animal. It has one protected
	attribute:
	• std::string type;
	Implement a Dog class that inherits from Animal.
	Implement a Cat class that inherits from Animal.
	These two derived classes must set their type field depending on their name. Then,
	the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
	The type of the Animal class can be left empty or set to the value of your choice.
	Every animal must be able to use the member function:
	makeSound()
	It will print an appropriate sound (cats don’t bark).
	Running this code should print the specific sounds of the Dog and Cat classes, not
	the Animal’s.
	To ensure you understood how it works, implement a WrongCat class that inherits
	from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
	in the code above, the WrongCat should output the WrongAnimal sound.
	Implement and turn in more tests than the ones given above
	--------
	Para cada ejercicio, debes proporcionar las pruebas más completas que puedas.
	Los constructores y destructores de cada clase deben mostrar mensajes específicos. No uses el
	Mismo mensaje para todas las clases.
	Comience implementando una clase base simple llamada Animal. tiene uno protegido
	atributo:
	• std::tipo de cadena;
	Implemente una clase Perro que herede de Animal.
	Implemente una clase Cat que herede de Animal.
	Estas dos clases derivadas deben establecer su campo de tipo según su nombre. Entonces,
	el tipo de Perro se inicializará a "Perro" y el tipo de Gato se inicializará a "Gato".
	El tipo de clase Animal puede dejarse vacío o establecerse con el valor que elija.
	Cada animal debe poder utilizar la función miembro:
	hacer sonido()
	Imprimirá un sonido apropiado (los gatos no ladran).
	La ejecución de este código debería imprimir los sonidos específicos de las clases Perro y Gato, no
	el del Animal.
	Para asegurarse de comprender cómo funciona, implemente una clase WrongCat que herede
	de una clase WrongAnimal. Si reemplazas el Animal y el Gato por los incorrectos
	en el código anterior, WrongCat debería emitir el sonido WrongAnimal.
	Implementar y entregar más pruebas que las indicadas anteriormente.
*/

#pragma once
#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();  // VIRTUAL destructor
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    virtual void makeSound() const;  // VIRTUAL function
    std::string getType() const;
};
