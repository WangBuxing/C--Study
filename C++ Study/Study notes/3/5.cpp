#include <iostream>

 int main(){
     using namespace std;
     long long w_amount, us_amount;
     double percent;
     cout << "Enter the world's population: ";
     cin >> w_amount;
     cout << "Enter the population of the US: ";
     cin >> us_amount;
     percent = 100 * double(us_amount) / double(w_amount);
     cout << "The population of the US is " << percent << "% of the world population." << endl;
     return 0;
 }