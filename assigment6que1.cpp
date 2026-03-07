#include<iostream>
using namespace std;

class Product{
protected:
    int id;
    string title;
    double price;

public:
    virtual void accept(){
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Title: ";
        cin>>title;
        cout<<"Enter Price: ";
        cin>>price;
    }

    virtual double calculatePrice() = 0;

    virtual void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
    }

    virtual ~Product(){}
};

class Book : public Product{
    string author;
public:
    void accept(){
        Product::accept();
        cout<<"Enter Author: ";
        cin>>author;
    }

    double calculatePrice(){
        return price - price*0.10;   //10% discount
    }

    void display(){
        Product::display();
        cout<<"Author: "<<author<<endl;
        cout<<"Final Price: "<<calculatePrice()<<endl;
    }
};

class Tape : public Product{
    string artist;
public:
    void accept(){
        Product::accept();
        cout<<"Enter Artist: ";
        cin>>artist;
    }

    double calculatePrice(){
        return price - price*0.05;   //5% discount
    }

    void display(){
        Product::display();
        cout<<"Artist: "<<artist<<endl;
        cout<<"Final Price: "<<calculatePrice()<<endl;
    }
};

int main(){
    Product* arr[3];
    int choice;

    for(int i=0;i<3;i++){
        cout<<"1.Book 2.Tape : ";
        cin>>choice;

        if(choice==1)
            arr[i]=new Book();
        else
            arr[i]=new Tape();

        arr[i]->accept();
    }

    double total=0;

    cout<<"\n---- Bill ----\n";
    for(int i=0;i<3;i++){
        arr[i]->display();
        total+=arr[i]->calculatePrice();
        cout<<endl;
    }

    cout<<"Total Bill: "<<total<<endl;

    for(int i=0;i<3;i++)
        delete arr[i];

    return 0;
}