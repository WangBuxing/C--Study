#include <iostream>
int longable(int);
int main()
{
    using namespace std;
    int Long;
    cout << "Enter the Longs: ";
    cin >> Long;
    int Ma = longable(Long);
    cout << Long << " Longs = ";
    cout << Ma << " Mas." << endl;
    return 0;
}
int longable(int lts)
{
    int Ma = lts * 220;
    return Ma;
}