#include <iostream>
using namespace std;

const char* longest(const char* pa[]) {
    int lenArr = 0;
    int lenCWord = 0;
    const char* longestCWord = nullptr;
    
    while (pa[lenArr] != nullptr) {
        lenArr++;
    }
    
    for (int i = 0; i < lenArr; i++) {
        int j = 0;
        int lenCWord2 = 0;

        while (pa[i][j] != '\0') {
            lenCWord2++;
            j++;
        }
        if (lenCWord2 >= lenCWord) {
            lenCWord = lenCWord2;
            longestCWord = pa[i];
        }
    }
    return longestCWord;
}

int main(void) {
    { const char* pa[] = { "C++", nullptr };
  cout << "\"" << longest(pa) << "\"\n"; }

{ const char* pa[] = { "", "0123", "Hello", "world", "!", nullptr };
  cout << "\"" << longest(pa) << "\"\n"; }

{ const char* pa[]  = { "Hello_world", "Hello", "Hello world", nullptr };
  cout << "\"" << longest(pa) << "\"\n"; }

{ const char* pa[] = { "Hello world!", "Hello_world", "Hello world", nullptr };
  cout << "\"" << longest(pa) << "\"\n"; }

{ const char* pa[] = { "C++", "Python", "Java", "C#", "Julia", "Rust", "Haskell", "Typescript", "OCaml", "Fortran", nullptr };
  cout << "\"" << longest(pa) << "\"\n"; }
    return 0;
}