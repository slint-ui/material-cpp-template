# Material Components for Slint C++ Template

A template for a C++ Application using Slint with [material components](https://github.com/slint-ui/slint/tree/master/ui-libraries/material).

## About

This template helps you get started developing a C++ application with Slint as a toolkit
for the user interface and the material component set.

## Usage

We recommend using an IDE for development, along with our [LSP-based IDE integration for `.slint` files](https://github.com/slint-ui/slint/blob/master/tools/lsp/README.md). You can also load this project directly in [Visual Studio Code](https://code.visualstudio.com) and install our [Slint extension](https://marketplace.visualstudio.com/items?itemName=Slint.slint).

1. Install the [pre-requisites](https://docs.slint.dev/latest/docs/cpp/cmake)
2. Download and extract the [ZIP archive of this repository](https://github.com/slint-ui/material-cpp-template/archive/refs/heads/master.zip).

3. Rename the extracted directory and change into it:
    ```sh
    mv material-cpp-template-master my-project
    cd my-project
    ```

4. Build with `cmake`:
    ```sh
    mkdir build && cd build
    cmake .. -G Ninja
    cmake --build .
    ```
5. Run the application binary:
    ```sh
    ./my_application
    ```

## Next Steps

We hope that this template helps you get started, and that you enjoy exploring making user interfaces with Slint. To learn more
about the Slint APIs and the `.slint` markup language, check out our [online documentation](https://slint.dev/docs). Check out
also the [material components documentation](https://material.slint.dev/overview/)

Don't forget to replace the contents of this readme with your own project details.
(Containing a screenshot of your application if you want to.)
