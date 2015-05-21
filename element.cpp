/*
File: element.cpp
Implementation file for element object.
Date:  5/10/2015

See element.h for documentation.
*/

#include <cassert>

using namespace std;

namespace TTT
{
    //CONSTRUCTOR
    element();

    //CONSTANT MEMBER FUNCTION
    element::name element::playerName()
    {
        return name;
    }

    element::symbol element::playerSymbol()
    {
        return symbol;
    }

    //MODIFICATION MEMBER FUNCTION
    void element::updatePlayer(string playerName)
    {
        Name = playerName;
    }

    void element::updateSymbol(char symbol)
    {
        Symbol = symbol;
    }
}
