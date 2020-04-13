#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
int wys; 
cout<<"Podaj wysokosc choinki: ";
cin>>wys;
cout<<endl;
 for (int i=1;i<=wys-1;i++)
 { for (int k=1;k<=wys-i-1;k++)
 { cout << " ";
 }
 for (int j=1;j<=2*i-1;j++)
 {
   cout<<"*";
   }
 cout<<endl;
 } 
 for (int x=1;x<=wys-2;x++)
 {
   cout<<" ";
 }
 cout<<"#"; 
 char znak;
 cin>>znak;

 
    return 0;
}
