// assignment 6

#include <iostream>
using namespace std;

int main(){
    char c;
    int i;
    do{
        cout << "enter a character : ";
        cin >> c;
        i = c;
        cout << "ASCII value : " << i <<endl;
    }while(c!='~');
    
    return 0;
}