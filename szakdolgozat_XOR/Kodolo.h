#pragma once
#include <string>
#include <vector>

using namespace std;

class Kodolo {

public:
    void GetTitkosSzoveg();

private:
    string Szovegbekero();

    string Titkosito(string input, vector<int> randszamok);
};
