/*
	Constructors and destructors of each class must display specific messages.
	Implement a Brain class. It contains an array of 100 std::string called ideas.
	This way, Dog and Cat will have a private Brain* attribute.
	Upon construction, Dog and Cat will create their Brain using new Brain();
	Upon destruction, Dog and Cat will delete their Brain.
	In your main function, create and fill an array of Animal objects. Half of it will
	be Dog objects and the other half will be Cat objects. At the end of your program
	execution, loop over this array and delete every Animal. You must delete directly dogs
	and cats as Animals. The appropriate destructors must be called in the expected order.
	Don’t forget to check for memory leaks.
	A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
	are deep copies!
---------------

*/
#pragma once
#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);
    virtual ~AAnimal();

    std::string getType() const;

    virtual void makeSound() const = 0;
};
