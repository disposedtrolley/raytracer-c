# raytracer-c

Raytracer implemented in C.

## Development

### Prerequisites

- CMake >= 3.17
- A modern-ish C compiler 

### Build

- `mkdir build && cd build`
- `cmake -DCMAKE_BUILD_TYPE=<Debug|Release> ..` (choose either Debug or Release)
- `make`

### Run

- `<build_folder>/exec/raytracer` executes the raytracer entry point.

### Test

- `<build_folder>/tests/raytracer_test` executes the unit tests.

## Project Layout

- `CMakeLists.txt`
  - Sets up the project and adds the `vendor`, `lib`, `exec`, and `tests` subdirectories.
- `lib/`
  - Modules shared across the raytracer, built as static libraries.
- `exec/`
  - Raytracer entry point, built as an executable.
- `tests/`
  - Unit tests built using the [Unity](https://github.com/ThrowTheSwitch/Unity) framework.
- `vendor/`
  - Third-party code like Unity added as Git submodules, built as static libraries.