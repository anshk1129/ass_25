#include<iostream>
using namespace std;
class Rectangle{
  int l,b,area;
  public:
  void setdata(int x,int y){
     l=x;
     b=y;
  }
  void area_rectangle(){
    area=l*b;
    cout<<"Area of rectangle is "<<area<<endl;
  }

};
int main(){
Rectangle r1;
r1.setdata(10,2);
r1.area_rectangle();
return 0;
}