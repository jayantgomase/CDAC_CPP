// assignment 2

#include <iostream>
using namespace std;

int main(){
    
    float phy, chem, math, bio, eng, sum, avg;
    cout << "**-----Average of 5 subjects-----** " <<endl;
    cout << "Physics : ";
    cin >> phy;
    cout << "Chemistry : ";
    cin >> chem;
    cout << "Mathematics : ";
    cin >> math;
    cout << "Biology : ";
    cin >> bio;
    cout << "English : ";
    cin >> eng;

    sum = phy + chem + math + bio + eng;

    avg = sum/5;

    cout << "Average of 5 subjects = " << avg <<endl;

    return 0;
}

