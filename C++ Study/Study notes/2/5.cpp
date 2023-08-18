#include <iostream>
using namespace std;
float convert(float);
int main(){
    float c_degrees;
    float f_degrees;
    cout << "Please enter a Celsius value: ";
    cin >> c_degrees;
    f_degrees = convert(c_degrees);
    cout << c_degrees << " degrees Celsius is " << f_degrees << " degrees Fahrengeit." << endl;
    return 0;
}

float convert(float f){
    return 1.8 * f + 32.0;
}