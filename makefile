main.x: main.o PoweredVehicle.o Vehicle.o Car.o Bicycle.o Jet.o Skateboard.o
	g++ -o main.x main.o PoweredVehicle.o Vehicle.o Car.o Bicycle.o Jet.o Skateboard.o  -std=gnu++11

main.o: main.cpp
	g++ -c main.cpp -std=gnu++11

Skateboard.o: Skateboard.cpp Skateboard.h Vehicle.o
	gcc -c Skateboard.cpp -std=gnu++11

Jet.o: Jet.cpp Jet.h PoweredVehicle.o
	gcc -c Jet.cpp -std=gnu++11

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
