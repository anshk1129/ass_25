#include<iostream>
using namespace std;
class Reverse{
int n;
int res=0;
void reverse(){
 int n1=n;
 int r;
 while(n1!=0){
    r=n1%10;
    n1=n1/10;
    res=res*10+r;
 }
}
public:
void setdata(int x){
n=x;
}

void showdata(){
    reverse();
    cout<<"Reverse of a number "<<n<<" is "<<res<<endl;
}
};
int main(){
    Reverse r1;
    r1.setdata(2003);
    r1.showdata();
    return 0;
}