#include <iostream>

int main(){
    using namespace std;
    double distance_km;
    double fuel_litre;
    double fuel_consume;
    cout << "Enter the distance in kilometer: ";
    cin >> distance_km;
    cout << "Enter the fuel consume in litres: ";
    cin >> fuel_litre;
    fuel_consume = 100 * (fuel_litre / distance_km);
    cout << "The fuel consume is " << fuel_consume << " L/100KM." << endl;
    return 0;
}