load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "lib",
    srcs = glob(["src/*.cc"]),
    hdrs = glob(["include/*.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "test",
    srcs = glob(["test/*.cc"]),
    deps = [
        ":lib",
        "@com_github_boost_ext_ut//:unittest",
        "@com_github_eranpeer_fakeit//:fakeit",
    ],
)

cc_test(
    name = "benchmark",
    srcs = glob(["benchmark/*.cc"]),
    deps = [
        ":lib",
        "//third_party/nanobench",
        "@com_github_boost_ext_ut//:unittest",
    ],
)
