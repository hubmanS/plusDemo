#include "Div.h"
#include <string>
#include <iostream>
#include "Doom.h"

using namespace std;

Div::Div(string nameDiv, vector<std::string> attrDiv):Doom(Div::name, Div::attr)
{
    name=nameDiv;
    attr=attrDiv;
    cout<<"DIV"<<endl;
}





