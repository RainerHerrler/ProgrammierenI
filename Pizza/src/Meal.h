/*
 * Meal.h
 *
 *  Created on: 17.02.2021
 *      Author: herrler
 */

#ifndef MEAL_H_
#define MEAL_H_

#include <string>

class Meal {
private:
	float _price = 0.0;
	std::string _name;
public:
	Meal(std::string name);
	virtual ~Meal();
	virtual std::string getDescription();
	virtual float getPrice();
	virtual std::string getName();
};

#endif /* MEAL_H_ */
