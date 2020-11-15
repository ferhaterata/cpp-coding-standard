//  ----------------------------------------------------------------------------
//  Main class.                                                         main.cpp
//  Created by Ferhat Erata <ferhat.erata@yale.edu> on November 15, 2020.
//  Copyright (c) 2020 Yale University. All rights reserved.
// -----------------------------------------------------------------------------

#include "western/cowboy.hpp"

int main() {
  western::Cowboy Amy{"Amy"};             // significant objects capitalized.
  western::Cowboy Angus("Angus", 2);      // same
  western::Cowboy* currentCowboy = &Amy;  // pointers and other minors not
  Amy.shoot(currentCowboy);
  return 0;
}