#include <iostream>
const int FOOT_TO_INCH = 12;
using namespace std;

int main(){
    int height;
    cout << "Please enter your height in inch(s): ___\b\b\b";
    cin >> height;
    cout << "Your height convert to " << height / FOOT_TO_INCH << " foot and " << height % FOOT_TO_INCH << " inch(s) height." << endl;
    return 0;
}