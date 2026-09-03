# imagineAscii

A tiny C++ project that converts images into **ASCII art directly in your terminal**.

Nothing serious here — just a fun little project made in one evening to play around with image manipulation and C++. 😄

## Usage

    ./imagineAscii <image> <width>

Example:

    ./imagineAscii cat.jpg 120

The second argument defines the output width in characters.

## Build

Requires a **C++20 compatible compiler** and **CMake**.

    mkdir build
    cd build
    cmake ..
    cmake --build .

## How it works

1. Load the image using `stb_image`
2. Resize it to the requested terminal width
3. Calculate the brightness of each pixel
4. Map the brightness to an ASCII character
5. Print the result to the terminal

Character palette:

    .:-=+*#%@

## Why?

Because sometimes you just want to turn a picture into ASCII art in C++.

Made for fun in one evening. ✌️