#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int t;
    t = a; a = b; b = t;
    cout << a << "\t" << b <<endl;
}
int main(){
    int x = 5, y = 10;
    cout << x << "\t" << y <<endl;
    
    swap(x, y);
    cout << x << "\t" << y <<endl;
    
    return 0;
}