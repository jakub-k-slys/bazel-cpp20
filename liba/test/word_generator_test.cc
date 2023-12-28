#include "word_generator.h"

#include <boost/ut.hpp>
#include <fakeit.hpp>
#include <string>

namespace sandbox {
using namespace boost::ut;
using namespace fakeit;

struct SomeInterface {
  virtual int foo(int) = 0;
  virtual int bar(std::string) = 0;
};

suite hello_world_test = [] {
  "hello"_test = [] {
    auto generator = sandbox::create_word_generator();
    expect(eq(generator->next(), std::string_view{"Hello, world!"}));
  };

  "mock"_test = [] {
    Mock<SomeInterface> mock;
    When(Method(mock, foo)).Return(1);
    SomeInterface& i = mock.get();
    expect(eq(i.foo(0), 1));
  };
};
}  // namespace sandbox