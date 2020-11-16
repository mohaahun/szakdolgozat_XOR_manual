// szakdolgozat_XOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include "Kodolo.h"
#include "Dekodolo.h"
using namespace std;

int main()
{
    int trigger = 1; //While ciklus "kapcsol�" 
    int valaszto;   //user �ltal megadott feladatv�laszt�


    while (trigger)     //Loop futtat�sa am�g megfelel� input nem �rkezik
    {
        //Userinput bek�r�se
        cout << "Kerem adja meg milyen muveletet szeretne elvegezni." << endl;
        cout << "1.) Kodolas" << endl;
        cout << "2.) Dekodolas" << endl;



        if (!(cin >> valaszto)) //Megadott input vizsg�lata (integer inputot kapott-e) 
        {
            //Nem integer input eset�n hiba�zenet visszaad�sa �s cin stream �r�t�se;
            cout << "Ervenytelen input adja meg ujra" << endl << endl;;
            cin.clear();
            cin.ignore();
        }
        else //Integer input �rkezett
        {
            Kodolo a;
            Dekodolo b;
            switch (valaszto)
            {
            case 1: //K�dol� megh�v�sa
                cout << "A valasztott akcio az " << valaszto << "-es szamu." << endl;
                //Kodolo a;
                a.GetTitkosSzoveg();
                //a.teszter();
                trigger = 0;
                break;
            case 2: //Dek�dol� megh�v�sa
                cout << "A valasztott akcio a " << valaszto << "-es szamu." << endl;
                b.GetDekodoltSzoveg();
                trigger = 0;
                break;

            default:   //1,2 �rt�kekt�l k�l�nb�z� integer input �rkezett
                cout << "Ervenytelen input adja meg ujra" << endl << endl;;
                break;
            }
        }
    }
    _getch();
    return 0;
}
