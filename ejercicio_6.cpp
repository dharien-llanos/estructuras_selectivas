#include<bits/stdc++.h>
using namespace std;
int main()
{
	float promedio;
	float pension;
	cout<<"ingrese el promedio del alumno: "<<endl;
		cin>>promedio;
	cout<<"ingrese el monto de la pension educativa: "<<endl;
	cin>>pension;
	

	if(promedio>=18)
	{
		pension=pension-(pension*0.30);
		
	}
	
	else
	{
		pension=pension+(pension*0.18);
		
	}
	
	cout<<"el monto a pagar del alumno es: "<<pension<<" soles "<<endl;
	return 0;
}