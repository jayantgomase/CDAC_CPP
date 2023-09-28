#include<iostream>
using namespace std;

int main(){
    int n, digit, rev_num=0;
    bool flag=false;

    do{
        cout << "enter +ve number : ";
        cin >> n;

    } while(n<=0);

    if(n%10==0)
    flag=true;

    for(;n>0;n=n/10){
        digit=n%10;
        rev_num=rev_num*10+digit;
    }

    cout << rev_num;

    for(;rev_num!=0;rev_num/=10){
	    digit=rev_num%10;
        switch(digit){
            case 0: cout<<"\tzero";
            break;

            case 1: cout<<"\tone";
            break;

            case 2: cout<<"\ttwo";
            break;
        
            case 3:cout<<"\tthree";
            break;
        
            case 4:cout<<"\tfour";
            break;
        
            case 5:cout<<"\tfive";
            break;
        
            case 6:cout<<"\tsix";
            break;
        
            case 7:cout<<"\tseven";
            break;
        
            case 8:cout<<"\teight";
            break;
        
            case 9:cout<<"\tnine";
            break;
        }
    }

    if(flag)
    cout<<"\tzero";
    
    return 0;
}
