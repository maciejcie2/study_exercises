#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{

double a,b,c,min,max,s;


cout<<"program sortuje liczby od najwi�kszej do najmniejszej"<<endl;


cout<<"Podaj liczb� a: "<<endl;
cin>>a;

cout<<"Podaj liczb� b: "<<endl;
cin>>b;

cout<<"Podaj liczb� c: "<<endl;
cin>>c;

cout<<endl;

if(( a >= b) && (a >= c)){
  if(b>=c){
  max=a;
  s=b;
  min=c;
  cout<<max<<endl;
  cout<<s<<endl;
  cout<<min<<endl;
  }
  else{
    max=a;
    s=c;
    min=b;
    cout<<max<<endl;
    cout<<s<<endl;
    cout<<min<<endl;
  }
}
else if(( b >= a) && (b >= c)){
  if(a >= c){
  max=b;
  s=a;
  min=c;
  cout<<max<<endl;
  cout<<s<<endl;
  cout<<min<<endl;
  }
else{
    max=b;
    s=c;
    min=a;
    cout<<max<<endl;
    cout<<s<<endl;
    cout<<min<<endl;
  }
  }

else if(( c >= a) && (c >= b)){
  if(a >=b ){
  max=c;
  s=a;
  min=b;
  cout<<max<<endl;
  cout<<s<<endl;
  cout<<min<<endl;
  }

else{
    max=c;
    s=b;
    min=a;
    cout<<max<<endl;
    cout<<s<<endl;
    cout<<min<<endl;
  }
  }

  return 0;
}

