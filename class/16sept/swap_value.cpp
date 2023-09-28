#include <iostream>
using namespace std;

int swap(int a, int b);
float swap(float c, float d);

int main(){
    int p, q;
    float x, y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    cout << "first = " << x <<  " " << "second = " << y <<endl;

    swap(x, y);
    swap(p, q);
    
    return 0;
}

int swap(int a, int b){
    int t;
    t = a; a = b; b = t;
    cout << "int " << "first = " << a << " " << "second = " << b <<endl;
    return 0;
}

float swap(float c, float d){
    float t;
    t = c; c = d; d = t;
    cout << "float " << "first = " << c << " " << "second = " << d <<endl;
    return 0.0;
}