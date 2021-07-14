#include <iostream>
#include <iomanip> // Header für Manipulatoren
using namespace std;

int main()
{
    //  Deklaration und Wertzuweisung für die Variable(n)
    double preis = 1.4;

    //  unformatierte Ausgabe
    cout << "unformatiert:" << endl;
    cout << preis << " Euro" << endl;

    /*  Einstellung der Mindestbreite (nur für direkt folgende Ausgabe)
        Auffüllung standardmäßig mit Leerzeichen */
    cout << "Mindestbreite der (direkt folgenden) Ausgabe:" << endl;
    cout << setw(8) << preis << " Euro" << endl;

    //  Auffüll-Zeichen festlegen
    cout << "mit Auffuellzeichen:" << endl;
    cout << setfill('.');
    cout << setw(8) << preis << " Euro" << endl;

    // Einstellung für die Darstellung der Nachkommastellen
    cout << "Nachkommastellen:" << endl;
    cout << fixed << setprecision(2);
    cout << setw(8) << preis << " Euro" << endl;

    //  Einstellung für linksbündige Darstellung (zahlen werden Standardmäßig rechtsbündig dargestellt)
    cout << "linksbuendig:" << endl;
    cout << left;
    cout << setw(8) << preis << " Euro" << endl;
}