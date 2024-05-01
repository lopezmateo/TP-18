#include<iostream>
#include<string>
using namespace std;
int main()
{
    int casos;
    cout << "Ingrese el numero de cantidad  de pruebas que deseas :";
    cin >> casos;
    
    int ADENTRO = 0; 
    int FUERA = 0; 
    int numero;
    
    for(int i = 0; i < casos; ++i)
    {
        cout << "Ingrese un numero: "<<endl;
        cin >> numero;
        
        if(numero >= 10 && numero <= 20)
        {
            ADENTRO++; 
        }
        else
        {
            FUERA++; 
        }
    }
    
    cout << "Los numeros dentro del intervalo son: " << ADENTRO << endl;
    cout << "Los numeros fuera del intervalo son: " << FUERA << endl;
    
    return 0;
}