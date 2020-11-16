#pragma once
#include <string>
#include <vector>

using namespace std;

class Dekodolo
{
public:
    void GetDekodoltSzoveg();

private:
    string Szovegbekero();

    string Visszafejtes(string input, vector<int> randszamok);
};
