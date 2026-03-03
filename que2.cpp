#include <iostream>
using namespace std;

struct date {
    int day ;
    int month ;
    int year ;
};
struct date d1;





void intiDate(){
    
    d1.day = 26;
    d1.month = 02;
    d1.year = 2026;
}

void printDateOnConsole(){

    cout<<d1.day<<"/";
    cout<<d1.month<<"/";
    cout<<d1.year<<endl;


}

void acceptDateOnConsole(){
   
    cout<<"Date: ";
    cin>> d1.day;

    cout<<"Months: ";
    cin>> d1.month;

    cout<<"Years: ";
    cin>> d1.year;
    

}

bool leafyear(){
   if ((d1.year % 4 == 0 && d1.year % 100 != 0) || (d1.year % 400 == 0)){
        return true;
   }
   else{
    false;
   }
}

int main(){

    intiDate();
    printDateOnConsole();
    acceptDateOnConsole();
    printDateOnConsole();
    
    int a =leafyear() ;
    a==1 ? cout<<"leap Year" : cout<<"Non - leap";
    

    
}