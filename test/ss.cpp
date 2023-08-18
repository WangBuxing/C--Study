#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "a + b =" << a + b << endl;
    cin.get();      //用于读取下一次按键再关闭
    cin.get();      //两行一起
    return 0;
}