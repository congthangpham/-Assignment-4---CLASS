#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        int yearModel;
        string make;
        int speed;
    public:
        Car(int y, string m) {
            yearModel = y;
            make = m;
            speed = 0;
        }
        int getYearModel() const {
            return yearModel;
        }
        string getMake() const {
            return make;
        }
        int getSpeed() const {
            return speed;
        }
        void accelerate() {
            speed += 5;
        }
        void brake() {
            speed -= 5;
        }
};

int main() {
    Car car(2022, "Toyota");

    for (int i = 1; i <= 5; i++) {
        car.accelerate();
        cout << "Current speed after accelerating " << i << " time(s): "
             << car.getSpeed() << endl;
    }

    for (int i = 1; i <= 5; i++) {
        car.brake();
        cout << "Current speed after braking " << i << " time(s): "
             << car.getSpeed() << endl;
    }

    return 0;
}