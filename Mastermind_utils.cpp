#include "mastermind_utils.hpp"

void mastermindMenu()
{
    bool activateLoop = true;

    while(activateLoop)
    {
        int choice;

        std::cout << "+============================================+\n"
                  << "|      Here to test your mental prowess?     |\n"
                  << "|  You've come to the right place, specimen! |\n"
                  << "|--------------------------------------------|\n"
                  << "|           Welcome to Mastermind!           |\n"
                  << "|--------------------------------------------|\n"
                  << "| ~=~=~=~=~=~ Select an option... ~=~=~=~=~= |\n"
                  << "|             (1) Play the game!             |\n"
                  << "|             (2) Read the rules!            |\n"
                  << "|             (3) Scoreboard!                |\n"
                  << "|             (4) Quit...                    |\n"
                  << "+============================================+\n\n"
                  << "Please input your choice: ";

        menuChoice(activateLoop);
    }
}

void menuChoice(bool &activateLoop)
{
    int menuChoice;

    while(true)
    {
        std::cout << "Specimen, input your desired value: ";
        std::cin >> menuChoice;
        clearInputStream();

        if(menuChoice == 1)
        {
            openGame();
            break;
        }
        else if(menuChoice == 2)
        {
            openRules();
            break;
        }
        else if(menuChoice == 3)
        {
            openScoreboard();
            break;
        }
        else if(menuChoice == 4)
        {
            closeProg(activateLoop);
            break;
        }
        else
        {
            std::cout << "Young specimen, do we need to send you back to the facility? Inputting the right value is no test...\n";
        }
    }
}

void openGame()
{
    int attemptCount = 1;
    int guess, answer;
    int tens = 1000;

    srand(time(NULL));

    while(answer < 1000)
    {
        answer = rand() % 10000;
    }
    std::cout << answer << " answer\n";
    int ansArray [4];

    for(int i = 0; i < 4; i++)
    {
        answer %= 1000;
        ansArray[i] = answer;
        std::cout << ansArray[i] << std::endl;
    }

    std::cout << "Brave are we? Fine. Let us begin..\n";

    while(true)
    {
        std::cout << "         ____________________________________________       \n"
                  << "       _____________________________________________  |     \n"
                  << "     _____________________________________________  | |     \n"
                  << "    |     {*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*}     | | |     \n"
                  << "    |   ~    _    _     __   ___  _____  __  ~   <  | |     \n"
                  << "     >*   * / \\  / \\ * /_ \\ *\\_ *   |  *|__*   *  | | | \n"
                  << "    |~    */   \\/   \\*/    \\*__/*   |  *|__*     ~| | |  \n"
                  << "     >      __    _    _   _____  ___   __        | | |     \n"
                  << "    |     *|__/* / \\  / \\ *  |  *|   |*|  \\*     <  | |  \n"
                  << "     >    *|  \\*/   \\/   \\*__|__*|   |*|__/*      | | |  \n"
                  << "    |                                            <  | |     \n"
                  << "     >              \\      |      /               | | |     \n"
                  << "    |       !         _ _ _ _ _ _         !      <  | |     \n"
                  << "     >             -     /   \\     -              | | |     \n"
                  << "    |         ~ ~ -     |  *  |      - ~ ~       <  | |     \n"
                  << "     >             -  _ _\\__ /_ _ _ -             | | |     \n"
                  << "    |                                            <  | |     \n"
                  << "    |              Attempt number " << attemptCount << "...            | | |     \n"
                  << "     >-------------------------------------------<  | |     \n"
                  << "    |                                             | | |     \n"
                  << "     >              ENTER THE CODE:              <  | |     \n"
                  << "    |                   | | | |                   | | |     \n"
                  << "     >                  v v v v                  <  | |     \n"
                  << "    |                   ";
        if(!(std::cin  >> guess))
        {
            clearInputStream();
            pressAnyKeyToContinue();
            continue;
        }
        std::cout << "     >                                            | /       \n"
                  << "    |_^___^___^___^___^___^___^___^___^___^___^___|         \n";

        pressAnyKeyToContinue();


    }
}

void openRules()
{

}

void openScoreboard()
{

}

bool closeProg(bool &activateLoop)
{
    return activateLoop == false;
}

void pressAnyKeyToContinue()
{
    std::cout << "\nPlease press any key to continue!" << std::endl;
    getch();
    std::cout << std::endl;
}

void clearInputStream()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void clearScreen()
{
    system("cls");
}