#include <iostream>
void simon(int);
int main ()
{
    using namespace std;
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}
void simon(int n)
{
    using namespace std; //上下两个函数都使用了cout。故需要再次使用using编译指令
    cout << "Simon says touch your toes " << n << " times." << endl;
}