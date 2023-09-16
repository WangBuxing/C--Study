#include <iostream>
#include <cstring>

struct CandyBar{
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main(){
    using namespace std;
    CandyBar *Bar = new CandyBar[3];
    strcpy(Bar[0].brand, "Mocha Munch");
    Bar[0].weight = 2.3;
    Bar[0].calorie = 350;
    strcpy(Bar[1].brand, "Hershey bar");
    Bar[1].weight = 4.2;
    Bar[1].calorie = 550;
    strcpy(Bar[2].brand, "Musketeers");
    Bar[2].weight = 2.6;
    Bar[2].calorie = 430;
    cout << "CandyBar 1: " << Bar[0].brand << " " << Bar[0].weight << " " << Bar[0].calorie << endl;
    cout << "CandyBar 2: " << Bar[1].brand << " " << Bar[1].weight << " " << Bar[1].calorie << endl;
    cout << "CandyBar 3: " << Bar[2].brand << " " << Bar[2].weight << " " << Bar[2].calorie << endl;
    delete[] Bar;
    return 0;
}