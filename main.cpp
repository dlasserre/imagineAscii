#include "Image.hpp"

#include <iostream>
#include <ostream>
#include <cassert>
#include <filesystem>

int main(const int argc, char** argv) {

    if (argc != 3) {
        std::cout
            << "Usage: " << argv[0]
            << " <image> <width>\n";

        return 1;
    }

    const std::filesystem::path fileName{argv[1]};
    const int targetWidth = std::stoi(argv[2]);

    const image::Image image{fileName};

    image.printImage(targetWidth);

    return EXIT_SUCCESS;
}
