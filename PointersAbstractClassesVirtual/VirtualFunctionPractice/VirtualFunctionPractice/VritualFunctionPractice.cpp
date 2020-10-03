

#include <iostream>
#include <string>
#include "catType.h"
#include "dogType.h"
#include "petType.h"
using namespace std;

void practice( petType& object) { //Parameter must be a pointer or reference, can't be a value parameter


	object.noise(); //because noise() is a virtual function in base class it runs the function noise() from whatever class
					//the object passed as a formal parameter is referring to, even though object is of class petType

}


int main() {


	petType *pet;
	dogType dog;
	catType cat;

	pet = &dog; //stores address of derived class object dog in base class pointer object pet

	pet->animal();

		//IF noise() wasn't a virtual class then only the function noise() from class petType would be called
			//even though the pointer is pointing to  noise() from class dogType

	pet->noise(); //Calling function from class dogType



	pet = &cat; //stores address of derived class object cat in base class pointer object pet
	pet->animal();

		//IF noise() wasn't a virtual class then only the function noise() from class petType would be called
				//even though the pointer is pointing to  noise() from class catType

	pet->noise(); //Calling function from class catType

	practice(dog); //Passing dogType object do to function that recieves a petType object. Can do this b/c dogType is derived from petType


	system("pause");
	return 0;
}