#include <iostream>

using namespace std;

int main() {

    /*int edad;

    cout<<"Ingrese su Edad\n";
    cin>>edad;

    if(edad>=18){

        cout<<"Usted es Mayor de Edad\n";
    }else{
        cout<<"Usted es Menor de Edad\n";
    }

    return 0;
}

*/


/*
int num1, num2;

cout << "Ingrese dos numeros: " << endl;
cout << "Ingrese el primer numero: " << endl;
cin >> num1;
cout << "Ingrese el segundo numero: " << endl;
cin >> num2;

if (num1>num2) {
cout <<"El primer numero es mayor al segundo" << endl;
} else {

cout <<"El segundo numero es mayor al primero" << endl;
}

return 0;
}*/

/*
    int numero1;

    cout << "Ingrese el numero entero: " << endl;

    cin >> numero1;

    if (numero1 % 2 == 0) {
        cout << "el numero ingresado si es par " << endl;

    } else {

        cout << "El numero es impar" << endl;
    }

    return 0;

}*/


/*
    int num, i, factorial;
    cout << "Introduce un numero: ";
    cin >> num;
    factorial=1;
    for(i=1;i<=num;i++)
        factorial = factorial * i;
    cout << endl << "Factorial de " << num << " es: " << factorial << endl;
    return 0;

}
*/


/*
    int n1, n2;
    do {
        cout << "Ingrese un numero mayor que 10, menor que 30: ";
        cout << endl;
        cin >> n1;
    } while (n1 <= 10 || n1 > 30);
    {
        cout << " Los numeros impares hasta llegar a " << n1 << " son:" << endl;
    }
    for (n2 = 1; n2 <= n1; n2++) {
        if (n2 % 2 != 0) {
            cout << " " << n2 << endl;
        }
    }
    return 0;
} */


/*
        int num,i=1;

        cout<<"Por favor, Ingrese un numero mayor o igual a 10, menor o igual a 30:" << endl;
        cin>>num;

        if(num>9 && num<31) {
            cout<<"Los numeros impares del 1 hasta "<<num<<" son :\n";
            while(i<=num) {
                if(i%2!=0){
                    cout<<i<<"\n";
                }
                i++;
            }
            cout<<endl;
        }else{
            cout<<"error";
        }

        return 0;
    }
 */



/*
using namespace std;

int main(){
    int semana = 0;
    cout<<"Eliga un numero del 1 al 5 para conocer un dia de la semana\n";
    cin>>semana;

    switch (semana) {
        case 1:
            cout<<"Lunes\n";
            break;
        case 2:
            cout<<"Martes\n";
            break;
        case 3:
            cout<<"Miercoles\n";
            break;
        case 4:
            cout<<"Jueves\n";
            break;
        case 5:
            cout<<"Viernes\n";
            break;
    }

*/