#include "DuckEgg.hpp"

/*constructor*/
DuckEgg::DuckEgg(){
    type=2;
    price=7;
}

/*destructor*/
DuckEgg::~DuckEgg(){
}

/*return DuckEgg type*/
int DuckEgg::getType(){
    return type;
}

/*return DuckEgg price*/
int DuckEgg::getPrice(){
    return price;
}
