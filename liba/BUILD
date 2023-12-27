load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "liba",
    hdrs = glob(["include/*.h"]),
    srcs = glob(["src/*.cc"]),
    visibility = [
        "//main:__pkg__",
    ],
    includes = ["include"]
)

cc_test(
    name = "test",
    srcs = glob(["test/*.cc"]),
    deps = [
        "//liba:liba",
        "@com_github_boost_ext_ut//:unittest",
        "@com_github_eranpeer_fakeit//:fakeit",
    ]
)

cc_test(
    name = "benchmark",
    srcs = glob(["benchmark/*.cc"]),
    deps = [
        "//liba:liba"
    ]
)