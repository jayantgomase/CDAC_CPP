#include<iostream>
using namespace std;

int main(){
    int n, rev_num=0, i, digit;
    do{
        cout << "enter +ve number : ";
        cin >> n;
    } while (n<0);
    i=n;
    
    for( ; i!=0; i=i/10){
        digit=i%10;
        rev_num=rev_num*10+digit;	
	}

    if(n==rev_num)
    cout << "\n entered num is palindrom";
    else
    cout << "\n entered num is not palindrom";

    return 0;

}
