#ifndef KOKKI_H
#define KOKKI_H

#include <string>
using namespace std;
class Kokki
{
public:
    Kokki(const string& name); // Constructor
    void MakeSalad();             // Method
    void MakeSoup();              // Method
    ~Kokki();                      // Destructor


protected:
    string name;
};

#endif //KOKKI_H;
