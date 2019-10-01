#include "Skateboard.h"
#include <cstdlib>
#include <ctime>

Skateboard::Skateboard() {
    setBrand("Custom");
    setModel("unknown");
}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double min) {
    double milage;

    // Random Milage Generation (0.1-0.5 MPM)
    srand (time(NULL));
    double randMilage = (rand() % 5 + 1)/10.0;

    // Travel Time Calculations
    milage = (randMilage) * min;

    // Note, this condition was unclear in the instructions. Choose to place
    // condition on the parameter time.
    if(min > 25 && min < 250) {
        double randTimeAdded = rand() % (int)((1.0/3.0) * min) + 1;
        milage += milage + randTimeAdded;
    }

    return (int)milage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}