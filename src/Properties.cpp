#include "Properties.h"
#include <string>
#include <iostream>

using namespace std;

Properties::Properties()
{
    //ctor
}

std::string Properties::elvolve( std::string data)
{
    std::string volve="class=\"";
    volve+=data;
    volve+="\";";
    cout<<volve<<endl;
    return volve;
}

