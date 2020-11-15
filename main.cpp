//  ----------------------------------------------------------------------------
//  Header file for the main class.        main.cpp
//  Created by Ferhat Erata <ferhat.erata@yale.edu> on November 15, 2020.
//  Copyright (c) 2020 Yale University. All rights reserved.
// -----------------------------------------------------------------------------

#include "western/cowboy.hpp"

int main() {
  western::Cowboy amy{"Amy"};
  western::Cowboy angus("Angus", 2);
  western::Cowboy* currentCowboy = &amy;
  amy.shoot(currentCowboy);
  return 0;
}