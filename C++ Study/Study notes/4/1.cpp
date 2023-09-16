#include <iostream>

int main(){
    using namespace std;
    char first_name[20], last_name[20];
    cout << "What is your first name?";
    cin.getline(first_name, 20);
    cout << "What is your last name?";
    cin.getline(last_name, 20);
    cout << "What letter grade do you deserve?";
    char grade;
    cin >> grade;
    cout << "What is your age?";
    int age;
    cin >> age;
    cout << "Nmae: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    return 0;
}