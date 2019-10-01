#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "PoweredVehicle.h"

class Scooter : public PoweredVehicle {

public:
    Scooter();

    explicit Scooter(string brand, string model);

    virtual ~Scooter();
    virtual string toString();
    virtual double mileageEstimate(double time);
};


#endif //DRIVINGSIMULATOR_SCOOTER_H
