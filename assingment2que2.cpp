#include<iostream>
using namespace std;

class tollbooth
{
    unsigned int totalCars;
    double totalMoney;

public:

    tollbooth()
    {
        totalCars = 0;
        totalMoney = 0.0;
    }

    void payingCar()
    {
        totalCars++;
        totalMoney += 0.50;
    }

    void noPayCar()
    {
        totalCars++;
    }

    void printOnConsole()
    {
        cout<<"Total Cars = "<<totalCars<<endl;
        cout<<"Total Money = "<<totalMoney<<endl;
    }
};

int main()
{
    tollbooth t;
    int choice;

    
        cout<<"1. Paying Car"<<endl;
        cout<<"2. Non Paying Car"<<endl;
        cout<<"3. Show Data"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                t.payingCar();
                break;

            case 2:
                t.noPayCar();
                break;

            case 3:
                t.printOnConsole();
                break;

            case 0:
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }

    

    return 0;
}