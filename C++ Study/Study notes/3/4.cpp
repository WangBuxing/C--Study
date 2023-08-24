#include <iostream>
const int DAY_TO_HOUR = 24;
const int HOUR_TO_MINUTE = 60;
const int MINUTE_SECOND = 60;

int main(){
    using namespace std;
    long long seconds;
    int day, hour, minute, second;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    second = seconds % MINUTE_SECOND;
    minute = seconds / MINUTE_SECOND % HOUR_TO_MINUTE;
    hour = seconds / MINUTE_SECOND / HOUR_TO_MINUTE % DAY_TO_HOUR;
    day = seconds / MINUTE_SECOND / HOUR_TO_MINUTE / DAY_TO_HOUR;
    cout << seconds << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes," << second << " seconds" << endl;
    return 0;
}