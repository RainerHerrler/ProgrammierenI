/*
 * Pizza.h
 *
 *  Created on: 17.02.2021
 *      Author: herrl
 */

#ifndef PIZZA_H_
#define PIZZA_H_

#include <vector>
#include <string>
#include "meal.h"



class Pizza : public Meal {
private:
	std::vector<std::string> _ingredients;

public:
	static float _basePrice;
	static int _ingredientPrice;

	Pizza(std::string name, std::vector<std::string> ingredients);
	virtual ~Pizza();
	virtual float getPrice();
	int getIngredientsCount();
};

#endif /* PIZZA_H_ */
