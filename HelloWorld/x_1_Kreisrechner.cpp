#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //  Konstanten

    const double cPi = 3.141592653;

    //  Variablen

    double vRadius, vDurchmesser, vUmfang, vFlaeche;
    int vOps, vWdh;

    do
    {
        //  Zurücksetzen des Wiederholungsschalters

        vWdh = 0;

        //  Wahl der Rechenoperation

        cout << "--------- --------- --------- --------- ---------" << endl << endl;
        cout << "   KREIS-BERECHNUNGEN" << endl << endl;
        cout << "   Welche Berechnung moechten Sie durchfuehren?" << endl << endl;

        cout << "   Radius (r)          1:  r = d / 2" << endl;
        cout << "                       2:  r = u / Pi / 2" << endl << endl;

        cout << "   Durchmesser (d)     3:  d = 2 * r" << endl;
        cout << "                       4:  d = u / Pi" << endl << endl;

        cout << "   Umfang (u)          5:  u = 2 * r * Pi" << endl;
        cout << "                       6:  u = d * Pi" << endl << endl;

        cout << "   Flaeche (A)         7:  A = r * r * Pi" << endl;
        cout << "                       8:  A = (d / 2) * (d / 2) * Pi" << endl << endl;

        cout << "   Ihre Auswahl: ";
        cin >> vOps;

        // Eingabe und Berechnung nach gewählter Rechenoperation

        switch(vOps)
        {
            //  r = d / 2
            case 1:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des RADIUS:" << endl << endl;
                cout << "   Bitte geben Sie den Durchmesser (d) ein: ";
                cin >> vDurchmesser;
                vRadius = vDurchmesser / 2;
                cout << "   Der Radius (r) betraegt: " << vRadius << endl << endl << endl;
                break;

            //  r = u / Pi / 2
            case 2:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des RADIUS:" << endl << endl;
                cout << "   Bitte geben Sie den Umfang (u) ein: ";
                cin >> vUmfang;
                vRadius = vUmfang / cPi / 2;
                cout << "   Der Radius (r) betraegt: " << vRadius << endl << endl << endl;
                break;

            //  d = 2 * r
            case 3:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des DURCHMESSERS:" << endl << endl;
                cout << "   Bitte geben Sie den Radius (r) ein: ";
                cin >> vRadius;
                vDurchmesser = 2 * vRadius;
                cout << "   Der Durchmesser (d) betraegt: " << vDurchmesser << endl << endl << endl;
                break;

            //  d = u / Pi
            case 4:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des DURCHMESSERS:" << endl << endl;
                cout << "   Bitte geben Sie den Umfang (u) ein: ";
                cin >> vUmfang;
                vDurchmesser = vUmfang / cPi;
                cout << "   Der Durchmesser (d) betraegt: " << vDurchmesser << endl << endl << endl;
                break;

            //  u = 2 * r * Pi
            case 5:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des UMFANGS:" << endl << endl;
                cout << "   Bitte geben Sie den Radius (r) ein: ";
                cin >> vRadius;
                vUmfang = 2 * vRadius * cPi;
                cout << "   Der Umfang (u) betraegt: " << vUmfang << endl << endl << endl;
                break;

            //  u = d * Pi
            case 6:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des UMFANGS:" << endl << endl;
                cout << "   Bitte geben Sie den Durchmesser (d) ein: ";
                cin >> vDurchmesser;
                vUmfang = vDurchmesser * cPi;
                cout << "   Der Umfang (u) betraegt: " << vUmfang << endl << endl << endl;
                break;

            //  A = r * r * Pi
            case 7:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des FLAECHENINHALTS:" << endl << endl;
                cout << "   Bitte geben Sie den Radius (r) ein: ";
                cin >> vRadius;
                vFlaeche = vRadius * vRadius * cPi;
                cout << "   Der Flaecheninhalt (A) betraegt: " << vFlaeche << endl << endl << endl;
                break;

            //  A = (d / 2) * (d / 2) * Pi
            case 8:
                cout << "--------- --------- --------- --------- ---------" << endl << endl;
                cout << "   Berechnung des FLAECHENINHALTS:" << endl << endl;
                cout << "   Bitte geben Sie den Durchmesser (d) ein: ";
                cin >> vDurchmesser;
                vFlaeche = (vDurchmesser / 2) * (vDurchmesser / 2) * cPi;
                cout << "   Der Flaecheninhalt (A) betraegt: " << vFlaeche << endl << endl << endl;
                break;

        }

        //  Frage nach neuer Berechnung
        
        cout << "--------- --------- --------- --------- ---------" << endl << endl;
        cout << "Moechten Sie eine weitere Berechnung durchfuehren?" << endl;
        cout << "1: JA" << endl;
        cout << "0: NEIN" << endl;
        cout << "Ihre Auswahl: ";
        cin >> vWdh;
    }
    while(vWdh == 1);

}