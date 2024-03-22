#include <iostream>
#include <string>
using namespace std;

bool pangram(const string& s, string& m) {
    int hits[26] = {0};
    //size_t i = 0 also works for the loop
    for (unsigned int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            char c = tolower(s[i]);
            hits[c - 'a'] = 1;
        }
    }

    
    for (int i = 0; i < 26; i++) {
        if (hits[i] == 0) {
            m.push_back('a' + i);
        }
    }
    return m.empty();
}

int main(void) {
    { string s = "";
  string m = "";
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n"; }
    return 0;
}