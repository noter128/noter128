#include <iostream>
#include <vector>
#include "smatrix.h"
using namespace std;

/*
struct sm_entry {
  size_t row;  // Matrix row
  size_t col;  // Matrix column
  int value;   // Value (non-zero)
};
typedef vector<sm_entry> smatrix;
*/

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    size_t i = 0;
    size_t j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col)) {
            r.push_back(a[i]);
            ++i;
        }
        else if (a[i].row > b[j].row || (a[i].row == b[j].row && a[i].col > b[j].col)) {
            r.push_back(b[j]);
            ++j;
        }
        else {
            int sumVal = a[i].value + b[j].value;
            if (sumVal != 0) {
                r.push_back({a[i].row, a[i].col, sumVal});
            }
            ++i;
            ++j;
        }
    }
    while (i < a.size()) {
        r.push_back(a[i]);
        ++i;
    }
    while (j < b.size()) {
        r.push_back(b[j]);
        ++j;
    }
}

int main(void) {

    { smatrix r;
  sum({ },
      { {0, 3, 1}, {0, 50, 1} },
      r);
  print(r); }

{ smatrix r;
  sum({ {0, 0, 1}, {1, 0, 1} },
      { {0, 3, 1}, {0, 50, 1} },
      r);
  print(r); }

{ smatrix r;
  sum({ {0, 0, 1}, {0, 1, 2}, {5, 10, 20}, {99, 12, 32} },
      { {0, 0, 1}, {0, 1, -2}, {10, 5, 20}, {99, 10, 30}, {99, 11, 31} },
      r);
  print(r); }

{ smatrix r;
  sum({ {0, 0, -1}, {0, 1, 2}, {5, 10, 20}, {10, 5, -20} },
      { {0, 0, 1}, {0, 1, -2}, {10, 5, 20} },
      r);
  print(r); }

{ smatrix r;
  sum({ {0, 0, -1}, {0, 1, 2},  {5, 10, 20 }, {10, 5, -20} },
      { {0, 0, 1}, {0, 1, -2},  {5, 10, -20}, {10, 5, 20} },
      r);
  print(r); }

    return 0;
}