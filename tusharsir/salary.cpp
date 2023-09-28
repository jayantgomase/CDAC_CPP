// assignment 5

#include <iostream>
using namespace std;

int main(){
    float basic, gross, net;
    do{
        cout << "Enter basic salary : ";
    cin >> basic;
    gross = basic + (basic*15/100) + (basic*30/100);
    net = gross - (basic*12.5/100);
    cout << "net salary = " << net <<endl;

    }while(basic!=0);
    
    return 0;
}