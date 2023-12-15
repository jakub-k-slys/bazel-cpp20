#include <boost/ut.hpp>
#include <cassert>

using namespace boost::ut;

suite errors = [] {
  "exception"_test = [] { expect(throws([] { throw 0; })) << "throws any exception"; };

  "failure"_test = [] { expect(aborts([] { assert(false); })); };
};