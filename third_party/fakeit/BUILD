load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "libfakeit",
    hdrs = glob([
        "include/fakeit/*.hpp",
        "include/mockutils/*.hpp",
    ]),
    includes = ["include"],
)

cc_library(
    name = "fakeit",
    visibility = ["//visibility:public"],
    deps = [
        "libfakeit",
        "@//third_party/empty_main:empty_main",
    ],
)
