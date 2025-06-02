#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float compra,descuento;
	cout<<"ingrese el monto total de la compra: "<<endl;
	cin>>compra;
	cout<<"ingrese el numero obtenido: "<<endl;
	cin>>n;
	if(n<74)
	{
	
		descuento=compra*0.15;
	 } 
	 else
	 {
	 descuento=compra*0.20;
	 }
	 cout<<"el descuento es: "<<descuento<<" soles"<<endl;
	 return 0;
}