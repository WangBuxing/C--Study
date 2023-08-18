// ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);    // function prototype for simon()

int main()
{
    using namespace std;
    simon(3);       // call the simon() function,因为simon()没有返回值，所以不能使用simon = simon(3)
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);   // call it again
    cout << "Done!" << endl;
	// cin.get();
    // cin.get();
    return 0;
}

void simon(int n)   // define the simon() 
                    // function void声明siomo()不需要返回值，这里的n只是一个中间值，实际指向main()中的count
{
    using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl;
}                   // void functions don't need return statements
