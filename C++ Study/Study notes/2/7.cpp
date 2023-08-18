#include <iostream>
using namespace std;
void time(int hour, int minute);
int main(){
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    time(hours, minutes);
    return 0;
}
void time(int hour, int minute){
    cout << "Time: " << hour << ":" << minute << endl;
}
