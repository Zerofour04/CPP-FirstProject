#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string signatur, autor, titel;
    char typ;
    int seitenzahl, spielzeit;

    std::cout << "Signatur? ";
    std::getline(std::cin, signatur);

    std::cout << "Autor? ";
    std::getline(std::cin, autor);

    std::cout << "Titel? ";
    std::getline(std::cin, titel);

    std::cout << "Typ (Buchstabe)? ";
    std::cin >> typ;

    std::cout << "Seitenzahl? ";
    std::cin >> seitenzahl;

    std::cout << "Spieldauer? ";
    std::cin >> spielzeit;

    // Ausgabe der eingelesenen Werte
    std::cout << "\nDaten:\n";
    std::cout << "Signatur: " << signatur << '\n';
    std::cout << "Autor: " << autor << '\n';
    std::cout << "Titel: " << titel << '\n';
    std::cout << "Typ: " << typ << '\n';

    std::cout << "Seitenzahl: " << seitenzahl << " Seiten" <<'\n';
    std::cout << "Spieldauer: " << spielzeit << " Stunden" << '\n';

    return 0;
}