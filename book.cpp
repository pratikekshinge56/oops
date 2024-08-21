#include<iostream>                   // header file
#include<string>                     // header file
using namespace std;

class Book
{                              //start a program 
    public:                            //Global variable
     string name;
     string author;
     int price;
     int page;

     void introduce()                //member function
     {
        cout<<"book title is : "<<name
        <<"\n book author is : "<<author
        <<"\n book price is : "<<price
        <<"\n book pages : "<<page<<endl;

     }
};  
   
int main(){    //main function
    Book b;
    b. name ="OOP";                       
    b. author="pratik ekshinge";                  //data of book
    b. price=250;
    b. page=100;

    b.introduce();       //end of program

}