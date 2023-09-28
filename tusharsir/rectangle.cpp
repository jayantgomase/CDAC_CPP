// assignment 14

#include <iostream>
using namespace std;

int main(){
    int len, wid;
    cout << "Enter the length and width of the rectangle : ";
    cin >> len >> wid;

    for(int i=0;i<wid;i++)
    {
        for(int j=0;j<len;j++)
        {
            if( j==0 || j==len-1 || i==0 || i==wid-1 )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout <<endl;
    }
    
    return 0;
}
