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
  const std::string Name;
  int Age{};
  [[maybe_unused]] int GunCount;

  void makeBang(const int& howMany);

 public:
  explicit Cowboy(std::string name, int gunCount = 1);
  ~Cowboy();

  void shoot(western::Cowboy* who);

  [[nodiscard]] int age() const { return Age; }
  [[nodiscard]] std::string name() const { return Name; }
  void age(int age) { Age = age; }
};

}  // namespace western

#endif  // CPP_CODING_STANDARD_COWBOY_HPP
