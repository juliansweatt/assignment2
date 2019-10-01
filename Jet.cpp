#include "Jet.h"

Jet::Jet() {
    setBrand("Custom");
    setModel("unknown");
}

Jet::Jet(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Jet::~Jet() = default;

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString();
}

double Jet::mileageEstimate(double time) {
    return time;
}