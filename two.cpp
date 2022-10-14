#include<iostream>
using namespace std;
class Time{
int hr,min,sec;
public:
void setdata(int x,int y,int z){
    hr=x;
    min=y;
    sec=z;
}
void showdata(){
    cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
}
};
int main(){
Time c1,c2;
c1.setdata(5,34,56);
c2.setdata(6,56,45);
c1.showdata();
c2.showdata();
return 0;

}