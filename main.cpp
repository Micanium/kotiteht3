#include "kokki.h"
#include <iostream>

using namespace std;


Kokki::Kokki(const std::string& name)
{
    this->name = name;
  cout << name << " makes food" <<endl;
}

void Kokki::MakeSalad()
{
    cout << name << " makes salad" <<endl;
}

void Kokki::MakeSoup()
{
  cout << name << " makes soup" << endl;
}

Kokki::~Kokki()
{
    cout << name << " has finished cooking" <<endl;

 }

