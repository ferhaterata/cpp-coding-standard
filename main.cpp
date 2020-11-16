//  ----------------------------------------------------------------------------
//  Main class.                                                         main.cpp
//  Created by Ferhat Erata <ferhat.erata@yale.edu> on November 15, 2020.
//  Copyright (c) 2020 Yale University. All rights reserved.
// -----------------------------------------------------------------------------

#include "western/cowboy.hpp"

using Cow_Girl = western::Cowboy;
using Cow_Boy = western::Cowboy;

int main() {
  Cow_Girl Amy{"Amy"};                      // significant objects capitalized.
  Cow_Boy Angus("Angus", 2);                // same
  western::Cowboy* currentCowboy = &Angus;  // pointers and other minors not
  Amy.shoot(currentCowboy);
  return 0;
}