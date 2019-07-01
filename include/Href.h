#ifndef HREF_H
#define HREF_H
#include <vector>
#include <string>
#include <iostream>
#include "Doom.h"

using namespace std;


class Href:public Doom
{
    public:
       Href(string, vector<std::string>);
    string addPropertie(string );
    vector<std::string> attr;

    string name;

    protected:

    private:
};

#endif // HREF_H
