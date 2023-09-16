#include <iostream>

struct CandyBar{
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main(){
    using namespace std;
    CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Hershey bar", 4.2, 550}, {"Musketeers", 2.6, 430}};
    cout << "CandyBar: " << snack[0].brand << endl;
    cout << "Weight: " << snack[1].weight << endl;
    cout << "Calorie: " << snack[2].calorie << endl;
    return 0;
}