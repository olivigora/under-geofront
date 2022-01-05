#include <iostream>

void PrintIntroduction()
{
    std::cout << "       0000             0000        7777777777777777/========_____________________\n";
    std::cout << "     00000000         00000000      7777^^^^^^^7777/ || ||   _________________\n";
    std::cout << "    000    000       000    000     777       7777/=========//\n";
    std::cout << "   000      000     000      000             7777// ((     //\n";
    std::cout << "  0000      0000   0000      0000           7777//   \   //\n";
    std::cout << "  0000      0000   0000      0000          7777//========//\n";
    std::cout << "  0000      0000   0000      0000         7777\n";
    std::cout << "  0000      0000   0000      0000        7777\n";
    std::cout << "   000      000     000      000        7777\n";
    std::cout << "    000    000       000    000       77777\n";
    std::cout << "     00000000         00000000       7777777\n";
    std::cout << "       0000             0000        777777777\n";
}


void PlayGame()
{
    //Print welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    //Store player guesses
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nACCESS GRANTED";
    }
    else
    {
        std::cout << "\nACCESS DENIED.\nSECURITY HAS BEEN NOTIFIED.\nPLEASE WAIT.";
    }
}

int main()
{
    PrintIntroduction();
    PlayGame();
    return 0;
}





