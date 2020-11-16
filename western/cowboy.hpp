//  ----------------------------------------------------------------------------
//  Header file for the Cowboy class.                                 cowboy.hpp
//  Created by Ferhat Erata <ferhat.erata@yale.edu> on November 15, 2020.
//  Copyright (c) 2020 Yale University. All rights reserved.
// -----------------------------------------------------------------------------

#ifndef CPP_CODING_STANDARD_COWBOY_HPP
#define CPP_CODING_STANDARD_COWBOY_HPP

#include <string>

namespace western {

class Cowboy {
 private:
  const std::string Name;  // const properties initialized in ctor
  int Age{};               // others not initialized to be initialized
  int GunCount;            // class properties capitalized

  void makeBang(const int& howMany);  // methods begins small

 public:
  explicit Cowboy(std::string name, int gunCount = 1);
  ~Cowboy();

  void shoot(western::Cowboy* who);

  [[maybe_unused]] int age() const { return Age; }   // getter style
  [[maybe_unused]] void age(int age) { Age = age; }  // setter style

  std::string name() const { return Name; }  // all getters are mostly const
};

}  // namespace western

#endif  // CPP_CODING_STANDARD_COWBOY_HPP
