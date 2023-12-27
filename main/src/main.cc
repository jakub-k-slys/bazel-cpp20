#include <iostream>

#include "word_generator.h"

int main(int argc, char* argv[]) {
  const auto&& generator = sandbox::create_generator();
  std::cout << generator->next() << std::endl;
  return 0;
}