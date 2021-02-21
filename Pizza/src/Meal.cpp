/*
 * Meal.cpp
 *
 *  Created on: 17.02.2021
 *      Author: herrler
 */

#include "Meal.h"
#include <string>
#include <sstream>
#include <iomanip>

Meal::Meal(std::string name) {
	_name = name;
	_price = 10.0;
}

Meal::~Meal() {
	// TODO Auto-generated destructor stub
}

std::string Meal::getDescription() {
	std::ostringstream stream;
	stream << getName() << std::setprecision(2) << " " << getPrice();
	return stream.str();
}

float Meal::getPrice() {
	return _price;
}

std::string Meal::getName() {
	return _name;
}


