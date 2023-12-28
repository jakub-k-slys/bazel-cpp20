#include <iostream>

#include "number_generator.h"
#include "word_generator.h"

int main(int argc, char* argv[]) {
  const auto word_generator = sandbox::create_word_generator();
  std::cout << word_generator->next() << std::endl;
  const auto number_generator = sandbox::create_number_generator();
  std::cout << number_generator->next() << std::endl;
  return 0;
}