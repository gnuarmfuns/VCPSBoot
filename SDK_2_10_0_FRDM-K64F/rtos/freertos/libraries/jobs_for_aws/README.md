## AWS IoT Jobs Client library
*(part of the AWS IoT Device SDK for Embedded C)*

AWS IoT Jobs is a service that notifies one or more connected devices of a
pending “Job”.  A Job can be used to manage your fleet of devices, update
firmware and security certificates on your devices, or perform administrative
tasks such as restarting devices and performing diagnostics. For documentation
of the service, please see the [AWS IoT Developer
Guide](https://docs.aws.amazon.com/iot/latest/developerguide/iot-jobs.html).
Interactions with the Jobs service use MQTT, a lightweight
publish-subscribe protocol.  This library provides a convenience API to
compose and recognize the MQTT topic strings used by the Jobs service.
The library is written in C compliant with ISO C90 and MISRA C:2012,
and is distributed under the [MIT Open Source License](LICENSE).

This library has gone through code quality checks
including verification that no function has a [GNU Complexity
](https://www.gnu.org/software/complexity/manual/complexity.html)
score over 8, and checks against deviations
from mandatory rules in the [MISRA coding standard
](https://www.misra.org.uk/MISRAHome/MISRAC2012/tabid/196/Default.aspx).
Deviations from the MISRA C:2012 guidelines are documented under [MISRA
Deviations](MISRA.md). This library has also undergone both static code
analysis from [Coverity](https://scan.coverity.com/), and validation of
memory safety with the [CBMC bounded model checker](https://www.cprover.org/cbmc/).

See memory requirements for this library [here](https://docs.aws.amazon.com/embedded-csdk/202012.00/lib-ref/libraries/aws/jobs-for-aws-iot-embedded-sdk/docs/doxygen/output/html/index.html#jobs_memory_requirements).

## Building the Jobs library

A compiler that supports **C90 or later** such as *gcc* is required to build the library.

Given an application in a file named `example.c`, *gcc* can be used like so:
```bash
gcc -I source/include example.c source/jobs.c -o example
```

*gcc* can also produce an object file to be linked later:
```bash
gcc -I source/include -c source/jobs.c
```

## Reference example

The AWS IoT Device SDK for Embedded C repository contains a demo using
the jobs library on a POSIX platform.
https://github.com/aws/aws-iot-device-sdk-embedded-C/tree/main/demos/jobs/jobs_demo_mosquitto

## Generating documentation

The Doxygen references were created using Doxygen version 1.8.20. To generate the
Doxygen pages, please run the following command from the root of this repository:

```shell
doxygen docs/doxygen/config.doxyfile
```

## Building unit tests

### Checkout Unity Submodule

By default, the submodules in this repository are configured with
`update=none` in [.gitmodules](.gitmodules) to avoid increasing
clone time and disk space usage of other repositories that submodule
this repository.

To build unit tests, the submodule dependency of Unity is required. Use
the following command to clone the submodule:
```
git submodule update --checkout --init --recursive --test/unit-test/Unity
```

### Platform Prerequisites

- For running unit tests
    - C90 compiler like gcc
    - CMake 3.13.0 or later
    - Ruby 2.0.0 or later is additionally required for the Unity test framework (that we use).
- For running the coverage target, lcov is additionally required.

### Steps to build Unit Tests

1. Go to the root directory of this repository. (Make
sure that the **Unity** submodule is cloned as described
[above](#checkout-unity-submodule).)

1. Create build directory: `mkdir build && cd build`

1. Run *cmake* while inside build directory: `cmake -S ../test`

1. Run this command to build the library and unit tests: `make all`

1. The generated test executables will be present in `build/bin/tests` folder.

1. Run `ctest` to execute all tests and view the test run summary.

## Contributing

See [CONTRIBUTING.md](./.github/CONTRIBUTING.md) for information on contributing.
