#include<iostream>
int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << ch << " is " << i << endl;
    cout.put(ch);
    cout.put('!');

    cout << endl
         << "then" << endl;

    ch = ch + 1;
    i = ch; // int(i) char(ch)
    cout << ch << " is " << i << endl;
    // cout << ch << "!" << endl;
    cout.put(ch);
    cout.put('!');
    cout << endl
         << "Done" << endl;
    return 0;
}