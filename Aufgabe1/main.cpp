#include <iostream>
#include <limits>

int main() {
    // 1. Variable, Benutzereingabe
    std::cout << "Bitte geben Sie Ihre Studienrichtung ein:" << std::endl;
    std::cout << "1: Informatiker" << std::endl;
    std::cout << "2: Elektrotechniker" << std::endl;
    
    int study;
    std::cin >> study;

    std::cout << "Ihre Eingabe lautete: " << study << std::endl;

    // 2. Wertebereich des int Datentyps
    std::cout << "Die groesste speicherbare Integerzahl lautet: " << INT_MAX << std::endl;
    std::cout << "Die kleinste speicherbare Integerzahl lautet : " << INT_MIN << std::endl;

    // Verschachtelte Kommentare

    /*
    // Kommentarzeile innerhalb eines Blockkommentars macht in meinen Augen keinen Sinn!
    */

    // /* Blockkommentar innerhalb einer Kommentarzeile. */ 

    // Kommentare innerhalb von Programmzeilen können zum auskommentieren von Codezeilen verwendet werden,
    // d.h. um einzelne Teile nicht ausführen zu müssen, quasi entfernen von Programmteilen.

    return 0;
}