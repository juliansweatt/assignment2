#include "Scooter.h"

Scooter::Scooter() {
    setBrand("Custom");
    setModel("unknown");
}

Scooter::Scooter(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Scooter::~Scooter() = default;

string Scooter::toString() {
    return "-> Scooter\n" + PoweredVehicle::toString();
}

double Scooter::mileageEstimate(double min) {
    int milage;

    // Random Milage Generation (10-18 MPM)
    // (eScooter speed typically between 10 and 20 MPH ~= 1.3-1.5 MPM)
    srand (time(NULL));
    double randomMilage = ((rand() % 3 + 3)/10.0)+1;

    // Travel Time Calculations
    // 1 in 3 Chance of Speed Reduction Area (Will Reduce Milage by 50%)
    milage = randomMilage * min;
    if(rand()%3 == 1) {
        milage -= milage * .5;
    }

    return milage;
}