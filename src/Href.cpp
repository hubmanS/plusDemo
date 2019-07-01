#include "Href.h"
#include <string>
#include <iostream>

using namespace std;

Href::Href(string nameDiv, vector<std::string> attrDiv):Doom(Href::name, Href::attr)
{
    name=nameDiv;
    attr=attrDiv;
    cout<<"DIV"<<endl;
}


