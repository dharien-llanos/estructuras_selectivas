#include<bits/stdc++.h>
	using namespace std;
	int main()
	
	{
		char sexo;
		float num_pul;
		int edad;
		
		cout<<"ingrese su sexo (F para femenino y M para masculino)"<<endl;
		cin>>sexo;
		
		cout<<"ingrese su edad: "<<endl;
		cin>>edad;
		if(sexo=='f')
		{
			
		
		num_pul=(220-edad)/10.0;
	}
		else
		{
			num_pul=(210-edad)/10.0;
		}
		
		cout<<"el numero de pulsaciones es: "<<num_pul<<endl;
		return 0;
		
		
		
	}
