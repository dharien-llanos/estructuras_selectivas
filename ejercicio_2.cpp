#include<bits/stdc++.h>
using namespace std;
int main()
{
	float compra;
	cout<<"ingrese el precio de compra: "<<endl;
	cin>>compra;
	if(compra>1000)
	{
		compra=compra-(compra*0.20);
		
	}
	cout<<"el pago final es: "<<compra<<" soles "<<endl;
	return 0;
}