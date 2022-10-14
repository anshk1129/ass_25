#include<iostream>
using namespace std;
class Largest{
private:
int a,b,c,max=0;
void maximum(){
    if(a>b){
        if(a>c){
            max=a;
        }
        else{
            max=c;
        }
    }
    else {
        if(b>c){
            max=b;
        }
        else{
            max=c;
        }
    }
}

public:
void setdata(int x,int y,int z){
a=x;
b=y;
c=z;
}
void showdata(){
    maximum();
    cout<<"maximum among three numbers "<<a<<" "<<b<<" "<<c<<" is "<<max<<endl;
}
};
int main(){
    Largest l1,l2;
    l1.setdata(10,23,12);
    l1.showdata();
   
    return 0;
}