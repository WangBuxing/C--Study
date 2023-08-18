#include <iostream>
int month(int);
int main()
{
    using namespace std;
    cout << "Enter your age: ";
    int year;
    cin >> year;
    month(year);
    int months = month(year);
    cout << year << " years = ";
    cout << months << " months";
    return 0;
}
int month(int mth)
{
    int months = mth * 12;
    return months;
}