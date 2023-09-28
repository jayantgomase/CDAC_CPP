// assignment 8

#include <iostream>
using namespace std;

int main(){
    int basic, sales, comm, salary;
    cout << "Enter basic salary : ";
    cin >> basic;
    cout << "Enter total sales : ";
    cin >> sales;

    if(5000<=sales<=7500){
        comm = basic*3/100;
    }
    if(7051<=sales<=10500){
        comm = basic*8/100;
    }
    if(10501<=sales<15000){
        comm = basic*11/100;
    }
    if(15000<=sales){
        comm = basic*15/100;
    }
    salary = basic+comm;
    cout << "Salary : " << salary << "\n" << "Commission : " << comm <<endl;
    return 0;
}