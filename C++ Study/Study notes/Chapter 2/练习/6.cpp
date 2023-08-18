#include <iostream>
double change(double);
int main()
{
    using namespace std;
    cout << " Enter the number of light years: ";
    double lightyears;
    cin >> lightyears;
    double units = change(lightyears);
    cout << lightyears << " light years = " << units << " astronomical units." << endl;
    return 0;
}
double change(double lu)
{
    double units = lu * 63240;
    return units;
}