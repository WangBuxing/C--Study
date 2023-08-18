#include <iostream>
double Change(double);
int main()
{
    using namespace std;
    cout << "Enter the current temperature:";
    double S;
    cin >> S;
    double H = Change(S);
    cout << S << " S = " << H << " H" << endl;
    return 0;
}
double Change(double sh)
{
    double H = 1.8 * sh + 32.0;
    return H;
}