#include<iostream>
using namespace std;
class Area{
  int l,b,area,sq;
  float area1,val;
  public:
  void set_side(int x){
   sq=x;
  }
  void set_circle(float x){
    val=x;
  }
  void set_rect(int x,int y){
     l=x;
     b=y;
  }
  void area_rect(){
    area=l*b;
    cout<<"Area of rectangle is "<<area<<endl;
  }
  void area_square(){
    area=sq*sq;
    cout<<"Area of square is "<<area<<endl;
  }
  void area_circle(){
    area1=3.14*val*val;
    cout<<"Area of circle is "<<area1<<endl;
  }
};
int main(){
Area r1;
r1.set_rect(11,12);
r1.set_side(12);
r1.set_circle(3.245f);
r1.area_rect();
r1.area_circle();
r1.area_square();
return 0;
}