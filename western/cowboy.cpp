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
  int SomeNumber = 5 + 7 * 3;
  makeBang(SomeNumber);
  if (SomeNumber > 10) {
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
void western::Cowboy::makeBang(const int& HowMany) {
  for (int i = 0; i < HowMany; ++i) std::cout << "Bang!" << std::endl;
}

// -----------------------------------------------------------------------------
void someVeryLongMethod(int param1, int param2, int param3, int param4,
                        int param5, int param6, int param7, int param8,
                        int param9, int param10) {
  std::cout << "So long..." << std::endl;
}
