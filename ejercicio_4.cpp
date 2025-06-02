#include <iostream>
using namespace std;

int main(){
    int n;
    double compra, descuento;
    cout<<"Ingrese el monto total de la compra:";
    cin>>compra;
    if(compra<0){
        cout<<"Monto invalido. Debe ser positivo."<<endl;
        return 1;
    }
    cout<<"Ingrese el numero obtenido:";
    cin>>n;
    if(n<0){
        cout<<"Numero invalido. Debe ser positivo."<<endl;
        return 1;
    }
    if(n<74){
        descuento=compra*0.15;
    } else {
        descuento=compra*0.20;
    }
    cout<<"El descuento es:"<<descuento<<" soles"<<endl;
    return 0;
}
