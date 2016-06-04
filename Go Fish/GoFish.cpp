// Go Fish!
// Programmed by Edward Chen
// CMPSC 121 
// Date: 11/11/2013

#include <iostream> // header
#include <string>
using namespace std;

/* createDeck:
Creates the array that is to be used in the game and initializes all the values in it.
Parameters: 
deck ( modified char string )   list of cards in deck
length ( output int )           number of cards in deck
Pre-condition:
The array must be allocated to no fewer than 52 elements.*/

void createDeck ( string deck[] )  // creates the set of cards to be used
{
	const int numSuit = 4; // constant values for array
	const int numCard = 8;
	int index = 0; 	

	string suits[numSuit] = { "Hearts", "Spades", "Diamonds", "Clubs" }; // array of strings
	string cards[numCard] = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" }; // array of strings storing value

	for ( int i = 0; i < 4; i++ ) // combining the two strings
	{
		for ( int j = 0; j < 8; j++ )
		{
			deck[index++] = cards[j] + " of " + suits[i]; // creating a new string
		}
	}
}



/* shuffleDeck:
Shuffles the card values and suits in the deck so that it is random.
Parameters: 
deck ( modified char string )   list of cards in deck*/

void shuffleDeck ( string deck[] )  // shuffles the card values
{
	int i = 1 + rand() % 32; // setting a random value
	string temp; // temporary holders
	string temp2; 

	for ( int j = 0; j < 32; j++ )
	{
		swap ( deck[j], deck[i] ); // switching two cards randomly	
	}

}

/* tradeCard:
Adds or takes away cards from the player's hand.
Parameters: 
getHand ( modified char string )   string of cards of the person getting the card
giveHand ( modified char string )  string of cards of the person giving the card
cardRank ( input int )             rank of card
getHandpos ( input int )		   # of cards already in hand
giveHandpos ( input int )		   # of cards already in giving hand
Pre-condition:
The card or cards exist in the other person's hand
Post-condition:
One player has lost a card and another has gained
Calls:
checkSet*/

void tradeCard ( string getHand[], string giveHand[], int cardRank, int& getHandpos, int& giveHandpos )   // adds or takes away cards from player's hand
{
	string zero; 
	int j = getHandpos; 
	switch ( cardRank ) { // creating switch statement 
	case 2: 
		for ( int i = 0; i < 32; i++ )
		{
			if ( giveHand[i] == "Two of Hearts" || giveHand[i] == "Two of Spades" || giveHand[i] == "Two of Diamonds" || giveHand[i] == "Two of Clubs" )
			{
				getHand[j] = giveHand[i];
				if ( giveHand[giveHandpos - 1] == "Two of Hearts" || giveHand[giveHandpos - 1] == "Two of Spades" || giveHand[giveHandpos - 1] == "Two of Diamonds" || giveHand[giveHandpos - 1] == "Two of Clubs" )
				{
					giveHand[i] = giveHand[giveHandpos - 2]; 
					giveHand[giveHandpos - 2] = zero; 
				}
				else
				{
					giveHand[i] = giveHand[giveHandpos - 1];
					giveHand[giveHandpos - 1] = zero;
				}
				getHandpos = getHandpos + 1;   
				giveHandpos = giveHandpos - 1; 
			}
		}

		break; // ends case2

	case 3: 
		for ( int i = 0; i < 32; i++ )
		{
			if ( giveHand[i] == "Three of Hearts" || giveHand[i] == "Three of Spades" || giveHand[i] == "Three of Diamonds" || giveHand[i] == "Three of Clubs" )
			{
				getHand[j] = giveHand[i];
				if ( giveHand[giveHandpos - 1] == "Three of Hearts" || giveHand[giveHandpos - 1] == "Three of Spades" || giveHand[giveHandpos - 1] == "Three of Diamonds" || giveHand[giveHandpos - 1] == "Three of Clubs" )
				{
					giveHand[i] = giveHand[giveHandpos - 2]; 
					giveHand[giveHandpos - 2] = zero; 
				}
				else
				{
					giveHand[i] = giveHand[giveHandpos - 1];
					giveHand[giveHandpos - 1] = zero;
				}
				getHandpos = getHandpos + 1; 
				giveHandpos = giveHandpos - 1; 
			}
		}

		break; 

	case 4: 
		for ( int i = 0; i < 32; i++ )
		{
			if ( giveHand[i] == "Four of Hearts" || giveHand[i] == "Four of Spades" || giveHand[i] == "Four of Diamonds" || giveHand[i] == "Four of Clubs" )
			{
				getHand[j] = giveHand[i];
				if ( giveHand[giveHandpos - 1] == "Four of Hearts" || giveHand[giveHandpos - 1] == "Four of Spades" || giveHand[giveHandpos - 1] == "Four of Diamonds" || giveHand[giveHandpos - 1] == "Four of Clubs" )
				{
					giveHand[i] = giveHand[giveHandpos - 2]; 
					giveHand[giveHandpos - 2] = zero; 
				}
				else
				{
					giveHand[i] = giveHand[giveHandpos - 1];
					giveHand[giveHandpos - 1] = zero;
				}
				getHandpos = getHandpos + 1; 
				giveHandpos = giveHandpos - 1; 
			}
		}

		break;

	case 5: 
		for ( int i = 0; i < 32; i++ )
		{
			if ( giveHand[i] == "Five of Hearts" || giveHand[i] == "Five of Spades" || giveHand[i] == "Five of Diamonds" || giveHand[i] == "Five of Clubs" )
			{
				getHand[j] = giveHand[i];
				if ( giveHand[giveHandpos - 1] == "Five of Hearts" || giveHand[giveHandpos - 1] == "Five of Spades" || giveHand[giveHandpos - 1] == "Five of Diamonds" || giveHand[giveHandpos - 1] == "Five of Clubs" )
				{
					giveHand[i] = giveHand[giveHandpos - 2]; 
					giveHand[giveHandpos - 2] = zero; 
				}
				else
				{
					giveHand[i] = giveHand[giveHandpos - 1];
					giveHand[giveHandpos - 1] = zero;
				}
				getHandpos = getHandpos + 1;  
				giveHandpos = giveHandpos - 1; 
			}
		}

		break;

	case 6: 
		for ( int i = 0; i < 32; i++ )
		{
			if ( giveHand[i] == "Six of Hearts" || giveHand[i] == "Six of Spades" || giveHand[i] == "Six of Diamonds" || giveHand[i] == "Six of Clubs" )
			{
				getHand[j] = giveHand[i];
				if ( giveHand[giveHandpos - 1] == "Six of Hearts" || giveHand[giveHandpos - 1] == "Six of Spades" || giveHand[giveHandpos - 1] == "Six of Diamonds" || giveHand[giveHandpos - 1] == "Six of Clubs" )
				{
					giveHand[i] = giveHand[giveHandpos - 2]; 
					giveHand[giveHandpos - 2] = zero; 
				}
				else
				{
					giveHand[i] = giveHand[giveHandpos - 1];
					giveHand[giveHandpos - 1] = zero;
				}
				getHandpos = getHandpos + 1; 
				giveHandpos = giveHandpos - 1; 
			}
		}

		break;

	case 7: for ( int i = 0; i < 32; i++ )
			{
				if ( giveHand[i] == "Seven of Hearts" || giveHand[i] == "Seven of Spades" || giveHand[i] == "Seven of Diamonds" || giveHand[i] == "Seven of Clubs" )
				{
					getHand[j] = giveHand[i];
					if ( giveHand[giveHandpos - 1] == "Seven of Hearts" || giveHand[giveHandpos - 1] == "Seven of Spades" || giveHand[giveHandpos - 1] == "Seven of Diamonds" || giveHand[giveHandpos - 1] == "Seven of Clubs" )
					{
						giveHand[i] = giveHand[giveHandpos - 2]; 
						giveHand[giveHandpos - 2] = zero; 
					}
					else
					{
						giveHand[i] = giveHand[giveHandpos - 1];
						giveHand[giveHandpos - 1] = zero;
					}
					getHandpos = getHandpos + 1;   
					giveHandpos = giveHandpos - 1; 
				}
			}

			break;

	case 8: 
		for ( int i = 0; i < 32; i++ )
		{
			if ( giveHand[i] == "Eight of Hearts" || giveHand[i] == "Eight of Spades" || giveHand[i] == "Eight of Diamonds" || giveHand[i] == "Eight of Clubs" )
			{
				getHand[j] = giveHand[i];
				if ( giveHand[giveHandpos - 1] == "Eight of Hearts" || giveHand[giveHandpos - 1] == "Eight of Spades" || giveHand[giveHandpos - 1] == "Eight of Diamonds" || giveHand[giveHandpos - 1] == "Eight of Clubs" )
				{
					giveHand[i] = giveHand[giveHandpos - 2]; 
					giveHand[giveHandpos - 2] = zero; 
				}
				else
				{
					giveHand[i] = giveHand[giveHandpos - 1];
					giveHand[giveHandpos - 1] = zero;
				}
				getHandpos = getHandpos + 1;   
				giveHandpos = giveHandpos - 1; 
			}
		}

		break;

	case 9: 
		for ( int i = 0; i < 32; i++ )
		{
			if ( giveHand[i] == "Nine of Hearts" || giveHand[i] == "Nine of Spades" || giveHand[i] == "Nine of Diamonds" || giveHand[i] == "Nine of Clubs" )
			{
				getHand[j] = giveHand[i];
				if ( giveHand[giveHandpos - 1] == "Nine of Hearts" || giveHand[giveHandpos - 1] == "Nine of Spades" || giveHand[giveHandpos - 1] == "Nine of Diamonds" || giveHand[giveHandpos - 1] == "Nine of Clubs" )
				{
					giveHand[i] = giveHand[giveHandpos - 2]; 
					giveHand[giveHandpos - 2] = zero; 
				}
				else
				{
					giveHand[i] = giveHand[giveHandpos - 1];
					giveHand[giveHandpos - 1] = zero;
				}
				getHandpos = getHandpos + 1;   
				giveHandpos = giveHandpos - 1; 
			}
		}

		break; 

	}

}

/* countCard:
Counts how many, if any, of the card values that the other player has in the hand.
Parameters:
cardHand ( modified char string )  the hand the other player has
card ( input char )                the card to check for*/

int countCard ( string cardHand[], int cardRank )    // counts how many, if any, of the card values that the other player has in hand
{
	string rank;
	int counter = 0; 
	switch ( cardRank ) { // switch statement to see if there are any cards of that rank
	case 2:	for ( int i = 0; i < 32; i++ ) // searches for any card with a 2 in it
				if ( cardHand[i] == "Two of Hearts" || cardHand[i] == "Two of Spades" || cardHand[i] == "Two of Diamonds" || cardHand[i] == "Two of Clubs" )
					counter++; // adds the counter to see how many
		break; // end this case
	case 3: for ( int i = 0; i < 32; i++ )
				if ( cardHand[i] == "Three of Hearts" || cardHand[i] == "Three of Spades" || cardHand[i] == "Three of Diamonds" || cardHand[i] == "Three of Clubs" )
					counter++;
		break;
	case 4: for ( int i = 0; i < 32; i++ )
				if ( cardHand[i] == "Four of Hearts" || cardHand[i] == "Four of Spades" || cardHand[i] == "Four of Diamonds" || cardHand[i] == "Four of Clubs" )
					counter++;
		break;
	case 5:	for ( int i = 0; i < 32; i++ )
				if ( cardHand[i] == "Five of Hearts" || cardHand[i] == "Five of Spades" || cardHand[i] == "Five of Diamonds" || cardHand[i] == "Five of Clubs" )
					counter++;
		break;
	case 6: for ( int i = 0; i < 32; i++ )
				if ( cardHand[i] == "Six of Hearts" || cardHand[i] == "Six of Spades" || cardHand[i] == "Six of Diamonds" || cardHand[i] == "Six of Clubs" )
					counter++;
		break;
	case 7:	for ( int i = 0; i < 32; i++ )
				if ( cardHand[i] == "Seven of Hearts" || cardHand[i] == "Seven of Spades" || cardHand[i] == "Seven of Diamonds" || cardHand[i] == "Seven of Clubs" )
					counter++;
		break;
	case 8: for ( int i = 0; i < 32; i++ )
				if ( cardHand[i] == "Eight of Hearts" || cardHand[i] == "Eight of Spades" || cardHand[i] == "Eight of Diamonds" || cardHand[i] == "Eight of Clubs" )
					counter++;
		break;
	case 9: for ( int i = 0; i < 32; i++ )
				if ( cardHand[i] == "Nine of Hearts" || cardHand[i] == "Nine of Spades" || cardHand[i] == "Nine of Diamonds" || cardHand[i] == "Nine of Clubs" )
					counter++;
		break; 
	}


	return counter; // return the number of that card

}

/* checkSet:
Checks a player's hand if it contains a set.
Parameters:
cardHand ( modified char string )  the hand to check for
rank ( input int )		           the card value to check for
cardHandpos ( input int )		   the number of cards already in hand
score ( input int )                the current score of the player
Pre-condition:
The player has just recently been given/drawn the card.*/

void checkSet ( string cardHand[], int rank, int& cardHandpos, int& score )   // checks a player's hand for a set
{
	int counter = 0;
	int k = 0; 
	int stringStore[32]; // creates new array
	switch ( rank ) {
	case 2:	
		for ( int i = 0; i < 32; i++ ) // searches for any of that card rank that was just picked
			if ( cardHand[i] == "Two of Hearts" || cardHand[i] == "Two of Spades" || cardHand[i] == "Two of Diamonds" || cardHand[i] == "Two of Clubs" )
			{			
				stringStore[k] = i; // stores the number of them and where they are located
				counter++; // keeps adding to find the exact amount
				k = k + 1; 
			}

			break; // end this case
	case 3: 
		for ( int i = 0; i < 32; i++ )
			if ( cardHand[i] == "Three of Hearts" || cardHand[i] == "Three of Spades" || cardHand[i] == "Three of Diamonds" || cardHand[i] == "Three of Clubs" )
			{
				stringStore[k] = i;
				counter++;
				k = k + 1; 

			}

			break;
	case 4: 
		for ( int i = 0; i < 32; i++ )
			if ( cardHand[i] == "Four of Hearts" || cardHand[i] == "Four of Spades" || cardHand[i] == "Four of Diamonds" || cardHand[i] == "Four of Clubs" )
			{
				stringStore[k] = i;
				counter++;
				k = k + 1; 

			}

			break;
	case 5:	
		for ( int i = 0; i < 32; i++ )
			if ( cardHand[i] == "Five of Hearts" || cardHand[i] == "Five of Spades" || cardHand[i] == "Five of Diamonds" || cardHand[i] == "Five of Clubs" )
			{
				stringStore[k] = i;
				counter++;
				k = k + 1; 

			}

			break;
	case 6: 
		for ( int i = 0; i < 32; i++ )
			if ( cardHand[i] == "Six of Hearts" || cardHand[i] == "Six of Spades" || cardHand[i] == "Six of Diamonds" || cardHand[i] == "Six of Clubs" )
			{
				stringStore[k] = i;
				counter++;
				k = k + 1; 

			}

			break;
	case 7:	
		for ( int i = 0; i < 32; i++ )
			if ( cardHand[i] == "Seven of Hearts" || cardHand[i] == "Seven of Spades" || cardHand[i] == "Seven of Diamonds" || cardHand[i] == "Seven of Clubs" )
			{
				stringStore[k] = i;
				counter++;
				k = k + 1; 

			}

			break;
	case 8: 
		for ( int i = 0; i < 32; i++ )
			if ( cardHand[i] == "Eight of Hearts" || cardHand[i] == "Eight of Spades" || cardHand[i] == "Eight of Diamonds" || cardHand[i] == "Eight of Clubs" )
			{
				stringStore[k] = i;
				counter++;
				k = k + 1; 

			}

			break;
	case 9: 
		for ( int i = 0; i < 32; i++ )
			if ( cardHand[i] == "Nine of Hearts" || cardHand[i] == "Nine of Spades" || cardHand[i] == "Nine of Diamonds" || cardHand[i] == "Nine of Clubs" )
			{
				stringStore[k] = i;
				counter++;
				k = k + 1; 

			}

			break; 
	}

	if ( counter == 4 ) // if there turns out to be 4 cards
	{
		cardHand[stringStore[0]] = cardHand[cardHandpos - 1]; // replace each of those cards in the set with a value in the back of the array 
		cardHand[stringStore[1]] = cardHand[cardHandpos - 2];
		cardHand[stringStore[2]] = cardHand[cardHandpos - 3];
		cardHand[stringStore[3]] = cardHand[cardHandpos - 4];
		cardHandpos = cardHandpos - 4; // subtract 4 from the hand position
		score = score + 1; // add a score
		cout << "Completed a set!" << endl;
		cout << "Score is now " << score << endl; 
	}


}

/* drawCard:
Draws a random card from the ocean.
Parameters:
cardHand ( modified char string )   the hand to draw a card for
number                              current number of cards in hand
ocean							    deck of cards to draw from
oceanPos							number of cards left in ocean*/
string drawCard ( string cardHand[], int &number, string ocean[], int &oceanPos )   // draws a card from the ocean
{
	cardHand[number] = ocean[oceanPos]; // draws a card

	string zero; 
	ocean[oceanPos] = zero; 
	number = number + 1; // adds to the number of cards
	oceanPos = oceanPos + 1; 

	return cardHand[number]; // returns whatever card it was

}

/* goFish:
Plays the general gist of the game.
Parameters:
none!
Calls:
shuffleDeck, createDeck, checkSet, drawCard, countCard, tradeCard*/

void goFish ()    // plays the game
{
	string deck[32]; 
	createDeck ( deck ); 
	shuffleDeck ( deck ); 
	string zero; 
	string playerHand[32]; // initializing strings
	string computerHand[32];
	int pcardsPos = 0; // initializes the number of cards in each hand
	int ccardsPos = 0;
	int oceanPos = 0; 
	int playerScore = 0;
	int compScore = 0; 

	for ( int n = 0; n < 5; n++ ) // drawing 5 initial cards
	{
		drawCard(playerHand,pcardsPos,deck,oceanPos);

	}

	for ( int f = 0; f < 5; f++ ) // drawing 5 initial cards
	{
		drawCard(computerHand,ccardsPos,deck,oceanPos);
	}

	cout << "You have: "; 

	for ( int j = 0; j < 5; j++ )
	{
		cout << playerHand[j] << " "; // prints whatever cards that were drawn
	}
	bool play3 = true; 
	bool retry = true; 
	bool play = true;
	bool play2 = true; 
	while ( play == true ) // loop so that the game may keep running until it runs out of cards
	{
		switch ( retry ) { // switch statement for whose turn it is
		case true:
			while ( play2 == true ) // your turn
			{
				cout << "\nYou ask if I have any ..."; // asking the user which card he wants to guess
				int input;
				cin >> input; 
				int counter = countCard ( computerHand, input ); // count the number of that card

				if ( counter == 0 ) // if there are 0 of that card
				{
					cout << "No, I don't! Go Fish!" << endl; 
					string cardDrawn = drawCard(playerHand,pcardsPos,deck,oceanPos); // draw card from ocean
					if ( pcardsPos >= 33 || oceanPos >= 33 ) // if position reaches end of array, end game
					{
						break;
					}
					cout << "You draw a " << playerHand[pcardsPos - 1] << " " << endl; // states what he drew
					cout << "My turn! " << endl; 
					break;  
				}
				if ( counter > 0 ) // if there is more than 1 card of that input
				{
					cout << "Yes, I do. I have " << counter << endl; 
					tradeCard(playerHand,computerHand,input,pcardsPos,ccardsPos); // trade whatever card it is with the other player
					checkSet(playerHand,input,pcardsPos,playerScore); // check for a possible set
					cout << "You have: ";
					for ( int i = 0; i < pcardsPos; i++ )
						cout << playerHand[i] << " "; // states whatever cards he has now
				} 	
				continue; 
			}

		case false: // for the computer's turn

			bool round = true;
			while ( round == true )
			{
				if ( pcardsPos >= 33 || oceanPos >= 33 || ccardsPos >= 33 ) // if the number of cards reaches over the limit
				{
					break;
				}
				int i = 2 + rand() % 8; // picks random number for his guess
				cout << "I ask: Do you have any " << i << "'s?" << endl; 
				int counter = countCard ( playerHand, i ); // counts how many there is of that card

				if ( counter == 0 ) // if there are 0 of that card
				{
					cout << "No, you don't! I Go Fish!" << endl; 
					string cardDrawn = drawCard(computerHand,ccardsPos,deck,oceanPos); // draw a card from ocean
					if ( pcardsPos >= 33 || oceanPos >= 33 || ccardsPos >= 33 ) // if it reaches over limit, end game
					{
						break;
					}
					cout << "Your turn! " << endl; 
					round = false; 

				}
				if ( counter > 0 ) // if there is more than 0 of that card
				{
					cout << "Yes, you do. You have " << counter << endl; 
					tradeCard(computerHand,playerHand,i,ccardsPos,pcardsPos); // trade whatever card it is
					checkSet(computerHand,i,ccardsPos,compScore); // check for a possible set

				} 	

			}

			if ( pcardsPos >= 33 || oceanPos >= 33 || ccardsPos >= 33 ) // if it reaches over limit, end game
			{
				break;
			}
		}
		if ( pcardsPos >= 33 || oceanPos >= 33 || ccardsPos >= 33 ) // if it reaches over limit, end game
		{
			break;
		}

	}
}


/* main:
Simply governs the overall behavior of the program.
Parameters:
none!
Calls:
goFish*/

int main ()    // governs overall behavior
{
	cout << "Welcome to the game Go Fish! You will start with 5 cards and then the objective is to take my cards, by guessing, and to complete as many sets as possible. Have fun!\n" << endl; 
	// beginning intro sentence
	bool play = true; // initializing bool
	char reply; 

	while ( play == true ) // loop to keep playing
	{
		goFish();
		cout << "Would you like to play again? (Y/N) " << endl; // asking user if he/she wants to try again
		cin >> reply; 

		if ( reply == 'n' || reply == 'N' ) // if statements for both answers
		{
			play = false; 
		}
		else
		{
			play = true;
		}
	}

	return 0; // end the program 
}




