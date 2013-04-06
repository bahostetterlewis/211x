#include <iostream>
#include <string.h>
#include <ostream>
#include <fstream>

using namespace std;

void print(ostream *out, string s)
{
  *out << s << endl; // since we only have a pointer to an output stream we must dereference it before we write
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
   //outother is a convienence variable, it keeps us from needing to cast
    outother.open(argv[1]); 
    out = &outother;
    /* 
    THIS IS THE ALTERNATIVE WITHOUT outother IF YOU USE THIS DELETE THE LINE 'fstream outother;
    ALSO DELETE ANY LINE MENTIONING outother
    
    out = new ofstream(argv[1]);
    */
  }

  print(out, "s");

  if(strcmp("cout", argv[1]) != 0)
  {
    (ofstream*)outother.close();
    
    /* 
    THIS IS THE ALTERNATIVE WITHOUT outother IF YOU USE THIS DELETE THE LINE 'fstream outother;
    ALSO DELETE ANY LINE MENTIONING outother
    
    //we cast here because we want to tell the pointer it can find a "close" function
    //c++ style casts have a higher prcedence than -> so we don't need to wrap it
    //c style casts would require wrapping the cast in parens before the -> can be applied
    static_cast<ofstream*>(out)->close();
    */
  }

  return 0;
}
