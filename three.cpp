#include<iostream>
using namespace std;
class Factorial{
int n;
int fact=1;
public:
void setdata(int x){
    n=x;
}
void factorial(){
   int i;
   if(n==1||n==0)
   return ;
   for(i=1;i<=n;i++){
    fact=fact*i;
   }
}
void showdata(){
    factorial();
    cout<<"Factorial of a number "<<n<<" is "<<fact<<endl;
}
};
int main(){
    int n;
    cout<<"Enter a number whose factorial you want to calculate "<<endl;
    cin>>n;
Factorial c1;
c1.setdata(n);
c1.showdata();

return 0;

}