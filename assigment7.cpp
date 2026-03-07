#include<iostream>
using namespace std;

class Employee{
protected:
    int id;
    double salary;

public:
    virtual void accept(){
        cout<<"Enter ID : ";
        cin>>id;
        cout<<"Enter Salary : ";
        cin>>salary;
    }

    virtual void display(){
        cout<<"ID : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
    }

    virtual int getType()=0; // for counting
    virtual ~Employee(){}
};

class Manager : virtual public Employee{
protected:
    double bonus;

public:
    void accept(){
        Employee::accept();
        cout<<"Enter Bonus : ";
        cin>>bonus;
    }

    void display(){
        Employee::display();
        cout<<"Bonus : "<<bonus<<endl;
    }

    int getType(){
        return 1;
    }
};

class Salesman : virtual public Employee{
protected:
    double commission;

public:
    void accept(){
        Employee::accept();
        cout<<"Enter Commission : ";
        cin>>commission;
    }

    void display(){
        Employee::display();
        cout<<"Commission : "<<commission<<endl;
    }

    int getType(){
        return 2;
    }
};

class SalesManager : public Manager, public Salesman{

public:
    void accept(){
        Employee::accept();
        cout<<"Enter Bonus : ";
        cin>>bonus;
        cout<<"Enter Commission : ";
        cin>>commission;
    }

    void display(){
        Employee::display();
        cout<<"Bonus : "<<bonus<<endl;
        cout<<"Commission : "<<commission<<endl;
    }

    int getType(){
        return 3;
    }
};

int main(){

    Employee* emp[10];
    int count=0;
    int choice;

    do{
        cout<<"\n1 Add Manager";
        cout<<"\n2 Add Salesman";
        cout<<"\n3 Add SalesManager";
        cout<<"\n4 Count Employees";
        cout<<"\n5 Display Managers";
        cout<<"\n6 Display Salesman";
        cout<<"\n7 Display SalesManagers";
        cout<<"\n0 Exit";
        cout<<"\nEnter Choice : ";
        cin>>choice;

        switch(choice){

        case 1:
            emp[count]=new Manager();
            emp[count]->accept();
            count++;
            break;

        case 2:
            emp[count]=new Salesman();
            emp[count]->accept();
            count++;
            break;

        case 3:
            emp[count]=new SalesManager();
            emp[count]->accept();
            count++;
            break;

        case 4:{
            int m=0,s=0,sm=0;

            for(int i=0;i<count;i++){
                if(emp[i]->getType()==1) m++;
                else if(emp[i]->getType()==2) s++;
                else if(emp[i]->getType()==3) sm++;
            }

            cout<<"Managers : "<<m<<endl;
            cout<<"Salesman : "<<s<<endl;
            cout<<"SalesManagers : "<<sm<<endl;
            break;
        }

        case 5:
            for(int i=0;i<count;i++)
                if(emp[i]->getType()==1)
                    emp[i]->display();
            break;

        case 6:
            for(int i=0;i<count;i++)
                if(emp[i]->getType()==2)
                    emp[i]->display();
            break;

        case 7:
            for(int i=0;i<count;i++)
                if(emp[i]->getType()==3)
                    emp[i]->display();
            break;
        }

    }while(choice!=0);

    for(int i=0;i<count;i++)
        delete emp[i];

    return 0;
}