#include <iostream>
#include <cstring>

const int SIZE = 20;
int main(){
    using namespace std;
    char first_name[SIZE], last_name[SIZE];
    char full_name[SIZE * 2];
    cout << "Enter your first name: ";
    cin.getline(first_name, SIZE);
    cout << "Enter your last name: ";
    cin.getline(last_name, SIZE);
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;
    return 0;
}