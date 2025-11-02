#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;

public:
    void setVehicleDetails(string b, string m) {
        brand = b;
        model = m;
    }

    void displayVehicleDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
protected:
    string type; 

public:
    void setCarDetails(string b, string m, string t) {
        setVehicleDetails(b, m);
        type = t;
    }

    void displayCarDetails() {
        displayVehicleDetails();
        cout << "Type: " << type << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity; 

public:
    void setElectricCarDetails(string b, string m, string t, int bc) {
        setCarDetails(b, m, t);
        batteryCapacity = bc;
    }

    void displayElectricCarDetails() {
        displayCarDetails();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar e1;
    string brand, model, type;
    int battery;

    cout << "Enter Vehicle Brand: ";
    getline(cin, brand);
    cout << "Enter Vehicle Model: ";
    getline(cin, model);
    cout << "Enter Car Type (e.g., Sedan, SUV): ";
    getline(cin, type);
    cout << "Enter Battery Capacity (kWh): ";
    cin >> battery;

    e1.setElectricCarDetails(brand, model, type, battery);

    cout << "\n--- Electric Car Details ---" << endl;
    e1.displayElectricCarDetails();

    return 0;
}
