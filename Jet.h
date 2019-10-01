#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model);

    virtual ~Jet();
    virtual string toString();
    virtual double mileageEstimate(double time);
};


#endif //DRIVINGSIMULATOR_JET_H
