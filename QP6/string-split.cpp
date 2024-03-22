#include <iostream>
#include <string>
#include <vector>
#include "print_string.h"
using namespace std;

void split(const string& s, vector<string>& v) {
    size_t sStart = 0; //start index
    size_t sEnd = 0; // end index
    while (sStart < s.length()) { //loop til start index reaches eostring
        sEnd = s.find(' ', sStart); //pos for 1st space
        string tmpSubStr = s.substr(sStart, sEnd - sStart); //substr start -> end
        if (!tmpSubStr.empty()) { //check if substr not empty
            v.push_back(tmpSubStr); //push to vector v
        }
        if (sEnd == string::npos) { //check if ' ' not found
            sStart = sEnd;
        }
        else {
            sStart = sEnd + 1; //start index now after space
        }  
    }
}

int main(void) {
{ string s = "";
  vector<string> v;
  split(s, v);
  print(v); }

{ string s = "    ";
  vector<string> v;
  split(s, v);
  print(v); }

{ string s = "  a b  c ";
  vector<string> v;
  split(s, v);
  print(v); }

{ string s = "C++ LEIC FCUP FEUP";
  vector<string> v;
  split(s, v);
  print(v); }

{ string s = "       C++        ";
  vector<string> v;
  split(s, v);
  print(v); }

    return 0;
}

