#include <iostream>
int distanceable(int);
int main(){
    using namespace std;
    int distance;
    cout << "Enter the distance in long: ";
    cin >> distance;
    int ma = distanceable(distance);
    cout << distance << " long = " << ma << " ma." << endl;
    return 0;
}

int distanceable(int sts)
{
    return sts * 220;
}