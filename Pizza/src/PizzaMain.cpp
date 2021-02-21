//============================================================================
// Name        : Pizza.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "meal.h"
#include "pizza.h"


int main() {
	cout << "!!!PizzaRestaurant!!!" << endl; // prints !!!Hello World!!!
	Meal meal ("Pizza Carbonara");
	Pizza pizza ("Pizza Funghi", { "Champingons", "Salami"});

	cout << meal.getDescription() << endl;
	cout << pizza.getDescription() << endl;

	cout << "IngredientsCount: " << pizza.getIngredientsCount() << endl;


	return 0;
}
