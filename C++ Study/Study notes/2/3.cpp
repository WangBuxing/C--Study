#include <iostream>
using namespace std;
void one(void);
void two(void);
int main(){
    one();
    one();
    two();
    two();
    return 0;
}

void one(void){
    cout << "Three bline mice" << endl;
}

void two(void){
    cout << "See how they run" << endl;
}