#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines = 1;

public:
    Jet();

    explicit Jet(string brand, string model);
    explicit Jet(string brand, string model, int numEngines);

    int getNumberOfEngines();
    void setNumberOfEngines(int numEngines);

    virtual ~Jet();
    virtual string toString();
    virtual double mileageEstimate(double time);
};


#endif //DRIVINGSIMULATOR_JET_H
