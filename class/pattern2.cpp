#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of patterns \n";
    cin >> n;

    for(int i = n; i > 0; i--){
        for(int j = 1; j <= n; j++){
            if(j >= i){
                cout << "* ";    
            }
            else{
                cout << "  "; // two space for reverse pyramid
            }
        
        }
        cout << "\n";
    } 
    return 0;
}