#include<iostream>
using namespace std;
class area{
    public:
    int calc_area(int r){
        return 3.14*r*r;
    }
    int calc_area(int l,int b){
        return l*b;
    }
};
int main(){
   area A1,A2;
   cout<<A1.calc_area(4)<<endl;
   cout<<A2.calc_area(4,3);
}