# C++20 template with Bazel.build and clang
The template sets up a coding environment for C++20 language standard. It uses Bazel as the build system. Clang toolchain is downloaded automatically when running the first build. 

New lib can be easily added by copying curent lib and adding it as dependency to main module. Each lib is divided into:
* _include_ - where all the header files resides,
* _src_ - place where the actual implementation is,
* _test_ - unit tests,
* _benchmark_ - place for benchmarks.

The following template uses:
* [Bazel](https://bazel.build/) a fast, scalable, multi-language and extensible build system,
* [clang](https://clang.llvm.org/) provides a language front-end and tooling infrastructure for languages in the C language family,
* [UT/μT](https://github.com/boost-ext/ut) C++ single header/single module, macro-free μ(micro)/Unit Testing Framework,
* [nanobench](https://github.com/martinus/nanobench) Simple, fast, accurate single-header microbenchmarking functionality for C++11/14/17/20.

## Prerequisites
**Bazel** is prerequisite to compile the project.

## Building whole the project
```
bazel build //...
```
All other dependencies are downloaded on-demand.

## Running Tests
The repository includes (micro) Unit Testing Framework and nanobench. To run tests simply issue:
```
bazel test //...
```

## Devcontainer
The project contains devcontainer configuration and can be easily run on GitHub Codespaces
To use devcontainer, install the VSCode extension [Remote - Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers).