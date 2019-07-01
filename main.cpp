#include <iostream>
#include "Doom.h" // Insert contents of add.h at this point.  Note use of double quotes here.
#include "IO.h"
#include "Properties.h"
#include "Div.h"
int main()
{
    vector<std::string> vec;
    for (int i = 1; i <= 5; i++)
    {
        vec.push_back("s");
    }



    std::cout << "The sum of 3 and 4 is "  << '\n';
    IO io;
    io.writeFile();
    Properties properties;
    std::string data=properties.elvolve("clase1");
    Div div("Div", vec);
//    div.fillBody()
    return 0;
}
