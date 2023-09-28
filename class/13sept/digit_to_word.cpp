#include <iostream>
using namespace std;

int main(){
    int n, r1, r2, reverse = 0, temp, rev2;
    cout << "Enter number \n";
    cin >> n;
    temp = n;

    while(n>0){
        r1 = n%10;
        reverse = (reverse*10) + r1;
        n = n/10;
    }
    

    while(reverse>0){
        r2 = reverse%10;
        rev2 = (rev2*10) + r2;
        reverse = reverse/10;

        switch(r2){
            case 1 : cout << "one" << " ";
                    break;
            case 2 : cout << "two" << " ";
                    break;
            case 3 : cout << "three" << " ";
                    break;
            case 4 : cout << "four" << " ";
                    break;
            case 5 : cout << "five" << " ";
                    break;
            case 6 : cout << "six" << " ";
                    break;
            case 7 : cout << "seven" << " ";
                    break;
            case 8 : cout << "eight" << " ";
                    break;
            case 9 : cout << "nine" << " ";
                    break;
        }
    }
    
    
    return 0;
}