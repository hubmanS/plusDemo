#include "IO.h"

#include <iostream>
#include <fstream>
using namespace std;


IO::IO(){
cout<<"hola soy io"<<endl;
}

int IO::writeFile ()
{
  ofstream myfile;
  myfile.open ("example.html");
  myfile << "Writing this to a file.\n";
  myfile << "Writing this to a file.\n";
  myfile << "Writing this to a file.\n";
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}

