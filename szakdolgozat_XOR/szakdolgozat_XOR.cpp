// szakdolgozat_XOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include "Kodolo.h"
#include "Dekodolo.h"
using namespace std;

int main()
{
    int trigger = 1; //While ciklus "kapcsoló" 
    int valaszto;   //user által megadott feladatválasztó


    while (trigger)     //Loop futtatása amíg megfelelõ input nem érkezik
    {
        //Userinput bekérése
        cout << "Kerem adja meg milyen muveletet szeretne elvegezni." << endl;
        cout << "1.) Kodolas" << endl;
        cout << "2.) Dekodolas" << endl;



        if (!(cin >> valaszto)) //Megadott input vizsgálata (integer inputot kapott-e) 
        {
            //Nem integer input esetén hibaüzenet visszaadása és cin stream ürítése;
            cout << "Ervenytelen input adja meg ujra" << endl << endl;;
            cin.clear();
            cin.ignore();
        }
        else //Integer input érkezett
        {
            Kodolo a;
            Dekodolo b;
            switch (valaszto)
            {
            case 1: //Kódoló meghívása
                cout << "A valasztott akcio az " << valaszto << "-es szamu." << endl;
                //Kodolo a;
                a.GetTitkosSzoveg();
                //a.teszter();
                trigger = 0;
                break;
            case 2: //Dekódoló meghívása
                cout << "A valasztott akcio a " << valaszto << "-es szamu." << endl;
                b.GetDekodoltSzoveg();
                trigger = 0;
                break;

            default:   //1,2 értékektõl különbözõ integer input érkezett
                cout << "Ervenytelen input adja meg ujra" << endl << endl;;
                break;
            }
        }
    }
    _getch();
    return 0;
}
