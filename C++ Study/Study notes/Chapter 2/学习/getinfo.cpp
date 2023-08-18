#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots; // 信息从cin流向carrots
    cout << "You have " << carrots << " carrots." << endl;
    cout << "Here are two more." << endl;
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl; //测试
    return 0;
}