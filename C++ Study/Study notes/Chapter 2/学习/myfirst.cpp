// displays a message 
#include <iostream> // cin cout 需要用iostream 
int main() // main()是程序开始执行的地方
{
    using namespace std; // 用名字空间编译指令 std 来让iostream中的定义对程序可用，而采用using 指令，可去除前缀,让std空间指令都可用，但这是偷懒的方式，有风险
    // 更好的方式
    // using std::cout;
    // using std::endl;
    // using std::cin;
    cout << "Comp up and C++ me some time" << endl; // <<   表示把字符串发给cout,endl表示重启一行
    cout << "You won't regret it!" << endl;
    return 0;  //结束语句
}