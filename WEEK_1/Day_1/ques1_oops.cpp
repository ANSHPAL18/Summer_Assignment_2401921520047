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
cout<<"Registered as Kid User"<<endl;
else
cout<<"Age must be less than 12"<<endl;
}
void requestBook(){
if(bookType=="Kids")
cout<<"Book issued for 10 days"<<endl;
else
cout<<"Only Kids books allowed"<<endl;
}
};
class AdultUser{
int age;
string bookType;
public:
AdultUser(int a,string b){
age=a;
bookType=b;
}
void registerAccount(){
if(age>=12)
cout<<"Registered as Adult User"<<endl;
else
cout<<"Age must be 12 or above"<<endl;
}
void requestBook(){
if(bookType=="Fiction")
cout<<"Book issued for 7 days"<<endl;
else
cout<<"Only Fiction books allowed"<<endl;
}
};
int main(){
    KidUsers k(10,"Kids");
    k.registerAccount();
    k.requestBook();
    AdultUser a(20,"Fiction");
    a.registerAccount();
    a.requestBook();
    return 0;
}