#include<iostream>
using namespace std;
class Greatest{
private:
int a,b,c,max;
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
    cout<<"Greatest among three numbers "<<a<<" "<<b<<" "<<c<<" is "<<max<<endl;
}
};
int main(){
    Greatest l1,l2;
    l1.setdata(10,23,12);
    l1.showdata();
   
    return 0;
}