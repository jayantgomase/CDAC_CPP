// assignment 10

#include <iostream>
using namespace std;

int main(){
    int a, b, c, max;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    max = (a>b) ? (a>c) ? a : c : (b>c) ? b : c;
    cout <<"Max of 3 is : " << max <<endl;
    return 0;
}
