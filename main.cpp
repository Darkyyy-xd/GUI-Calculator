#include<iostream>
using namespace std;
#include"hive.h"

int main(){
    int num1,num2;
    char op;

    cout << "Enter First Number" << endl;
    cin >> num1;

    cout << "Enter the Desired Operation" << endl;
    cin >> op;

     cout << "Enter Second Number" << endl;
    cin >> num2;

    double result = calculation(num1,op,num2);

    cout << "Result:" << result << endl;
    return 0;
}