#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int nc;
		float precio;
		cout<<"ingrese el monto a pagar: "<<endl;
		cin>>precio;
		cout<<"ingrese el numero de camisas: "<<endl;
		cin>>nc;
		if(nc>=3)
		{
			precio=precio-(precio*0.20);
			
		}
		else
		{
			precio=precio-(precio*0.10);
			
		}
		cout<<"el pago total es: "<<precio<<" soles"<<endl;
		return 0;
	}