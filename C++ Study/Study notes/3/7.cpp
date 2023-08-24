#include <iostream>
const float GALLON_TO_LITER = 3.785;
const float HKM_TO_MILE = 62.14;

int main(){
    using namespace std;
    double fuel_consume_EUR, fuel_consume_US;
    cout << "Enter the fuelconsume in Europe(L/100KM): ";
    cin >> fuel_consume_EUR;
    fuel_consume_US = GALLON_TO_LITER * HKM_TO_MILE / fuel_consume_EUR;
    cout << "The fuel consume is " << fuel_consume_EUR << " L/100KM." << endl;
    cout << "The fuel consume is " << fuel_consume_US << " mpg." << endl;
    return 0;
}