#include <iostream>
using namespace std;

int main(){
    double compra;
    cout<<"Ingrese el precio de compra:";
    cin>>compra;
    if(compra<0){
        cout<<"Precio invalido. Debe ser un numero positivo."<<endl;
        return 1;
    }
    if(compra>1000){
        double descuento=compra*0.20;
        compra-=descuento;
        cout<<"Se aplico un descuento del 20%:-"<<descuento<<" soles"<<endl;
    }
    cout<<"El pago final es:"<<compra<<" soles"<<endl;
    return 0;
}
