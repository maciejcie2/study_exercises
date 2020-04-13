#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
char znak;
int a, b, h, wynik;
cout<<"Podaj znak (a,b,c lub d) ";
cin>>znak;

switch(znak)
{
  case ('a'):
 cout<<"Liczysz pole kwadratu"<<endl;
 cout<<"\nPodaj a ";
  cin>>a;
  wynik=a*a;
  cout<<"Pole tego kwadratu to: "<<wynik<<endl;
  
  break;

  case ('b'):
 cout<<"Liczysz pole prostok¹ta"<<endl;
 cout<<"\nPodaj a ";
  cin>>a;
  cout<<"\nPodaj b ";
  cin>>b;
  wynik=a*b;
  cout<<"Pole tego prostok¹ta to: "<<wynik<<endl;
  
  break;

case ('c'):
 cout<<"Liczysz pole trójk¹ta"<<endl;
 cout<<"\nPodaj a ";
  cin>>a;
  cout<<"\nPodaj h ";
  cin>>h;
  wynik=(a*h)*0.5;
  cout<<"Pole tego trójk¹ta to: "<<wynik<<endl;
  
  break;

case ('d'):
 cout<<"Liczysz pole trapezu"<<endl;
 cout<<"\nPodaj a ";
  cin>>a;
  cout<<"\nPodaj b ";
  cin>>b;
  cout<<"\nPodaj h ";
  cin>>h;
  wynik=(a+b)*h*0.5;
  cout<<"Pole tego trójk¹ta to: "<<wynik<<endl;
  
  break;


}

return 0;
}
