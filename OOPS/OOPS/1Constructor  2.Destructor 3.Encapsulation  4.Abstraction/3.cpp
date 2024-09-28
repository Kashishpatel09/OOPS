#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setDetails(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    void getDetails() {
        cout << "Company: " << company << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car;
    car.setDetails("Toyota", "Corolla", 2021);
    car.getDetails();
    return 0;
}

