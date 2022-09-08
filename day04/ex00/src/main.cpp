#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "" << std::endl;

	delete (j);
	delete (i);
	delete (meta);

	std::cout << "features with upholstery $$$$" << std::endl;
	{
		const WrongAnimal* meta1 = new WrongAnimal();
		const WrongDog* j1 = new WrongDog();
		const WrongCat* i1 = new WrongCat();
	
		std::cout << "" << std::endl;
		std::cout << j1->getType() << " " << std::endl;
		std::cout << i1->getType() << " " << std::endl;
		std::cout << "" << std::endl;
		i1->makeSound();
		j1->makeSound();
		meta1->makeSound();
		std::cout << "" << std::endl;

		delete (j1);
		delete (i1);
		delete (meta1);
	}


}


