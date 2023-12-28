load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "fakeit",
    hdrs = glob([
        "single_header/standalone/*.hpp",
    ]),
    includes = ["single_header/standalone"],
    visibility = ["//visibility:public"],
)
