#include <iostream>

using namespace std;

int main()
{
    cout << "Esempi puntatori";
    cout << endl << endl << endl;
    cout << "Puntatori di tipi elementari";
    cout << endl << endl;
    int a = 15;
    cout << "Valore della variabile: " << a;
    cout << endl;
    cout << "Puntatore (indirizzo) della variabile: " << &a;
    cout << endl;
    cout << "Valore della variabile (deferenziazione-referenzazione): " << *(&a);
    cout << endl << endl;
    int* pa1 = &a;
    //int& pa2 = a;            // equivalente al precedente
    cout << "Valore del puntatore pa: " << pa1;
    cout << endl;
    cout << "Valore puntato da pa: " << *pa1;

    cout << endl << endl;
    // Incremento del valore della variabile 'a'
    (*pa1)++;
    cout << "Valore della variabile: " << a;
    cout << endl;
    cout << "Puntatore (indirizzo) della variabile: " << &a;

    cout << endl << endl << endl;
    

    return 0;
}
