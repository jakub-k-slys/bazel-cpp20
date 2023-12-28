#pragma once

#include <memory>

namespace sandbox {

struct number_generator {
  virtual ~number_generator() = default;

  virtual unsigned int next() const = 0;
};

std::unique_ptr<number_generator> create_number_generator();
};  // namespace sandbox