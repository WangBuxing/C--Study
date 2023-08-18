#include <iostream>
int main(){
    using namespace std;
    int years;
    cout << "Enter your age: ",
        cin >> years,
        // cout << " years" << endl;
        cout << "Your age is " << years << " years, or " << years * 12 << " months." << endl;
    return 0;
}