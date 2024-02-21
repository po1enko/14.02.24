#include <iostream>
#include <string>
#include <vector>

class Antivirus {
private:
    std::string name;
    int malwareCount;
public:
    Antivirus(const std::string &name, int malwareCount) : name(name), malwareCount(malwareCount) {}

    std::string getName() const {
        return name;
    }

    int getMalwareCount() const {
        return malwareCount;
    }

    void print() const {
        std::cout << "Antivirus name: " << name << std::endl;
        std::cout << "Malware count: " << malwareCount << std::endl;
    }
};

int main() {
    std::vector<Antivirus> antiviruses;

    antiviruses.push_back(Antivirus("Kaspersky", 100));
    antiviruses.push_back(Antivirus("Avast", 200));
    antiviruses.push_back(Antivirus("DrWeb", 150));

    int maxMalwareCount = 0;
    const Antivirus *maxMalwareAntivirus = 0;

    for (const Antivirus &antivirus: antiviruses) {
        antivirus.print();

        if (antivirus.getMalwareCount() > maxMalwareCount) {
            maxMalwareCount = antivirus.getMalwareCount();
            maxMalwareAntivirus = &antivirus;
        }
    }

    if (maxMalwareAntivirus != 0) {
        std::cout << "Antivirus with the largest malware database: " << maxMalwareAntivirus->getName() << std::endl;
    }

    return 0;
}
