/*
File: table.h
Date: 5/10/2015

Description: Table object for Tic-Tac-Toe game.

under the namespace TTT

Invariants:
1. Table will be of always 3x3 size.
2. Table cannot contain less than 0 elements and more than 9.
3. Table cannot contain any symbol besides 'X' and 'O'
4. Table is not valid after a 'winning situation'
5. No square contains more than one symbol.
6. Once assigned, the element in a square is not changeable.
7. Same symbol cannot be assigned consecutively.

A winning situation is:
Three count of the same symbol is  lined horizontally, or vertically or diagonally.

Keep track of the invariants:
1. const int CAPACITY
    To maintain the restriction of maximum square
    Satisfies(#1)
2. bool winner
    Identify the winner once a situation is observed and take necessary action.
    #4,
3. string nextMove
    keep track of which player has the next legal move.
    #7
4. int numMove
    keep track how many moves has been made so far
    #2
5. element:: symbol1 and element::symbol2
    #3

Class description:
CONSTRUCTORS:


*/

#ifndef TTT_H
#define TTT_H

#include "element.h"

namespace TTT
{
    class table
    {
        public:
        table ();
      //table (char [][],
        //MODIFICATION MEMBER FUNCTION

        //CONSTANT MEMBER FUNCTION



        private:
            const int CAPACITY = 3
            bool winner;
            string nextMove;
            int numMove;
            element::symbol X;
            element::symbol O;
    };

}

#endif // TTT_H
