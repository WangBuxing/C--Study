#include <iostream>
void A();
void B();
using namespace std;
int main()
{
    A();
    A();
    B();
    B();
    return 0;
}
void A()
{
    cout << "Three blind mice" << endl;
}
void B()
{
    cout << "See how ther run" << endl;
}