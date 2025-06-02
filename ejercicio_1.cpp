#include<bits/stdc++.h>
using namespace std;
int main()
{
	float c1,c2,c3;
	float promedio;
	cout<<"ingrese su primera calificacion: "<<endl;
	cin>>c1;
	cout<<"ingrese su segunda calificacion: "<<endl;
	cin>>c2;
	cout<<"ingrese su tercera calificacion: "<<endl;
	cin>>c3;
	
	promedio=(c1+c2+c3)/3;
	if(promedio>70)
	{
		
		cout<<"el alumno aprueba el curso: "<<endl;
		
	}
	else
	{
		cout<<"el alumno reprueba el curso "<<endl;
		
	}
	
	return 0;
}