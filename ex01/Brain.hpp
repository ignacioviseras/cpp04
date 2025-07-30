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

	Los constructores y destructores de cada clase deben mostrar mensajes específicos.
	Implementar una clase Brain. Contiene una matriz de 100 std::string llamadas ideas.
	De esta manera, Perro y Gato tendrán un atributo Cerebro* privado.
	Tras la construcción, Perro y Gato crearán su Cerebro usando new Brain();
	Tras la destrucción, Perro y Gato eliminarán su cerebro.
	En su función principal, cree y complete una serie de objetos Animales. La mitad será
	serán objetos de Perro y la otra mitad serán objetos de Gato. Al final de su programa
	ejecución, recorra esta matriz y elimine todos los animales. Debes eliminar directamente los perros.
	y gatos como animales. Los destructores apropiados deben llamarse en el orden esperado.
	No olvide comprobar si hay pérdidas de memoria.
	Una copia de un Perro o un Gato no debe ser superficial. Por lo tanto, debes probar que tus copias
	son copias profundas!
*/

#pragma once
#include <iostream>
#include <string>

class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};
