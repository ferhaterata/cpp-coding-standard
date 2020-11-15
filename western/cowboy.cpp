//  ----------------------------------------------------------------------------
//  Implementation file for the Cowboy class.                         cowboy.cpp
//  Created by Ferhat Erata <ferhat.erata@yale.edu> on November 15, 2020.
//  Copyright (c) 2020 Yale University. All rights reserved.
// -----------------------------------------------------------------------------

#include "cowboy.hpp"

#include <iostream>
#include <utility>

// -----------------------------------------------------------------------------
western::Cowboy::Cowboy(std::string name, int gunCount)
    : Name(std::move(name)), Age(45), GunCount(gunCount) {
  // And this is the longest inline comment you have every seen. Lorem
  // Ipsum. Bacon! Cheese. Bread. Beer. Fish. Mobile fridge. More random
  // words come here...
  std::cout << Name << std::endl;
}

// -----------------------------------------------------------------------------
western::Cowboy::~Cowboy() { std::cout << "RIP" << std::endl; }

// -----------------------------------------------------------------------------
// A aging ~ shooting relationship of a Cowboy
void western::Cowboy::shoot(western::Cowboy* who) {
  Age++;
  int someNumber = 5 + 7 * 3;
  makeBang(someNumber);
  if (someNumber > 10) {
    return;
  }
  switch (Age) {
    case 45:
      Age--;
      break;
    default:
      Age++;
  }
}

// -----------------------------------------------------------------------------
// please add this separator and add some comments
void western::Cowboy::makeBang(const int& howMany) {
  for (int i = 0; i < howMany; ++i) std::cout << "Bang!" << std::endl;
}

// -----------------------------------------------------------------------------
// description of the following method goes here
void someVeryLongMethod(int param1, int param2, int param3, int param4,
                        int param5, int param6, int param7, int param8,
                        int param9, int param10) {
  std::cout << "So long..." << std::endl;
}
