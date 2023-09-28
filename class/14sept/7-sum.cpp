#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "enter the number : ";
	cin >> n;
	int sum=0;

    for( ; n!=0; ){
   		if(n%10<0)
		sum+=-n%10;
   		else
		sum+=n%10;
		n=n/10;
	}
	
	cout<<sum;
	return 0;
}
