# Bazel x86 Build Bug Example

This repository serves as an example to highlight a known issue when building for x86 with Bazel on MSVC using the C++ toolchain. Although the build is intended to target a 32-bit (x86) architecture, the produced binary still shows x64 headers when inspected with the `Dumpbin /headers` command. Notably, this discrepancy does not occur when building with CMake.

## Overview

- **Issue:** When specifying an x86 build using Bazel, the resulting binary is still compiled as x64. Running `Dumpbin /headers` on the binary confirms the x64 architecture.
- **Contrast:** Building the same project using CMake correctly produces a binary with x86 headers.
- **Environment:** This example is specific to the MSVC compiler and C++ toolchains on Windows.

This repository is linked as an example in discussions regarding Bazel repository issues related to architecture targeting.

## Building with Bazel

To build the project for x86 with Bazel on MSVC, use the following command from the root of this repository:

```shell
bazel build --config=windows_x86 //:calculator_lib
```
### Verify the architecture of the resulting binary:

```shell
dumpbin /headers bazel-bin/calculator_lib.dll
```

![image](https://github.com/user-attachments/assets/e89f3ba3-a835-4439-aee0-031954f14c71)


