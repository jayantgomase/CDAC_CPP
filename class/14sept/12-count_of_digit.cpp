#include<iostream>
using namespace std;

int main(){
 int n, digit, i, j, k, count=0;
 do{
    cout << "enter the +ve number : ";
    cin >> n;
    cout << "enter digit : ";
    cin >> digit;

   } while(n<=0);
   j=n;
   
   for( ; j!=0; j=j/10){
 	   k=j%10;
      if(k==digit)
      count++;
   }

   cout << "\nfor digit : " << digit << "count is : " << count;
   return 0;

}
