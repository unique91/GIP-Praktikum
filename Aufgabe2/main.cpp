#include <iostream>
using namespace std;

int main()
{
	// A02.01: Umrechnung Celsius in Fahrenheit
	double einheit_celsius, einheit_fahrenheit;
	cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ";
	cin >> einheit_celsius;
	einheit_fahrenheit = einheit_celsius * 1.8 + 32;
	cout << "Die Temperatur in Fahrenheit lautet: " << einheit_fahrenheit << endl;

	// A02.02: Umrechnung Meter in Fuß
	double einheit_meter, einheit_fuss;
	cout << "Bitte geben Sie die Laenge in Meter ein: ";
	cin >> einheit_meter;
	einheit_fuss = einheit_meter * 3.2808;
	cout << "Die Laenge in Fus lautet: " << einheit_fuss << endl;
	
	// A02.03: Umrechnung Euro in US Dollar
	double euro, dollar;
	cout << "Bitte geben Sie die Geldmenge in Euro ein: ";
	cin >> euro;
	dollar = euro * 1.2957;
	cout << "Die Geldmenge in US Dollar lautet: " << dollar << endl;

	// A02.04: Alle drei Umrechnungen in einer kombiniert
	double eingabe;
	double ergebnis = 0;
	int auswahl;

	cout << "Ihre Eingabe: ";
	cin >> eingabe;

	cout << "Ihre Auswahl der Umwandlung:\n 1 - Celsius in Fahrenheit\n 2 - Meter in Fuss\n 3 - Euro in US Dollar\n";
	cin >> auswahl;

	ergebnis = ((eingabe * 1.8 + 32) * (auswahl == 1)) + ((eingabe * 3.2808) * (auswahl == 2)) + ((eingabe * 1.2957) * (auswahl == 3));
	cout << "Das Ergebnis lautet: " << ergebnis << endl;

	// B02.01: Zeichen der ASCII Tabelle
	char c1, c2, c3, c4, c5, c6, c7;
	c1 = '\\n';
	c2 = '\\t';
	c3 = '\\x07';
	c4 = '""';
	c5 = '\'';
	c6 = 'a';
	c7 = 'Z';

	std::cout << "Newlin: " << c1 << std::endl;
	std::cout << "Tab: " << c2 << std::endl;
	std::cout << "Bell: " << c3 << std::endl;
	std::cout << "Doppeltes Hochkomma: " << c4 << std::endl;
	std::cout << "Einfaches Hochkomma: " << c5 << std::endl;
	std::cout << "Buchstabe a: " << c6 << std::endl;
	std::cout << "Buchstabe Z: " << c7 << std::endl;

	// B02.02: N-tes Zeichen des Alphabets
	cout << int('a') << endl;  // Ausgabe 97 (ASCII-Tabelle)
	cout << char(99) << endl;  // Ausgabe 'c' (ASCII-Tabelle)

	// Kleinbuschtaben 97 - 122 in ASCII
	// Buchstabe = ASCII von 'a' + (Position - 1) 
	// -> ASCII = 97 + (n - 1)
	// -> ASCII = int('a') + (n - 1)
	// char(ASCII)
	int position;
	cout << "Der wievielte Buchstabe soll ausgegeben werden? ";
	cin >> position;
	
	char buchstabe;
	buchstabe = char(int('a') + (position - 1));
	cout << "Der " << position << ". Buchstabe des Alphabets lautet: " << buchstabe << endl;

	// B02.03: Taschenrechner ohne Übertrag
	char zehner1, einer1, zehner2, einer2;
	cout << "Bitte geben Sie die Zehnerziffer der ersten Zahl ein: ";
	cin >> zehner1;
	cout << "Bitte geben Sie die Einerziffer der ersten Zahl ein: ";
	cin >> einer1;
	cout << "Bitte geben Sie die Zehnerziffer der zweiten Zahl ein: ";
	cin >> zehner2;
	cout << "Bitte geben Sie die Einerziffer der zweiten Zahl ein: ";
	cin >> einer2;

	// Ziffern als char einlesen z.B. 1 -> ASCII 49 u.s.w.
	// Problem: Zahl 2 ist nicht Zahl 2 sonder der ASCII-Code 50
	// Trick: char -> int umwandlen
	// Zahl = int(2) - int(0)
	// Beispiel: '0' = 48 und '2' = 50 -> 50 - 48 = 2 
	int zahl1 = (zehner1 - '0') * 10 + (einer1 - '0');
	int zahl2 = (zehner2 - '0') * 10 + (einer2 - '0');
	int summe = zahl1 + zahl2;
	cout << "Die Summe der beiden Zahlen " << zahl1 << " + " << zahl2 << " lautet: " << summe << endl;

	system("PAUSE");
	return 0;
}