#include <iostream>
#include <algorithm>
using namespace std;

int median(const int a[], int n) {
    int* tmp = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        tmp[k] = a[i];
        k++;
    }
    sort(tmp, tmp + n);
    int calcMedian;
    if (n % 2 != 0) {
        calcMedian = tmp[n / 2];
    }
    else {
        calcMedian = (tmp[n / 2 - 1] + tmp[n / 2]) / 2;
    }
    delete[] tmp;
    return calcMedian;
}

int main(void) {
    { const int n = 5; 
  int a[n] { 10, -10, 0, 12, 11 };
  cout << median(a, n) << '\n'; }

{ const int n = 6; 
  int a[n] { 30, 10, 0, -20, 14, 20 };
  cout << median(a, n) << '\n'; }

{ const int n = 1; 
  int a[n] { 99 };
  cout << median(a, n) << '\n'; }

{ const int n = 2; 
  int a[n] { 101, 99 };
  cout << median(a, n) << '\n'; }
    return 0;
}