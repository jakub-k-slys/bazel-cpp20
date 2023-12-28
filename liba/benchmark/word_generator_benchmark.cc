#include <nanobench.h>

#include <boost/ut.hpp>

#include "word_generator.h"

namespace sandbox {
using namespace boost::ut;

suite hello_world_benchmark = [] {
  "hello"_test = [] {
    auto generator = sandbox::create_word_generator();

    ankerl::nanobench::Bench().run("on next", [&] { generator->next(); });
  };
};
}  // namespace sandbox