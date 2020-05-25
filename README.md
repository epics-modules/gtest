# gtest - Google Test and Google Mock for EPICS
This module adds the [Google Test and Google Mock][googletest]
frameworks to EPICS, fully supported and integrated with the EPICS
build system.

## Features

- Google Test and Google Mock 1.10.0, built with the EPICS build
system, thus using your specific configuration of EPICS Base,
compilers, host platforms etc.

- TAP listener to create test reports in the TAP standard that
EPICS uses.

- Additional rules for the EPICS build system that build and run
Google Test executables as part of the regular `make runtests` and
`make test-results` targets.

- Easy configuration in any EPICS Makefile;
EPICS unit tests and Google Tests can live in the same directory.

- Compatibility RULES file that allows using this module with older
releases of EPICS Base. (Tested for 3.14.12.8 and above.)

## Prerequisites

- Recent versions of the EPICS 3.15 or EPICS 7 release series are
supported out-of-the-box. Using the provided compatibility rules
file, full functionality is available with older releases
(3.14.12.8 and above).

- Googletest requires a compiler that implements the C++11 standard. \
Microsoft Visual C++ needs to be from Visual Studio 2015 or newer.
g++ needs to be 4.6 or above.

## Usage

1. Build the gtest module using the standard techniques (e.g.,
configure through `RELEASE.local` mechanism).

2. Set `GTEST=/path/to/gtest/module` in your module's dependency
configuration (e.g., `RELEASE.local`).

3. Write test code in e.g. `myTest.cpp` (multiple test suites per
source file are supported) and add the test to the `Makefile`:

```makefile
GTESTPROD_HOST += myTest
myTest_SRCS += myTest.cpp
GTESTS += myTest
```

4. If you are using an older release of EPICS Base, include the
compatibility rules file at the end of your `Makefile`:

```makefile
include $(GTEST)/cfg/compat.RULES_BUILD
```

5. Run `make test-results`.

When using the compatibility rules, you will see some warnings about
make rules for test related targets being overwritten and/or ignored.
This is expected, as it is the way the compatibility rules work:
they overwrite some of the test rules from EPICS Base to work with
Google Test. This is done only for the make run in the directories
where you include that compatibility rules file;
your Base installation (and all other/remaining builds) are left
untouched.

## License

The Google Test / Google Mock framework is distributed under the
[3-Clause BSD License][license.bsd]. \
The TAP listener is distributed under the [MIT License][license.mit]. \
EPICS is distributed under the [EPICS Open License][license.epics].

<!-- Links -->

[googletest]: https://github.com/google/googletest

[license.bsd]: https://opensource.org/licenses/BSD-3-Clause
[license.mit]: https://opensource.org/licenses/MIT
[license.epics]: https://epics-controls.org/epics-open-license
