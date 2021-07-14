#include <iostream>
using namespace std;

int main()
{
    // Deklarationen der Variablen und (gleichzeitig) Wertzuweisungen
    int anzahlApfel = 2, anzahlBirne = 4;
    double preisApfel = 1.45, preisBirne = 0.85;
    double summe, mittel, anteil, differenz;

    // Berechnungen
    summe = anzahlApfel * preisApfel + anzahlBirne * preisBirne;
    mittel = summe / (anzahlApfel + anzahlBirne);
    anteil = 100.0 * anzahlBirne / (anzahlApfel + anzahlBirne);
    differenz = preisApfel - preisBirne;

    // Bildschirmausgaben
    cout << "Summe: " << summe << " Euro" << endl;
    cout << "Mittlerer Preis: " << mittel << " Euro" << endl;
    cout << "Anteil: " << anteil << " %" << endl;
    cout << "Differenz: " << differenz << " Euro" << endl;
}