# gtest - Google Test and Google Mock for EPICS
This module adds the [Google Test and Google Mock][googletest]
frameworks to EPICS, fully supported and integrated with the EPICS
build system.

## Features

Google Test and Google Mock 1.10.0, statically built with the EPICS
build system, using your specific configuration of EPICS Base,
compilers, host platforms etc.

Added TAP listener to create test reports in the TAP standard that
EPICS uses.

Additional rules for the EPICS build system that build and run Google
Test executables as part of the regular `make runtests` and
`make test-results` targets.

Easy configuration in any EPICS Makefile;
EPICS unit tests and Google Tests can live in the same directory.

## Prerequisites

Recent versions of the EPICS 3.15 or EPICS 7 release series.

Compiler that implements the C++11 standard.

## Usage

Build the gtest module using the standard techniques (e.g., configure
through `RELEASE.local` mechanism).

Set `GTEST=/path/to/gtest/module` in your module's dependency
configuration (e.g., `RELEASE.local`).

Add test code in e.g. `myTest.cpp` (multiple test suites supported)
to the `Makefile`:

```makefile
GTESTPROD_HOST += myTest
gsample1_SRCS += myTest.cpp
GTESTS += myTest
```

Run `make test-results`.

## License

The Google Test / Google Mock framework is distributed under the
[3-Clause BSD License][license.bsd].
EPICS is distributed under the [EPICS Open License][license.epics].

<!-- Links -->

[googletest]: https://github.com/google/googletest

[license.bsd]: https://opensource.org/licenses/BSD-3-Clause
[license.epics]: https://epics-controls.org/epics-open-license
