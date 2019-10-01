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

double Scooter::mileageEstimate(double time) {
    return time;
}