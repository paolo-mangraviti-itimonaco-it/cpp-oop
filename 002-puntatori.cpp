#include <iostream>

using namespace std;

int main()
{
    cout << "Esempi puntatori";
    cout << endl << endl << endl;
    int a = 15;
    int* pa = &a;
    cout << "Puntatori di tipi strutturati";
    cout << endl << endl;
    int b[4] = {2,8,1,0};
    cout << endl;
    cout << "array b: "  << b;
    cout << endl << endl;
    cout << "inidirizzo array b: "   << &b;
    cout << endl << endl;
    cout << "array b  (elementi) -  " << b[0] << " - " << b[1] << " - " << b[2] << " - " << b[3];
    cout << endl << endl;
    cout << "array b (elementi) Punt:valore -  " << &b[0] << ":" << b[0] << " - " << &b[1] << ":" << b[1]<< " - " << &b[2] << ":" << b[2] << " - " << &b[3] << ":" << b[3];
    cout << endl << endl;
    int* pb[4] = {&b[3],&b[2],&a,pa};
    cout << "array pb  -  " << pb[0] << " - " << pb[1] << " - " << pb[2] << " - " << pb[3];
    cout << endl << endl;
    cout<< "array pb  Punt:valore -  " << pb[0] << ":" << *pb[0] << " - " << pb[1] << ":" << *pb[1]<< " - " << pb[2] << ":" << *pb[2] << " - " << pb[3] << ":" << *pb[3];
    cout << endl << endl;
    (*pb[2])++;
    cout<< "array pb  Punt:valore -  " << pb[0] << ":" << *pb[0] << " - " << pb[1] << ":" << *pb[1]<< " - " << pb[2] << ":" << *pb[2] << " - " << pb[3] << ":" << *pb[3];
    cout << endl << endl;
    cout << "Valore della variabile 'a': " << a;
    cout << endl << endl;
    incrementa(a,3);
    cout << "Valore della variabile 'a': " << a;
    cout << endl << endl;
    incrementa(pb[0],5);
    cout << "Valore della variabile 'pb[0]' e del valore puntato: " << pb[0] << ":" << *pb[0];
    cout << endl << endl << endl << endl;

    return 0;
}
