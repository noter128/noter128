#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longest_prefix(const vector<string>& v) {
    string commonPrefix = ""; //store common chars

    for (size_t i = 0; i < v.size(); i++) { //loop thru vector
        for (size_t j = 0; j < v[i].length(); j++) { //loop chars in string
            char tmpChar = v[i][j]; //curr character
            for (size_t k = 0; k < v.size(); k++) {//check char in all strings
                if (j >= v[k].length() || v[k][j] != tmpChar) {//eostring or diff chars
                    return commonPrefix;
                }
            }
            commonPrefix += tmpChar; //append char
        }
    }
    return commonPrefix;
}

int main(void) {
cout << "\"" << longest_prefix({ "apple", "apply", "ape", "april" }) << "\"\n";

cout << "\"" << longest_prefix({ "ap", "apple", "apply", "ape", "april", "aq", "x" }) << "\"\n";

cout << "\"" << longest_prefix({ "geezer", "geeksforgeeks", "geeks", "geek",  }) << "\"\n";

cout << "\"" << longest_prefix({ "sedatesingratiateconcomitant", "sedatesparleypoliteness", "sedateselbowsHahn", "sedatesgloweringimbecility's", "sedatesbuttershexing", "sedatesKwangju'smulch's", "sedatesunwiserN", "sedatesprepossessedboggles", "sedatesinterrelationshipdialings", "sedatesgropesNelsen's", "sedatesMayfaircondemnations" }) << "\"\n";

cout << "\"" << longest_prefix({ "symmetricstalwartscorn'flowers", "symmetricShetland'ssuccessfully", "symmetricreceiver'shipsteed", "symmetricGrailsflown", "symmetricpromenadingoutflank", "symmetricdrugg'ingseizure", "symmetricsanctumsove'rprinting", "symmetricCitroentransgr'essed", "symmetricdissembledwinging", "symmetric'recoupingCinderella" }) << "\"\n";
    return 0;
}