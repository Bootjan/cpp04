#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal*	animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];

	Cat x;
	x.eureka("I like turtles", 0);
	x.printIdeas();
	Cat y = x;
	y.printIdeas();
	y.eureka("Idk bruv", 1);
	x.printIdeas();

	Dog dog1;
	dog1.eureka("I like turtles", 0);
	dog1.printIdeas();
	Dog dog2 = dog1;
	dog2.printIdeas();
	dog2.eureka("Idk bruv", 1);
	dog1.printIdeas();

	return 0;
}
