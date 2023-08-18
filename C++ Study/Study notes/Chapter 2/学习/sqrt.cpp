#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double area;
    cout << "Enter the area of your home: " ;
    cin >> area;
    double side = sqrt(area);
    // side = sqrt(area);
    cout << "That's a the equivalent of a square " << side
         << " feet to the side." << endl;
    return 0;
}