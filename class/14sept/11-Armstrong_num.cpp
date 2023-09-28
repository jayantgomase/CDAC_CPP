#include<iostream>
using namespace std;

int main(){
    int n, i, sum=0, count=0, digit, power, j=0;

    do{
        cout << "enter +ve number : ";
        cin >> n;

    } while(n<=0);
    i=n;

    for(int i=n; i!=0; i=i/10){
	    count++;
    }

    for(;i!=0;){
	    digit=i%10;
	    digit=i%10;
        i=i/10;
        power=1; j=0;
        for(;j<count;j++){
       	    power*=digit;
        }
       sum+=power;
       
    }

    if(sum==n)
    cout<<"entered num is armstrong";
    else
    cout<<"entered num is not armstrong";
    return 0;

}
