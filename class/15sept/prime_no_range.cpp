#include <iostream>
using namespace std;

int prime_range(int a, int b);

int main(){
    int n1, n2;
    
    cout << "Enter range.";
    cin >> n1 >> n2;
    prime_range(n1,n2);
    
    return 0;
}

int prime_range(int a, int b){
    int i, j,flag;
    for(i = a; i <= b; i++){
        if(i == 1 || i == 0)
        continue;
        flag = 1;

        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        cout << i<< " ";
    }
    return 0;
}