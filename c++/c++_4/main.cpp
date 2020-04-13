#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	unsigned int pkt;
	
	cout<<"Podaj liczbê punktów (od 0 do 100): ";
	cin>>pkt;
	
	if(pkt > 100)
		cout<<"Podana liczba nie jest z przedzia³u 0-100!\n";
	else
		if(pkt <= 50)
			cout<<"ocena niedostateczna(1)\n";
		else
			if(pkt <= 60)
				cout<<"ocena dostateczna(3)\n";
			else
				if(pkt <= 70)
					cout<<"ocena dobra(4)\n";
				else
					if(pkt <= 80)
						cout<<"ocena bardzo dobra(5)\n";
						else
							cout<<"ocena celuj¹ca(6)\n";
					
	system("pause");
	return 0;
}
