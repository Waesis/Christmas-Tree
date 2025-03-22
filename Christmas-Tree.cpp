#include <iostream>
#include <vector>
#include <string>

void deseneazaBrad(int inaltime) {
    std::vector<std::string> brad;

    for (int i = 0; i < inaltime; ++i) {
        int spatii = inaltime - i - 1;
        int stelute = 2 * i + 1;
        std::string linie(spatii, ' ');
        linie += std::string(stelute, '*');
        brad.push_back(linie);
    }

    int latime_trunchi = 3;
    int inaltime_trunchi = 7;
    int spatii = inaltime - (latime_trunchi / 2) - 1;

    for (int i = 0; i < inaltime_trunchi; ++i) {
        std::string linie(spatii, ' ');
        linie += std::string(latime_trunchi, '|');
        brad.push_back(linie);
    }

    for (const auto& linie : brad) {
        std::cout << linie << std::endl;
    }
}

int main() {
    int inaltime;
    std::cout << "Introdu inaltimea bradului: ";
    std::cin >> inaltime;
    if (inaltime < 100)
        deseneazaBrad(inaltime);
    else
        std::cout << "Brad-ul este prea mare pentru a putea fi afisat. ";
    return 0;
}
