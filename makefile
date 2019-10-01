main.x: Car.o Bicycle.o main.o PoweredVehicle.o
	g++ -o main.x Car.o Bicycle.o PoweredVehicle.o Vehicle.o main.o -std=gnu++11

main.o: main.cpp
	g++ -c main.cpp -std=gnu++11

Car.o: Car.cpp Car.h PoweredVehicle.o
	g++ -c Car.cpp -std=gnu++11

Bicycle.o: Bicycle.cpp Bicycle.h Vehicle.o
	g++ -c Bicycle.cpp -std=gnu++11

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -c Vehicle.cpp -std=gnu++11

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h Vehicle.o
	g++ -c PoweredVehicle.cpp -std=gnu++11

clean:
	rm -f *.o
