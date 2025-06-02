#include <iostream>
using namespace std;

int main(){
    double c1,c2,c3;
    cout<<"Ingrese su primera calificacion(0-100):";
    cin>>c1;
    if(c1<0||c1>100){
        cout<<"Calificacion invalida."<<endl;
        return 1;
    }
    cout<<"Ingrese su segunda calificacion(0-100):";
    cin>>c2;
    if(c2<0||c2>100){
        cout<<"Calificacion invalida."<<endl;
        return 1;
    }
    cout<<"Ingrese su tercera calificacion(0-100):";
    cin>>c3;
    if(c3<0||c3>100){
        cout<<"Calificacion invalida."<<endl;
        return 1;
    }
    double promedio=(c1+c2+c3)/3.0;
    cout<<"Promedio final:"<<promedio<<endl;
    if(promedio>=70){
        cout<<"El alumno aprueba el curso."<<endl;
    }else{
        cout<<"El alumno reprueba el curso."<<endl;
    }
    return 0;
}
