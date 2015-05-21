/*
File: element.h
Date: 5/10/2015

Description: header for 'element' object

Invariants:

Typedefs:
typedef string name:
name is the name associated with player to identify the player.
it's a string data.

typedef char symbol:
A character variable. We'll use typical symbols:
'X' and 'O'

Constant member functions:
string playerName();
This function will display the player associated with symbol.

char playerSymbol();
This function will display the symbol associated with player.

Modification member function:
void updatePlayer(string playerName);
Used to assign the name for player.

void updateSymbol (char symbol);
Used to assign the symbol for player.

*/
#ifndef TTT_H
#define TTT_H


namespace TTT
{
    class element
    {
public:
        //typedefs
        typedef string name;
        typedef char symbol;

        //constructor
        element();

        //constant member functions
        name playerName();
        symbol playerSymbol();
        //modification member functions
        void updatePlayer(string playerName);
        void updateSymbol (char symbol);
    private:
        name Name;
        symbol Symbol
    };

}

#endif
