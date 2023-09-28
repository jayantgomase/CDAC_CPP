#include <iostream>
using namespace std;

int* add(int a, int b){
    int c = a + b;
        
    return &c;
}
int main(){
    int* d = add(5,10);
    cout << *d <<endl;
     
    return 0;
}