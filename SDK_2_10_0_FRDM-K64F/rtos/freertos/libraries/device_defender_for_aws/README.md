# AWS IoT Device Defender Client Library

This repository contains the AWS IoT Device Defender client library for interacting
with the [AWS IoT Device Defender Service](https://aws.amazon.com/iot-device-defender/).
This library has no dependencies on any additional libraries other than the
standard C library, and therefore, can be used with any MQTT client library.
This library is distributed under the [MIT Open Source License](LICENSE).

This library has gone through code quality checks including verification that no
function has a [GNU Complexity](https://www.gnu.org/software/complexity/manual/complexity.html)
score over 8, and checks against deviations from mandatory rules in the
[MISRA coding standard](https://www.misra.org.uk/MISRAHome/MISRAC2012/tabid/196/Default.aspx).
Deviations from the MISRA C:2012 guidelines are documented under [MISRA Deviations](MISRA.md).
This library has also undergone static code analysis using [Coverity static analysis](https://scan.coverity.com/),
and validation of memory safety through the [CBMC automated reasoning tool](https://www.cprover.org/cbmc/).

See memory requirements for this library [here](https://docs.aws.amazon.com/embedded-csdk/202012.00/lib-ref/libraries/aws/device-defender-for-aws-iot-embedded-sdk/docs/doxygen/output/html/index.html#defender_memory_requirements).

## AWS IoT Device Defender Client Config File

The AWS IoT Device Defender Client Library exposes build configuration macros
that are required for building the library. A list of all the configurations and
their default values are defined in
[defender_config_defaults.h](source/include/defender_config_defaults.h).
To provide custom values for the configuration macros, a config file named
`defender_config.h` can be provided by the application to the library.

By default, a `defender_config.h` config file is required to build the library.
To disable this requirement and build the library with default configuration
values, provide `DEFENDER_DO_NOT_USE_CUSTOM_CONFIG` as a compile time
preprocessor macro.

**Thus, the Device Defender client library can be built by either**:
* Defining a `defender_config.h` file in the application, and adding it to the
include directories list of the library.

**OR**

* Defining the `DEFENDER_DO_NOT_USE_CUSTOM_CONFIG` preprocessor macro for the
library build.

## Building the Library

The [defenderFilePaths.cmake](defenderFilePaths.cmake) file contains the
information of all source files and the header include paths required to build
the Device Defender client library.

As mentioned in the previous section, either a custom config file
(i.e. `defender_config.h`) or `DEFENDER_DO_NOT_USE_CUSTOM_CONFIG` macro needs to
be provided to build the Device Defender client library.

For a CMake example of building the Device Defender client library with the
`defenderFilePaths.cmake` file, refer to the `coverity_analysis` library target
in [test/CMakeLists.txt](test/CMakeLists.txt) file.

## Building Unit Tests

### Platform Prerequisites

- For running unit tests:
    - **C90 compiler** like gcc.
    - **CMake 3.13.0 or later**.
    - **Ruby 2.0.0 or later** is additionally required for the CMock test framework (that we use).
- For running the coverage target, **gcov** and **lcov** are additionally required.

### Steps to build **Unit Tests**

1. Go to the root directory of this repository.

1. Run the *cmake* command: `cmake -S test -B build -DBUILD_CLONE_SUBMODULES=ON`.

1. Run this command to build the library and unit tests: `make -C build all`.

1. The generated test executables will be present in `build/bin/tests` folder.

1. Run `cd build && ctest` to execute all tests and view the test run summary.

## Reference examples

The AWS IoT Embedded C-SDK repository contains a demo showing the use of AWS IoT
Device Defender Client Library [here](https://github.com/aws/aws-iot-device-sdk-embedded-C/tree/main/demos/defender/defender_demo_json)
on a POSIX platform.

## Generating documentation

The Doxygen references were created using Doxygen version 1.8.20. To generate the
Doxygen pages, please run the following command from the root of this repository:

```shell
doxygen docs/doxygen/config.doxyfile
```

## Contributing

See [CONTRIBUTING.md](./.github/CONTRIBUTING.md) for information on contributing.
