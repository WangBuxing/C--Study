#include <iostream>
int stoneable(int);
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight: ";
    cin >> stone;
    int pounds = stoneable(stone);
    cout << stone << " stones = ";
    cout << pounds << " pounds." << endl;
    return 0;
}
int stoneable(int sts)
{
    int pounds = sts * 14;
    return pounds;
}