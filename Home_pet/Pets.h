#pragma once
#include <iostream>

// Zadanie 1
class Pet {
protected:
	char* name;
	int age;

	Pet(char* n, int a) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
};


class Cat : public Pet {
	char* name_cat;
	int age_cat;
public:

	Cat(char* n_c, int a_c) : Pet(n_c, a_c) {
		name_cat = new char[strlen(n_c) + 1];
		strcpy_s(name_cat, strlen(n_c) + 1, n_c);
		age_cat = a_c;
	}

};


class Dog : public Pet {
	char* name_dog;
	int age_dog;
public:

	Dog(char* n_d, int a_d) : Pet(n_d, a_d){
		name_dog = new char[strlen(n_d) + 1];
		strcpy_s(name_dog, strlen(n_d) + 1, n_d);
		age_dog = a_d;
	};


};

class Parrot : public Pet {
	char* name_parrot;
	int age_parrot;
public:

	Parrot(char* n_p, int a_p) : Pet(n_p, a_p){
		name_parrot = new char[strlen(n_p) + 1];
		strcpy_s(name_parrot, strlen(n_p) + 1, n_p);
		age_parrot = a_p;
	};


};