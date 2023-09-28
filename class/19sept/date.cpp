#include<iostream>
using namespace std;

class Date {
	int day;
	int month;
	int year;
public:
    // default constructor
	Date(){
        day = 01;
        month = 01;
        year = 2000;
    }
    // parameterized constructor
	Date(int d, int m, int y){
        this->day = d;
        this->month = m;
        this->year = y;
    }
    //copy constructor
    Date(Date &obj){
        this->day = obj.day;
        this->month = obj.month;
        this->year = obj.year;

    } 
	void Read(){
        do{
            cout << "Enter a Date (dd mm yyyy) : ";
            cin >> day >> month >> year;
        }while(0>day>31 || 0>month>12);
    }
	void Write(){
        cout << "The date is : " << day << "/" << month << "/" << year <<endl;
    }
	bool operator==(Date obj){
        if (this->day == obj.day && this->month == obj.month && this->year == obj.year){
            return true;
        }
        return false;
    }
};

int main(){

    Date jan1;
    Date feb1(01, 02, 2000);
    Date festival;
    festival.Read();

    if (festival.operator==(feb1)){
        cout << "Dates are the same .." << endl;
    }
    else{
        cout << "Not Matched .." << endl;
    }

    jan1.Write();


    return 0;
}