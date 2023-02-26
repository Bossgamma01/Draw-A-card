#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
    int Suit = rand() % 3;
	int CardNum =rand() % 12;

    cout << "You Drew A";
    if (CardNum == 0)
    {
        cout << "n Ace";
    }
    else if (CardNum == 1)
    {
        cout << " 2";
    }
    else if (CardNum == 2)
    {
        cout << " 3";
    }
    else if (CardNum == 3)
    {
        cout << " 4";
    }
    else if (CardNum == 4)
    {
        cout << " 5";
    }
    else if (CardNum == 5)
    {
        cout << " 6";
    }
    else if (CardNum == 6)
    {
        cout << " 7";
    }
    else if (CardNum == 7)
    {
        cout << " 8";
    }
    else if (CardNum == 8)
    {
        cout << " 9";
    }
    else if (CardNum == 9)
    {
        cout << " 10";
    }
    else if (CardNum == 10)
    {
        cout << " Jack";
    }
    else if (CardNum == 11)
    {
        cout << " Queen";
    }
    else  cout << " King";
    {
       
    }
    


    


    cout << " 0f " ;

    if (Suit == 0)
    {
        cout << "Clubs";
    }
    else if (Suit == 1)
    {
        cout << "Diamonds";
    }
    else if (Suit == 2)
    {
        cout << "Hearts";
    }
    else if (Suit == 3)
    {
        cout << "Spades";
    }
		


		
	return 0;
}
