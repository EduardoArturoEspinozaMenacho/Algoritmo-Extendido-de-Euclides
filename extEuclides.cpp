#include <iostream>
using namespace std;
void ext_euclides(int a,int b);
int main() {
int a,b;
cin>>a;cout<<endl;
cin>>b;cout<<endl;
ext_euclides(a,b);  
}
void ext_euclides(int a,int b){
  int r=1;
  int q;
  int x0=1,y0=0;
  int x1=0,y1=1;
  int auxx,auxy;
  int auxa=a,auxb=b;
  while(r!=0){
    auxx=x1;auxy=y1;
    q=auxa/auxb;
    r=auxa%auxb;
    x1=x0-(q*x1);y1=y0-(q*y1);
    x0=auxx;y0=auxy;
    auxa=auxb;
    auxb=r;
  }
  cout<<"El MCD de "<<a<<" y "<<b<<" es "<<auxa<<endl<<"La ecuación es "<<"("<<a<<")"<<"("<<x0<<")+("<<b<<")"<<"("<<y0<<")"<<"="<<auxa<<endl;
}