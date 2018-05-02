// Animal_Fish_Cat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

class Animal {
	public:
		char* name;
		virtual void move() = 0;
};

class Fish : public Animal {
	public:
		Fish() {
			name = "Fish";
		}
		~Fish() {}

		virtual void move() {
			swim();
		}
	private:
		void swim() {
			printf("swimming");
		}
};

class Cat : public Animal {
	public:
		char* fur;
		Cat() {
			name = "Cat";
			fur = "Black";
		}
		~Cat() {}
		virtual void move() {
			run();
		}
	private:
		void run() {
			printf("running");
		}
};

void do_something(Animal * a) {
	printf("%s is", a->name);
	a->move();
	printf("\n");
}

int main(int argc, char** argv)
{
	Animal* a = (Animal*) new Fish;
	do_something(a);
	delete a;

	a = (Animal*) new Cat;
	do_something(a);
	delete a;
	return 0;
}

