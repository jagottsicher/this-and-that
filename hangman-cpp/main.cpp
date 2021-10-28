#include <iostream>
#include <cstring>
#include <cctype>
#include <stdlib.h>

// #include <ncurses.h>

using namespace std;

const int IGNORE_CHARS = 256;
const char * INPUT_ERROR_STRING = "Input error. Please try again.";
const char * USABLE_LETTERS = "AEIOU BCDFGHJKLMNPQRSTVW";

char * optr_lettersNotUsed = new char[28];




void PlayGame();
bool WantToPlayAgain();
int GetSecretPhrase(char secretPhrase[], int maxLength);
char * MakeHiddenPhrase(const char * secretPhrase, int secretPhraseLength);
void DrawBoard(int numberOfGuessesLeft, const char * noptr_hiddenPhrase);

char GetGuess();
void UpdateBoard(char guess, char * noptr_hiddenPhrase, const char secretPhrase[], int secretPhraseLength, int & numberOfGuessesLeft);
bool IsGameOver(int numberOfGuessesLeft, const char * noptr_hiddenPhrase, int secretPhraseLength);
void DisplayResult(const char * secretPhrase, int numberOfGuessesLeft);

char GetCharacter(const char* prompt, const char* error);
char GetCharacter(const char* prompt, const char* error, const char validInput[], int validInputLength);


int main()
{

	do {

		PlayGame();

	}while (WantToPlayAgain());

    return 0;
}

void PlayGame() {

	const int MAX_LENGTH_OF_SECRET_PHRASE = 256;
	const int MAX_NUMBER_OF_GUESSES = 10;

	char secretPhrase[MAX_LENGTH_OF_SECRET_PHRASE];
	char * optr_hiddenPhrase = nullptr;

	int numberOfGuessesLeft = MAX_NUMBER_OF_GUESSES;
	int secretPhraseLength = GetSecretPhrase(secretPhrase, MAX_LENGTH_OF_SECRET_PHRASE);

	optr_hiddenPhrase = MakeHiddenPhrase(secretPhrase, secretPhraseLength);

	for (int i = 0; i < 28; i++) {
		optr_lettersNotUsed[i] = USABLE_LETTERS[i];
	}

	DrawBoard(numberOfGuessesLeft, optr_hiddenPhrase);

	char guess;


	do {

		guess = GetGuess();

		UpdateBoard(guess, optr_hiddenPhrase,secretPhrase, secretPhraseLength, numberOfGuessesLeft);

		DrawBoard(numberOfGuessesLeft, optr_hiddenPhrase);

	} while (!IsGameOver(numberOfGuessesLeft, optr_hiddenPhrase, secretPhraseLength));

	DisplayResult(secretPhrase, numberOfGuessesLeft);

	delete [] optr_hiddenPhrase;
	delete [] optr_lettersNotUsed;


}

char GetGuess() {
	return GetCharacter("Please type your guess: ", INPUT_ERROR_STRING);
}

void UpdateBoard(char guess, char * noptr_hiddenPhrase, const char secretPhrase[], int secretPhraseLength, int & numberOfGuessesLeft) {

	bool found = false;

	for (int i = 0; i < secretPhraseLength; i++) {
		if (tolower(secretPhrase[i]) == guess) {
			noptr_hiddenPhrase[i] = secretPhrase[i];
			found = true;
		}
	}

	for (int i = 0; i < 28; i++) {
		if (toupper(guess) == optr_lettersNotUsed[i]) {
			optr_lettersNotUsed[i] = ' ';
		}
	}

	if (!found) {
		numberOfGuessesLeft--;
	}
}

bool IsGameOver(int numberOfGuessesLeft, const char * noptr_hiddenPhrase, int secretPhraseLength) {

	bool hasUnderscore = false;

	for(int i = 0; i < secretPhraseLength; i++) {
		if (noptr_hiddenPhrase[i] == '_') {
			hasUnderscore = true;
			break;
		}
	}

	return numberOfGuessesLeft == 0 || !hasUnderscore;
}

void DisplayResult(const char * secretPhrase, int numberOfGuessesLeft) {

	if(numberOfGuessesLeft > 0 ) {
		cout << endl << "*** YOU WON! ***" << endl;
	} else {
		cout << endl << "You lost." << endl;
	}
	cout << "The secret phrase was: \"" << secretPhrase << "\"." << endl;
}


int GetSecretPhrase(char secretPhrase[], int maxLength) {

	bool failure;
	int length;

	do {
		failure = false;
		cout << "Please enter a secret phrase not longer than " << maxLength << " characters!" << endl;
		cin.get(secretPhrase, maxLength);

		if (cin.fail()) {
			cin.clear();
			cin.ignore(IGNORE_CHARS, '\n');
			cout << INPUT_ERROR_STRING << endl;
			failure = true;
		} else {
			length = strlen(secretPhrase);
			if (length == 0) {
				cout << "Input Error. The secret phrase cannot be empty. Please try again!" << endl;
				failure = true;
			}
		}
	}while(failure);
return length;
}

char * MakeHiddenPhrase(const char* secretPhrase, int secretPhraseLength) {

	char * hiddenPhrase = new char[secretPhraseLength + 1];

	for (int i = 0; i < secretPhraseLength; i++){
		if(secretPhrase[i] != ' ' ) {
			hiddenPhrase[i] = '_';
		} else {
			hiddenPhrase[i] = ' ';
		}
	}
	hiddenPhrase[secretPhraseLength] = '\0';

	return hiddenPhrase;
}

void DrawBoard(int numberOfGuessesLeft, const char * noptr_hiddenPhrase){

	std::system("clear");

	switch(numberOfGuessesLeft){

		case 0:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /x x\\" << endl;
			cout << " |  \\ u /" << endl;
			cout << " |   /|\\" << endl;
			cout << " |    |" << endl;
			cout << " |   / \\" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 1:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /o o\\" << endl;
			cout << " |  \\ - /" << endl;
			cout << " |   /|\\" << endl;
			cout << " |    |" << endl;
			cout << " |   / \\" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 2:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\ - /" << endl;
			cout << " |   /|\\" << endl;
			cout << " |    |" << endl;
			cout << " |   / \\" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 3:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\   /" << endl;
			cout << " |   /|\\" << endl;
			cout << " |    |" << endl;
			cout << " |   / \\" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 4:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\   /" << endl;
			cout << " |   /|\\" << endl;
			cout << " |    |" << endl;
			cout << " |   /" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 5:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\   /" << endl;
			cout << " |   /|\\" << endl;
			cout << " |    |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 6:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\   /" << endl;
			cout << " |   /|\\" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 7:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\   /" << endl;
			cout << " |   /|" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 8:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\   /" << endl;
			cout << " |   /" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 9:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |   _|_" << endl;
			cout << " |  /   \\" << endl;
			cout << " |  \\   /" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		case 10:
		{
			cout << " +----+" << endl;
			cout << " |    |" << endl;
			cout << " |    |" << endl;
			cout << " |    O" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << " |" << endl;
			cout << "_|_" << endl << endl;
		}
		break;
		default:
			break;
	}

	cout << "Secret Phrase: " << noptr_hiddenPhrase << endl << "Wrong guesses left: " << numberOfGuessesLeft << endl << "Choose from: "<< optr_lettersNotUsed << endl;
}

char GetCharacter(const char* prompt, const char* error)
{
    char input;
    bool inputFailure;

    do {

        inputFailure = false;
        std::cout << prompt;

        std::cin >> input;

        if (std::cin.fail())
        {
            std::cin.ignore(256, '\n');
            std::cin.clear();
            std::cout<<error<<std::endl;
            inputFailure = true;
        }
        else
        {
            std::cin.ignore(256, '\n');
            if (std::isalpha(input))
	    {
		input = std::tolower(input);
	    }
	    else
	    {
		 std::cout<<error<<std::endl;
                inputFailure = true;
	    }
        }

    } while (inputFailure);
    return input;
}

char GetCharacter(const char* prompt, const char* error, const char validInput[], int validInputLength)
{
    char input;
    bool inputFailure = false;

    do {

        std::cout << prompt;
		std::cin >> input;

        if (std::cin.fail())
        {
            std::cin.ignore(256, '\n');
            std::cin.clear();
            std::cout<<error<<std::endl;
            inputFailure = true;
        }
        else
        {
            std::cin.ignore(256, '\n');

            input = std::tolower(input);

            for (int i = 0; i < validInputLength; ++i)
            {
                if (input == validInput[i])
                {
                    return input;
                }
            }

            std::cout<<error<<std::endl;
            inputFailure = true;
        }

    } while (inputFailure);

    return ' ';
}


bool WantToPlayAgain() {

	const char ValidInputs[] = {'y','n'};
	char response = GetCharacter("Do you want to play again? (y/n) ", INPUT_ERROR_STRING,ValidInputs,2);
	return response == 'y';

};

