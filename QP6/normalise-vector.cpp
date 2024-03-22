#include <iostream>
#include <string>
#include <vector>
#include "print_vector.h"
using namespace std;

template <typename T> //T can be anything "DataType"/"Element"
void normalise(vector<T>& v, const T& min, const T& max) {
    for(size_t i = 0; i < v.size(); i++) { //loop thru vector (for(T& x : v) also works)
        if (v[i] < min) { //check condition for min
            v[i] = min; //replace
        }
        else if (v[i] > max) { //check condition for max
            v[i] = max; //replace
        }
    }
}

int main(void) {
{ vector<int> v { }; normalise(v, 0, 1); print(v); }

{ vector<int> v { 1, 2, 3, 4, 5 }; normalise(v, 1, 5); print(v); }

{ vector<int> v { 1, 2, 3, 4, 5 }; normalise(v, 3, 4); print(v); }

{ vector<double> v { -1.2, 2.2, -3.5, 4.3, 5.2 }; 
  normalise(v, 0.5, 5.1); print(v); }

{ vector<string> v { "Diego", "Afonso", "Antonio", "Bernardo", "Tolentino", "Zeferino", "Xavier" };
  normalise(v, string("Antonio"), string("Zacarias")); print(v); }
    return 0;
}