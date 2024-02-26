# C++ CMake DevOps

The purpose of this repository is to demonstrate the DevOps functionality that can be provided by a C++ and CMake project configured for VS Code.

## Features

### CMake

Some default CMake actions are configured including a `Release` and `Debug` build as well as `CTest` configuration.

### GitHub Actions Workflows

- `.github/workflows/cmake-build.yml` - Automatically runs a build and tests each time a PR is submitted targeting the `main` branch or a push to `main` occurs.

### GitHub Rules

- `main` - Pull Requests cannot be merged unless all checks pass and at least one reviewer gives approval.