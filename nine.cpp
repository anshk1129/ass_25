#include<iostream>
using namespace std;
class Circle{
  int r;
  float area;
  public:
  void setdata(int x){
     r=x;
  }
  void area_circle(){
    area=3.14*r*r;
    cout<<"Area of circle is "<<area<<endl;
  }

};
int main(){
Circle r1;
r1.setdata(7);
r1.area_circle();
return 0;
}