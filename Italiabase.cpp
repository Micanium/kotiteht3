#include "Italia.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(const std::string& name) : Kokki(name)
{
   cout << name << " varasti reseptit" << endl;
}

void ItalianChef::MakePasta()
{
   cout << name << " makes pasta haha" << endl;
}

void ItalianChef::MakeBread()
{
    cout << name << " makes bread haha" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << name << " is tired" <<endl;

}
