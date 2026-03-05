#include<iostream>
using namespace std;

class Date{
   public:
   int day;
   int month;
   int year;
   
   Date(void){
    day=0;
    month=0;
    year=0;
   }

   Date(int day,int month,int year):day(day),month(month),year(year){
   }
   void display(){
    cin>>day;
    cin>>month;
    cin>>year;

    cout<<day<<"/";
    cout<<month<<"/";
    cout<<year;
   }
};
 
class person{
    public:
    string name;
    string address;
    Date birthday;//association

     person(){
     name=" bhagyesh";
     address="pune ";
    
    }
    
    person(string name,string address):name(name),address(address){
    }
    
    person(string name,string address,Date birthday):name(name),address(address),birthday(birthday){
    }
    
    person(string name,string address,int day,int month,int year):name(name),address(address),birthday(day,month,year){
    }
    
    void acceptRecord(void){
        cin>>name;
        cin>>address;
        cout<<"birthday - "<<endl;
        this->birthday.display();   
        cout<<"name -"<<name<<endl;   
        cout<<"address -"<<address<<endl;
  
    }
};

class student{
    public:
    int id;
    int marks;
    string course;
    Date joinDate;//association
    Date endDate;//association
    
    student(){
    id=0;
    marks=0;
    course=" ";
    }

    student(int id,int marks,string course):id(id),marks(marks),course(course){
    
    }

    student(int id,int marks,string course,Date joinDate,Date endDate):id(id),marks(marks),course(course),joinDate(joinDate),endDate(endDate){

    }
    student(int id,int marks,string course,int day,int month,int year ):id(id),marks(marks),course(course),joinDate(day,month,year),endDate(day,month,year){

    }

    void studentRecord(void){
    cin>>id;
    cout<<"id-"<<id;
    cin>>marks;
    cout<<"marks-"<<marks<<endl;
    cin>>course;
    cout<<"course -"<<course<<endl;
    cout<<"enter joindate"<<endl;
    this->joinDate.display();
    cout<<"enter enddate"<<endl;
    this->endDate.display();
    }

};

int main(){
    Date d;
    // person p;
    // p.acceptRecord(); 
    student s;
    s.studentRecord();

    
    
}