#include<iostream>
using namespace std;
class Complex{
int real,imaginary;
public:
void setdata(int x,int y){
    real=x;
    imaginary=y;
}
void showdata();
};
void Complex::showdata(){
    cout<<"real part is = "<<real<<" and imaginary part is = "<<imaginary<<endl;
}
int main(){
Complex c1,c2;
c1.setdata(12,14);
c2.setdata(10,30);
c1.showdata();
c2.showdata();
return 0;

}