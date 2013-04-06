#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

void print(ostream &os, string s)
{
  os << s << endl;
}

void selectprint(string s)
{
  ofstream of;
  of.open("output.txt");
  //choose where to output by commenting out one or neither of the lines
  //if you leave them both then they all prints will go to a file && to stdout
  print(cout, s); //redirect the print to stdout
  //print (of, s) //redirect the print to the file "output.txt"
}

int main()
{

  selectprint("my string");
  selectprint("other string");
  selectprint("another string");

  return 0;
}
