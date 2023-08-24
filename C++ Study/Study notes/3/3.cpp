#include <iostream>
const int DEGREE_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;
int main(){
    using namespace std;
    int degree, minute, second;
    float degree_style;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    degree_style = degree + float(minute) / DEGREE_TO_MINUTE + float(second) / (DEGREE_TO_MINUTE * MINUTE_TO_SECOND);
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree_style << " degrees." << endl;
    return 0;
}