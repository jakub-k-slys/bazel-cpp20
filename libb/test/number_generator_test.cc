#include "number_generator.h"

#include <boost/ut.hpp>

namespace sandbox {
using namespace boost::ut;

suite int_number_test = [] {
  "666"_test = [] {
    auto generator = sandbox::create_number_generator();
    expect(eq(generator->next(), 666));
  };
};
}  // namespace sandbox