#include<iostream>
using namespace std;
class AdultUser{
    int age;
    string bookType;
public:
    AdultUser(int a,string b){
        age=a;
        bookType=b;
    }
    void registerAccount(){
        if(age>12)
            cout<<"You have successfully registered under an Adult Account"<<endl;
        else
            cout<<"Sorry, Age must be greater than 12 to register as an adult"<<endl;
    }
    void requestBook(){
        if(bookType=="Fiction")
            cout<<"Book Issued successfully, please return the book within 7 days"<<endl;
        else
            cout<<"Oops, you are allowed to take only adult Fiction books"<<endl;
    }
};
int main(){
    AdultUser a1(5,"Kids");
    a1.registerAccount();
    a1.requestBook();
    cout<<endl;
    AdultUser a2(23,"Fiction");
    a2.registerAccount();
    a2.requestBook();
    return 0;
}