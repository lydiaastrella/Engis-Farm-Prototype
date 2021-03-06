#include <string>
#include "Rabbit.hpp"
#include "../Display/Display.hpp"
using namespace std;

#define DEFAULT_I 2
#define DEFAULT_J 9

Rabbit::Rabbit() {
    Hunger = 0;
    I = DEFAULT_I;
    J = DEFAULT_J;
    Productive = false;
};

// Rabbit& Rabbit::operator=(Rabbit& R) {
//     Hunger = R.Hunger;
//     I = R.I;
//     J = R.J;
//     Productive = R.Productive;
//     return *this;
// };

string Rabbit::getNoise() {
    return "Purr";
};

int Rabbit::getAllowedLand() {
    return 1;
};

float Rabbit::getHungerRate() {
    return 0.5;
};

int Rabbit::getI() {
    return I;
};
int Rabbit::getJ() {
    return J;
};
int Rabbit::getHunger() {
    return Hunger;
};
bool Rabbit::isProductive() {
    return Productive;
};

void Rabbit::setI(int x) {
    I = x;
}
void Rabbit::setJ(int x) {
    J = x;
}

void Rabbit::setUnproductive() {
    Productive = false;
};

void Rabbit::GetHungrier() {
    if (Hunger < 5) {
        Hunger = Hunger + getHungerRate();
    } else {
        Hunger = Hunger + 1;
    }
};

void Rabbit::Eat(Display& D) {
    if (D.checkGrassy(I,J)) {
        D.modifyGrassy(I,J);
        Hunger = 0;
        Productive = true;
    }
};
