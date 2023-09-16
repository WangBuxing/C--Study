#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<float, 3> list;
    cout << "Please enter your three records of 40 meters.\n";
    cout << "First record: ";
    cin >> list[0];
    cout << "Second record: ";
    cin >> list[1];
    cout << "Third record: ";
    cin >> list[2];
    cout << "You input:\nFirst: " << list[0] << "\nSecond: " << list[1] << "\nThird: " << list[2] << endl;
    float ave;
    ave = (list[0] = list[1] + list[2]) / 3;
    cout << "Your final record is " << ave << "s." << endl;
    return 0;
}