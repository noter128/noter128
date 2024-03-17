#include <iostream>
using namespace std;

char* duplicate(const char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    char* var = new char[len + 1];
    for (int i = 0; i <= len; i++) {
        var[i] = s[i];
    }
    return var;
}

int main(void) {
    { char* s = duplicate("");
  cout << "\"" << s << "\"\n";
  delete [] s; }

{ char* s = duplicate("a");
  cout << "\"" << s << "\"\n";
  delete [] s; }

{ char* s = duplicate("C++");
  cout << "\"" << s << "\"\n";
  delete [] s; }

{ char* s = duplicate("0123 456 789 @ abc");
  cout << "\"" << s << "\"\n";
  delete [] s; }
    return 0;
}