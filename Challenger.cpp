#include <iostream>
#include "Challenger.h"
#include "BiggerThan5Exception.h"


int Challenger::getCounter() {
    return counter;
}
Challenger::Challenger() {};

void Challenger::challengeValue(Challenger challenger) {
    if (challenger.counter > 5) {
        throw BiggerThan5Exception();
    }
    if (challenger.counter > counter) {
        challenger.counter++;
    } else {
        counter++;
    }
};

void Challenger::challengeReferenced(Challenger &challenger) {
    if (challenger.counter > 5) {
        throw BiggerThan5Exception();
    }
    if (challenger.counter > counter) {
        challenger.counter++;
    } else {
        counter++;
    }
};