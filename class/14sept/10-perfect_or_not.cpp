#include<iostream>
using namespace std;

int main(){
    int n, i, sum=0;

    do{
        cout << "enter +ve number : ";
        cin >> n;

    } while(n<=0);
    i=1;

    for( ; i<n; i++){
	    if(n%i==0)
        sum+=i;
    }
    
    if(sum==n)
    cout<<"entered num is perfect";
    else
    cout<<"entered num is not perfect";
    
    return 0;

}
