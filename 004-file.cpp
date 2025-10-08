#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int x, y;
    char ch;
    ifstream fileLettura;                                           //dichiarazione file sola lettura
    ofstream fileScrittura;                                         //dichiarazione file sola lettura

    fileLettura.open("/home/....../dati.txt");                       // associa inFile al  file dati.txt
    fileLettura >> x >> y >> ch;
    cout << x << " " << y << " " << ch;                             //scrive su schermo i //valori letti
    fileLettura.close();                                            /* “chiusura” del file */

    fileScrittura.open("/home/....../scrivo.txt",ios::app);
    fileScrittura << " 3 " << " lorem ipsum ";
    fileScrittura.close();

    return 0;
}
