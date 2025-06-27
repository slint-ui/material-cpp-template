# Material Components for Slint C++ Template

A template for a C++ Application using Slint with [material components](https://github.com/slint-ui/material-components). Based on the material gallery.

## About

This template helps you get started developing a C++ application with Slint as a toolkit
for the user interface and the material component set. It demonstrates the integration between the `.slint`
UI markup and C++ code, how to react to callbacks, get and set properties, and use of all available
material components for Slint.

## Disclaimer

The material components are currently available as a technical preview. Some components are still missing and changes to the api
are possible. We will inform as soon as the component set is read for release.

## Usage

We recommend using an IDE for development, along with our [LSP-based IDE integration for `.slint` files](https://github.com/slint-ui/slint/blob/master/tools/lsp/README.md). You can also load this project directly in [Visual Studio Code](https://code.visualstudio.com) and install our [Slint extension](https://marketplace.visualstudio.com/items?itemName=Slint.slint).

1. Install the [pre-requisites](https://docs.slint.dev/latest/docs/cpp/cmake)
2. Clone this repository

   ```sh
   git clone --recurse-submodules https://github.com/slint-ui/material-cpp-template.git my-project
   cd my-project
   ```

## Run your application on desktop

1. Build
    ```sh
    mkdir build && cd build
    cmake .. -G Ninja
    cmake --build .
    ```

2. Run the application binary:

    ```sh
    ./my_application
    ```

## Next Steps

We hope that this template helps you get started, and that you enjoy exploring making user interfaces with Slint. To learn more
about the Slint APIs and the `.slint` markup language, check out our [online documentation](https://slint.dev/docs). Check out
also the [material components documentation](https://material.slint.dev/overview/)

Don't forget to replace the contents of this readme with your own project details.