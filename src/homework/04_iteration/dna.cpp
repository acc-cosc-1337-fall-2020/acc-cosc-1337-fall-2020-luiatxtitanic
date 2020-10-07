#include <iostream>
#include <string>
#include "dna.h"
using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/


double get_gc_content(const string& dna)
{
    char ch;
    double gc_count = 0;


    for(std::size_t i = 0; i < dna.size(); i++)
    {
      ch = dna[i];

      switch(ch)
      {
        case 'G':
        case 'C':
              gc_count++;
              break;

      }
    }
    double quotient = gc_count / dna.size();
    return quotient;


}
/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
  { 
    string new_dna;
    for(int i = dna.length()-1; i >= 0; i--)
    {
      new_dna.push_back(dna[i]);
    }
    return new_dna;
  }

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
  string get_dna_complement(string dna) 
  {
      string complement_dna = get_reverse_string(dna);
      int l = complement_dna.length();
      char a = 'A';
      char t = 'T';
      char c = 'C';
      char g = 'G';

      for(int i = 0; i < 1; i++)
      {
        if(complement_dna[i] == a)
        {
          complement_dna[i] = t;
        }
        else if(complement_dna[i] == t)
        {
          complement_dna[i] = a;
        }
        else if(complement_dna[i] == c)
        {
          complement_dna[i] = g;
        }
        else if(complement_dna[i] == g)
        {
          complement_dna[i] = c;
        }

      }

      return complement_dna;
  }

