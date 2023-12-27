load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "libunittest",
    hdrs = [
        "include/boost/ut.hpp",
    ],
    includes = ["include"],
)

cc_library(
    name = "unittest",
    visibility = ["//visibility:public"],
    deps = [
        "libunittest",
        "@//misc/empty_main:empty_main",
    ],
)
