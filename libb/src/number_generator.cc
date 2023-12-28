#include "number_generator.h"

namespace sandbox {
namespace {

class int_number_generator : public number_generator {
public:
  virtual ~int_number_generator() = default;
  virtual unsigned int next() const { return 666; }
};
}  // namespace

std::unique_ptr<number_generator> create_number_generator() {
  return std::make_unique<int_number_generator>();
};
}  // namespace sandbox