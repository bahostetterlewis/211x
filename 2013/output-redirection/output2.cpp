#include <iostream>
#include <string.h>
#include <ostream>
#include <fstream>

using namespace std;

void print(ostream *out, string s)
{
  *out << s << endl;
}

int main(int argc, char* argv[])
{
  ostream* out;
  fstream outother;

  if(strcmp("cout", argv[1]) == 0)
  {
    out = &cout;
  }
  else
  {
    outother.open(argv[1]); 
    out = &outother;
  }

  print(out, "s");

  if(strcmp("cout", argv[1]) != 0)
  {
    outother.close();
  }

  return 0;
}
