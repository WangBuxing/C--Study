//1
char actor[30];
short betsie[100];
float chuck[13];
long double dipsea[64];

//2
array<char, 30> actor;
array<short, 100> betsie;
array<float, 13> chuck;
array<long double, 64> dipsea;

//3
int test_3[5] = {1, 3, 5, 7, 9};

//4
int test_3[5] = {1, 3, 5, 7, 9};
even = test_3[0] + test_3[4];

//5
float ideas[10];
cout << idea[1] << "\n";

//6
char test_6[] = "cheeseburger";

//7
string test_7 = "Waldorf Salad";

//8
struct fish
{
    char kind[20];
    int weight;
    float length;
};

//9
fish test_9 = {"Bigfish", 9, 10.2};

//10
enum Response
{
    Yes = 1,
    No = 0,
    Maybe = 2
};

//11
double ted = 0.0;
double *pt = &ted;
cout << *pa << "\n";

//12
float treacle[10];
float *pb = &treacle[0];

//13
unsigned int test_13;
cin >> test_13;
int *pc = new int[test_13];
vector<int> Vector_13(test_13);

//15
struct fish
{
    char kind[20];
    int weight;
    float length;
};
fish *pd = new fish;
cin << pd->kind;

//17
#include <array>
#include <string>
#include <vector>

const int size = 10;
std::vector<std::string> pe(size);
std::array<std::string, size> pf;