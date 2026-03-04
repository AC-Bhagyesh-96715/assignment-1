#include<iostream>
using namespace std;

class box{
public:
    int length;
    int breadth;
    int height;

    box(void){
        this->length = 3;
        this->breadth = 9;
        this->height = 8;
    }

    box(int length, int breadth, int height){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    void volume(void){
        int result = length * breadth * height;
        cout<<"Volume = "<<result<<endl;
    }
};

int main(){
    int choice;

    do{
        cout<<"1. Default values"<<endl;
        cout<<"2. Enter length breadth height"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                box b;      // default constructor
                b.volume();
                break;
            }

            case 2:
            {
                 int l,b,h;
                cout<<"Enter length breadth height: ";
                 cin>>l>>b>>h;
                box obj(l,b,h);// parameterized constructor
                obj.volume();
                break;
            }

            case 0:
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }

    }while(choice != 0);

    return 0;
}