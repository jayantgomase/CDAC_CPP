// assignment 4

#include <iostream>
using namespace std;

int main(){
    int a, b, temp, tem1, tem2;
    cout << "Enter 2 integers : " <<endl;
    cin >> a >> b;
    tem1 = a; tem2 = b;
    temp = a; a = b; b = temp;
    cout << "using third variable" <<endl;
    cout << "a = " << a << "\t" << "b = " << b <<endl;

    tem1 = tem1*tem2;
    tem2 = tem1/tem2;
    tem1 = tem1/tem2;
    cout << "without using third variable" <<endl;
    cout << "a = " << tem1 << "\t" << "b = " << tem2 <<endl;

    return 0;
}



