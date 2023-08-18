#include <iostream>
using namespace std;
double convert(double a);

int main(){
    double ly;
    cout << "Enter the number of light years: ";
    cin >> ly;
    double au = convert(ly);
    cout << ly << " light years = " << au << " astronomical units" << endl;
    return 0;
}

double convert(double a){
    return a * 63240;
}