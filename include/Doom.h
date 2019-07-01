#ifndef DOOM_H
#define DOOM_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Doom
{
public:
    Doom(std::string,  vector<std::string>  );
    std::string open="<";
    std::string closed=">";
    std::string  label;
    vector<std::string>  properties;

protected:
    vector<std::string> fillBody(vector<std::string>);

private:
};

#endif // HREF_H
