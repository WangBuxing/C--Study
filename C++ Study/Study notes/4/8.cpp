#include <iostream>

struct Pizza
{
    char pizza_company[40];
    float pizza_diameter;
    float pizza_weight;
};

int main(){
    using namespace std;
    Pizza *dinner = new Pizza;
    cout << "Enter the Pizza's information:" << endl;
    cout << "Pizza's company: ";
    cin.getline(dinner->pizza_company, 40);
    cout << "Pizza's diameter(inches): ";
    cin >> dinner->pizza_diameter;
    cout << "Pizza's weight(pounds): ";
    cin >> dinner->pizza_weight;
    cout << dinner->pizza_company << "\n"
         << dinner->pizza_diameter << "\n"
         << dinner->pizza_weight << endl;
    delete dinner;
    return 0;
}