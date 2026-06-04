#include<iostream>
using namespace std;
class KidUsers{
    int age;
    string bookType;
public:
    KidUsers(int a,string b){
        age=a;
        bookType=b;
    }
    void registerAccount(){
        if(age<12)
            cout<<"You have successfully registered under a Kids Account"<<endl;
        else
            cout<<"Sorry, Age must be less than 12 to register as a kid"<<endl;
    }
    void requestBook(){
        if(bookType=="Kids")
            cout<<"Book Issued successfully, please return the book within 10 days"<<endl;
        else
            cout<<"Oops, you are allowed to take only kids books"<<endl;
    }
};
int main(){
    KidUsers k1(10,"Kids");
    k1.registerAccount();
    k1.requestBook();
    cout<<endl;
    KidUsers k2(18,"Fiction");
    k2.registerAccount();
    k2.requestBook();
    return 0;
}