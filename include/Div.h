#ifndef DIV_H
#define DIV_H
#include <string>
#include <vector>
#include <iostream>
#include "Doom.h"

using namespace std;


class Div:public Doom
{
public:
    Div(string, vector<std::string>);
    string addPropertie(string );
    vector<std::string> attr;

    string name;
protected:

private:
};

#endif // DIV_H
