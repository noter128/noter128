#include <iostream>
#include "cdata.h"
using namespace std;

int* expand_cdata(const cdata a[], int n) {
    int len = 0;
    for (int i = 0; i < n; i++) {
        len += a[i].count;
    }
    int* c = new int[len];
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i].count; j++) {
            c[k] = a[i].value;
            k++;
        }
    }
    return c;
}

int main(void) {
    { const int n = 1;
  const cdata a[] { { 3, 999 } };
  int* r = expand_cdata(a, n);
  print_array(r, 3);
  delete [] r; }

  return 0;
}