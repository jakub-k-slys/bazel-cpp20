load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "toolchains_llvm",
    canonical_id = "0.10.3",
    sha256 = "b7cd301ef7b0ece28d20d3e778697a5e3b81828393150bed04838c0c52963a01",
    strip_prefix = "toolchains_llvm-0.10.3",
    url = "https://github.com/grailbio/bazel-toolchain/releases/download/0.10.3/toolchains_llvm-0.10.3.tar.gz",
)

load("@toolchains_llvm//toolchain:deps.bzl", "bazel_toolchain_dependencies")

bazel_toolchain_dependencies()

load("@toolchains_llvm//toolchain:rules.bzl", "llvm_toolchain")

llvm_toolchain(
    name = "llvm_toolchain",
    llvm_version = "16.0.0",
)

load("@llvm_toolchain//:toolchains.bzl", "llvm_register_toolchains")

llvm_register_toolchains()

git_repository(
    name = "com_google_absl",
    branch = "master",
    remote = "https://github.com/abseil/abseil-cpp",
)

http_archive(
    name = "com_googlesource_code_re2",
    sha256 = "906d0df8ff48f8d3a00a808827f009a840190f404559f649cb8e4d7143255ef9",
    strip_prefix = "re2-a276a8c738735a0fe45a6ee590fe2df69bcf4502",
    urls = ["https://github.com/google/re2/archive/a276a8c738735a0fe45a6ee590fe2df69bcf4502.zip"],  # 2022-04-08
)

git_repository(
    name = "bazel_skylib",
    remote = "https://github.com/bazelbuild/bazel-skylib",
    tag = "1.2.1",  # Latest as of 2022-05-01
)

git_repository(
    name = "com_github_boost_ext_ut",
    build_file = "//third_party/unittest:BUILD",
    remote = "https://github.com/boost-ext/ut",
    tag = "v2.0.1",
)

git_repository(
    name = "com_github_eranpeer_fakeit",
    build_file = "//third_party/fakeit:BUILD",
    remote = "https://github.com/eranpeer/FakeIt",
    tag = "2.4.0",
)

git_repository(
    name = "com_github_martinus_nanobench",
    build_file = "//third_party/nanobench/nanobench_impl:BUILD",
    remote = "https://github.com/martinus/nanobench",
    tag = "v4.3.11",
)
