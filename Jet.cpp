#include "Jet.h"
#include <cstdlib>
#include <ctime>

Jet::Jet() {
    setBrand("Custom");
    setModel("unknown");
}

Jet::Jet(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Jet::Jet(string brand, string model, int numEngines) {
    setBrand(brand);
    setModel(model);
    setNumberOfEngines(numEngines);
}

Jet::Jet(string brand, string model, string fuelType) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
}

Jet::Jet(string brand, string model, string fuelType, int numEngines) {
    setBrand(brand);
    setModel(model);
    setNumberOfEngines(numEngines);
    setFuelType(fuelType);
}

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numEngines) {
    numberOfEngines = numEngines;
}

Jet::~Jet() = default;

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString()+ "\n\tEngine Quantity: " + to_string(getNumberOfEngines());
}

double Jet::mileageEstimate(double min) {
    int milage;

    // Random Milage Generation (40-100 MPM)
    srand (time(NULL));
    int randomMilage = rand() % 61 + 40;

    // Travel Time Calculations
    milage = randomMilage * min;
    if(getNumberOfEngines() > 2 && getFuelType().compare("Rocket") == 0) {
        milage += milage * (0.055 * getNumberOfEngines());
    }

    return milage;
}