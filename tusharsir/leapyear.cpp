// assignment 7

#include <iostream>
using namespace std;

int main(){
    bool flag;
    int year;
    do{
        cout << "Enter a year : ";
        cin >> year;
        flag = ((year%4 == 0) && ((year%100 != 0) || (year%400 == 0))) ? true : false;

        if(flag == true){
        cout << "leap year" <<endl;
        }
        else{
        cout << "not a leap year" <<endl;
        }
    }while(year!=0);
    return 0;
}