#include "word_generator.h"

#include <boost/ut.hpp>

namespace sandbox {
using namespace boost::ut;

suite hello_world_test = [] {
  "hello"_test = [] {
    auto generator = sandbox::create_word_generator();
    expect(eq(generator->next(), std::string_view{"Hello, world!"}));
  };
};
}  // namespace sandbox