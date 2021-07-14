#include <iostream>
using namespace std;

int main()
{
    //Deklaration der Variablen
    int anzahl;
    double preis;

    //Eingaben der Werte durch den Anwender
    cout << "Bitte Anzahl eingeben!: ";
    cin >> anzahl;
    cout << "Bitte Preis in Euro eingeben!: ";
    cin >> preis;

    //Ausgaben
    cout << "Sie haben eine Anzahl von " << anzahl << " eingegeben." << endl;
    cout << "Sie haben einen Preis von " << preis << " eingegeben." << endl;
}