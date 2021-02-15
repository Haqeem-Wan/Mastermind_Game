#ifndef MASTERMIND_UTILS_HPP
#define MASTERMIND_UTILS_HPP

#include <iostream>
#include <vector>
#include <limits>  
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

void mastermindMenu();

void menuChoice(bool &activateLoop);
void openGame();
void openRules();
void openScoreboard();

bool closeProg(bool &activateLoop);

void pressAnyKeyToContinue();
void clearInputStream();
void clearScreen();

#endif