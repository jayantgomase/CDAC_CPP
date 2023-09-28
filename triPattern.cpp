// #include <iostream>
// using namespace std;

// int main(){
//     int n, k;
//     cout << "Enter number of patterns \n";
//     cin >> n;
//     k = n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j >= k){
//                 cout << "* ";    
//             }
//             else{
//                 cout << " "; // one space for equilateral
//             } 
//         }
//         k--;
//         cout << "\n";
//     } 
//     return 0;
// }
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
                cout << " "; // two space for reverse pyramid
            }
        
        }
        cout << "\n";
    } 
    return 0;
}

