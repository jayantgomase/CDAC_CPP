#include <iostream>
using namespace std;

bool prime(int a);

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    prime(n);
    
    return 0;
}

bool prime(int num){
    bool p;
    for(int i = 2; i <= num/2; ++i){
        if(num % i == 0){
            p = false;
            cout << "false" <<endl;
            break;
        }
        else{
            p = true;
            cout << "true" <<endl;
        }
    }
    return p;
}
