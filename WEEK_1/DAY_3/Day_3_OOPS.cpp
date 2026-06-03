#include<iostream>
using namespace std;
class KidUsers{
public:
    int age;
    string bookType;
};
class AdultUser{
public:
    int age;
    string bookType;
};
int main(){
    KidUsers k;
    k.age=10;
    k.bookType="Kids";
    AdultUser a;
    a.age=20;
    a.bookType="Fiction";
    cout<<"Kid User Age: "<<k.age<<endl;
    cout<<"Kid Book Type: "<<k.bookType<<endl;
    cout<<"Adult User Age: "<<a.age<<endl;
    cout<<"Adult Book Type: "<<a.bookType<<endl;
    return 0;
}