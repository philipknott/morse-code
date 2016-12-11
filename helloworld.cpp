#include <iostream>
#include "string"
using namespace std;

void find(string tempStr, string & English)
{
    if (tempStr == ".-"){
        English += 'A';
    }
    else if (tempStr == "-..."){
        English += 'B';
    }
    else if (tempStr == "-.-."){
        English += 'C';
    }
    else if (tempStr == "-.."){
        English += 'D';
    }
    else if (tempStr == "-..."){
        English += 'E';
    }
    else if (tempStr == ".-.."){
        English += 'F';
    }
    else if (tempStr == "--."){
        English += 'G';
    }
    else if (tempStr == "...."){
        English += 'H';
    }
    else if (tempStr == ".."){
        English += 'I';
    }
    else if (tempStr == ".---"){
        English += 'J';
    }
    else if (tempStr == "-.-"){
        English += 'K';
    }
    else if (tempStr == ".-.."){
        English += 'L';
    }
    else if (tempStr == "--"){
        English += 'M';
    }
    else if (tempStr == "-."){
        English += 'N';
    }
    else if (tempStr == "---"){
        English += 'O';
    }
    else if (tempStr == ".--."){
        English += 'P';
    }
    else if (tempStr == "--.-"){
        English += 'Q';
    }
    else if (tempStr == ".-."){
        English += 'R';
    }
    else if (tempStr == "..."){
        English += 'S';
    }
    else if (tempStr == "-"){
        English += 'T';
    }
    else if (tempStr == "..-"){
        English += 'U';
    }
    else if (tempStr == "...-"){
        English += 'V';
    }
    else if (tempStr == ".--"){
        English += 'W';
    }
    else if (tempStr == "-..-"){
        English += 'X';
    }
    else if (tempStr == "-.--"){
        English += 'Y';
    }
    else if (tempStr == "--.."){
        English += 'Z';
    }
}

void cipher(string Morse)
{
    // tempStr = morse character patterns
    // English = english final product
    string tempStr = "";
    string English = "";

    for (int counter = 0; counter < Morse.length(); counter++)
    {
        if (Morse[counter] != ' '){
            tempStr += Morse[counter];
        }
        else if (Morse[counter] == ' '){
            find(tempStr, English);
            tempStr = "";
        }

    }
    find(tempStr, English);
    cout << English;
}

void input(string & Morse)
{   
    // Get phrase from user
    cout << "Enter Morse phrase:  ";
    getline (cin, Morse);
}

void main()
{
    string Morse = "";
    string dontStop = "";

    input(Morse);
    cipher(Morse);

    getline (cin, dontStop);
}