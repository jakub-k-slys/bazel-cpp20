# C++20 template with Bazel.build and clang 16.0.0
The template sets up a coding environment for C++20 language standard. It uses Bazel as the build system. Clang toolchain is downloaded automatically when running the first build. The template comes with (micro) Unit Testing Framework and nanobench. The project is divided into libs and main modules. New lib can be easily added by copying curent lib and adding it as dependency to main module. Each lib is didived into include, src, test and benchmark.

*Bazel* is prerequisite to compile the project.

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