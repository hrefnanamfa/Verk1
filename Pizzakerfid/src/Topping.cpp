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

    out << topping.name << " " << topping.price << endl;

    return out;
}
