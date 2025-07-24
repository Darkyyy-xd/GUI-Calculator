#include<iostream>
#include "hive.h"

double calculation(int num1,char op,int num2){

    switch(op){
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
        case 'x':
            return num1 * num2;
        case '/':
            if(num2 == 0)
                std::cout << "Error";
            else 
                return static_cast<double>(num1) / num2;
        default :
            std::cout << "Invalid Input";
            return 0; 


    }
}