#include "Topping.h"

Topping::Topping()
{
    //ctor
}

Topping::~Topping()
{
    //dtor
}
ostream& operator <<(ostream&out, const Topping& topping){

    for(int i = 0; i < pizza.toppingCount; i++){
        out << pizza.toppings[i] << endl;
    }

    return out;
}
