#include<iostream>
using namespace std;

class Time{
  private:
  int hour;
  int min;
  int sec;

  public :
  Time(void):hour(0),min(0),sec(0){
  }

  Time(int hour,int min,int sec):hour(hour),min(min),sec(sec){
  }

  void setHours(int hour){
    this->hour=hour;
    
  }

  void setMin(int min){
    this->min=min;
  }

  void setSec(int sec){
    this->sec=sec;
  }

  int getHours(){
    return this->hour;
    
  }

  int getMin(){
    return this->min;
  }

  int getSec(){
    return this->sec;
  }

  void acceptRecord(){
   cout<<"enter hour";
   cin>>hour;
   cout<<"enter min";
   cin>>min;
   cout<<"enter sec";
   cin>>sec;
  }

  void printTime(void){
   
  cout<<this->hour<<"/"<<this->min<<"/"<<this->sec;
  }


};

int  menulist(void){
 int choise;
 cout<<"0:exit"<<endl;
 cout<<"1:Add Time"<<endl;
 cout<<"2:Display All Time"<<endl;
 cout<<"3:Display only hours of all time obj"<<endl;
 cout<<"4.enter choise"<<endl;
 cin>>choise;

 return choise;
}

int main(){
  
   Time *arr = new Time[3]; 
   //Add time
   //Display all Time
   //display only hours of all time obj

   int choise;
  while((choise = :: menulist()) != 0){
     
    switch(choise){
      case 1:
         
         for(int i=0;i<3;i++){
            arr[i].acceptRecord();
         }
         break;

          case 2:
         for(int i=0;i<3;i++){
            arr[i].printTime();
         }
         break;

          case 3:
          for(int i=0;i<3;i++){
              cout<< arr[i].getHours()<<endl;
         }       
    }

  } 
  
   
}