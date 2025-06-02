#include <iostream>
using namespace std;

int main(){
    double promedio, pension;
    cout<<"Ingrese el promedio del alumno:";
    cin>>promedio;
    if(promedio<0 || promedio>20){
        cout<<"Promedio invalido."<<endl;
        return 1;
    }
    cout<<"Ingrese el monto de la pension educativa:";
    cin>>pension;
    if(pension<0){
        cout<<"Monto invalido."<<endl;
        return 1;
    }

    if(promedio>=18){
        pension=pension-(pension*0.30);
    }else{
        pension=pension+(pension*0.18);
    }

    cout<<"El monto a pagar del alumno es:"<<pension<<" soles"<<endl;
    return 0;
}
