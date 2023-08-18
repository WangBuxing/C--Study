#include <iostream>
void time(int,int);
int main()
{
    using namespace std;
    int hour;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    time(hour, minutes);
    return 0;
}
void time(int h,int m)
{
    using namespace std;
    cout << "Time: " << h << ":" << m << endl;
}
