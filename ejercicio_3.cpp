#include <iostream>
using namespace std;

int main(){
    int nc;
    double precio;
    cout<<"Ingrese el monto a pagar:";
    cin>>precio;
    if(precio<0){
        cout<<"Precio invalido. Debe ser positivo."<<endl;
        return 1;
    }
    cout<<"Ingrese el numero de camisas:";
    cin>>nc;
    if(nc<0){
        cout<<"Numero de camisas invalido. Debe ser positivo."<<endl;
        return 1;
    }
    if(nc>=3){
        precio=precio-(precio*0.20);
    }else{
        precio=precio-(precio*0.10);
    }
    cout<<"El pago total es:"<<precio<<" soles"<<endl;
    return 0;
}
