#include <iostream>
using namespace std;

int main(){
    char sexo;
    double num_pul;
    int edad;

    cout<<"Ingrese su sexo(F para femenino y M para masculino):";
    cin>>sexo;
    if(sexo=='f' || sexo=='F'){
        cout<<"Ingrese su edad:";
        cin>>edad;
        if(edad<0){
            cout<<"Edad invalida."<<endl;
            return 1;
        }
        num_pul=(220-edad)/10.0;
    } else if(sexo=='m' || sexo=='M'){
        cout<<"Ingrese su edad:";
        cin>>edad;
        if(edad<0){
            cout<<"Edad invalida."<<endl;
            return 1;
        }
        num_pul=(210-edad)/10.0;
    } else {
        cout<<"Sexo invalido."<<endl;
        return 1;
    }

    cout<<"El numero de pulsaciones es:"<<num_pul<<endl;
    return 0;
}
