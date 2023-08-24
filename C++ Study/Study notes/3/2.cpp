#include <iostream>
using namespace std;
const int FOOT_TO_INCH = 12;
const float INCH_TO_METER = 0.0254;
const float KG_TO_POUND = 2.2;
int main(){
    int height_foot, height_inch;
    float height, weight, weight_pound, BMI;
    cout << "Enter your height foot: ";
    cin >> height_foot;
    cout << "Enter your height inch(s): ";
    cin >> height_inch;
    cout << "Enter your weight in pounds: ";
    cin >> weight_pound;
    height = INCH_TO_METER * (FOOT_TO_INCH * height_foot + height_inch);
    weight = weight_pound / KG_TO_POUND;
    BMI = weight / (height * height);
    cout << "Your BMI is " << BMI << endl;
    return 0;
}