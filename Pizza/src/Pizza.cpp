/*
 * Pizza.cpp
 *
 *  Created on: 17.02.2021
 *      Author: herrl
 */

#include "Pizza.h"
#include <string>
#include <sstream>
#include <iomanip>

float Pizza::_basePrice = 10;
int Pizza::_ingredientPrice = 5;

Pizza::Pizza(std::string name, std::vector<std::string> ingredients) : Meal(name){
	for (std::string ingredient : ingredients)
		_ingredients.push_back(ingredient);
}

float Pizza::getPrice() {
	return _basePrice+(_ingredients.size()*_ingredientPrice);
}

int Pizza::getIngredientsCount() {
	return _ingredients.size();
}

Pizza::~Pizza() {
	// TODO Auto-generated destructor stub
}
