#include<iostream>
using namespace std;
class complex{
   int real,imaginary;
   public:
   complex(){

   };
   complex(int real,int imaginary){
    this->real=real;
    this->imaginary=imaginary;
   };
   void display(){
         cout<<real<<" +i"<<imaginary;
   }
   complex operator +(complex &C){
    complex ans;
    ans.real=real+C.real;
    ans.imaginary=imaginary+C.imaginary;
    return ans;
   }
};
int main(){
    complex c1(4,3);
    complex c2(5,2);
    complex C3=c1+c2;
    C3.display();
}