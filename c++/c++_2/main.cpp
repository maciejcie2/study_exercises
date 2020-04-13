#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
  int a1;
  int skok;
  int numerwyrazu;
  

  cout<<"Podaj a1: ";
  cin>>a1;

  cout<<"Podaj skok: ";
  cin>>skok;
  
  cout<<"Podaj numer wyrazu: ";
  cin>>numerwyrazu;

  int akolejny=a1;
  int suma=a1;

  for(int i=2; i <=numerwyrazu; i++ )

  {
    akolejny=akolejny+skok;
    suma=suma+akolejny;
    
  }
cout<<"n-ty wyraz ciagu to: "<<akolejny<<endl;
 cout<<"Suma to: "<<suma<<endl;

    return 0;
}

