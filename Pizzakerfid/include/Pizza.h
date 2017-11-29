#ifndef PIZZA_H
#define PIZZA_H
#include "Topping.h"
#include <iostream>

using namespace std;


class Pizza
{
    private:
        Topping *toppings;
        int toppingCount;
        int currentToppingNum;
    public:
        Pizza();
        Pizza(int numberOfToppings);
        virtual ~Pizza();
        void addTopping(Topping topping);
        friend ostream& operator <<(ostream&out, const Pizza& pizza);

};

#endif // PIZZA_H
