#include<iostream>
using namespace std;
class Square{
int n,sqofno;
static int count;
public:
void setdata(int x){
  n=x;  
}
void cal_sq(){
    sqofno=n*n;
    cout<<"\nSquare of a number is "<<sqofno<<endl;
    count++;
}
static void showcount(){
 cout<<"Function called "<<count<<" time";
}

};
int Square::count=0;
int main(){
    Square sq,sq1,sq2;
    sq.setdata(4);
    sq.cal_sq();
    sq.showcount();
     sq1.setdata(5);
    sq1.cal_sq();
    sq1.showcount(); 
    sq2.setdata(6);
    sq2.cal_sq();
    sq2.showcount();
    Square::showcount();
}