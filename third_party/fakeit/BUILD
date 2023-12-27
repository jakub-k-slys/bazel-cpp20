load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "fakeit",
    hdrs = glob([
        "include/fakeit/*.hpp",
        "include/mockutils/*.hpp",
    ]),
    includes = ["include"],
    visibility = ["//visibility:public"],
)