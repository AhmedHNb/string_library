# String Library

A simple C++ string manipulation library.

## Description

This library provides a `string_library` class with various static and member functions for common string operations.

## Features

- Convert strings to uppercase and lowercase.
- Append and prepend strings.
- Split strings by a delimiter.
- Count words in a string.
- Get the size of a string.
- Get a substring.

## How to Use

1.  Include the `string_library.h` header in your project.
2.  Create an instance of the `string_library` class or use the static methods directly.

## Examples

### Using Static Methods

```cpp
#include <iostream>
#include "string_library.h"

int main() {
    std::string my_string = "Hello, World!";

    // Convert to uppercase
    string_library::upper_case(my_string);
    std::cout << my_string << std::endl; // Output: HELLO, WORLD!

    // Convert to lowercase
    string_library::lower_case(my_string);
    std::cout << my_string << std::endl; // Output: hello, world!

    // Append a string
    string_library::append(my_string, " This is a test.");
    std::cout << my_string << std::endl; // Output: hello, world! This is a test.

    // Prepend a string
    string_library::prepend(my_string, "Start: ");
    std::cout << my_string << std::endl; // Output: Start: hello, world! This is a test.

    // Split a string
    std::string split_result = string_library::split_string(' ', "This is a sentence.");
    std::cout << split_result << std::endl; // Output: This is a sentence. 

    // Count words
    int word_count = string_library::count_words("This is another sentence.");
    std::cout << "Word count: " << word_count << std::endl; // Output: Word count: 4

    // Get string size
    int string_size = string_library::size("test");
    std::cout << "String size: " << string_size << std::endl; // Output: String size: 4

    // Get a substring
    std::string substring = string_library::substing("This is a test.", 0, 4);
    std::cout << substring << std::endl; // Output: This
    return 0;
}
```

### Using Member Methods

```cpp
#include <iostream>
#include "string_library.h"

int main() {
    string_library my_string("Hello, World!");

    // Convert to uppercase
    my_string.upper_case();
    std::cout << my_string.get_value() << std::endl; // Output: HELLO, WORLD!

    // Convert to lowercase
    my_string.lower_case();
    std::cout << my_string.get_value() << std::endl; // Output: hello, world!

    // Append a string
    my_string.append(" This is a test.");
    std::cout << my_string.get_value() << std::endl; // Output: hello, world! This is a test.

    // Prepend a string
    my_string.prepend("Start: ");
    std::cout << my_string.get_value() << std::endl; // Output: Start: hello, world! This is a test.

    // Split a string
    std::string split_result = my_string.split_string(' ');
    std::cout << split_result << std::endl; // Output: Start: hello, world! This is a test. 

    // Count words
    int word_count = my_string.count_words();
    std::cout << "Word count: " << word_count << std::endl; // Output: Word count: 7

    // Get string size
    int string_size = my_string.size();
    std::cout << "String size: " << string_size << std::endl; // Output: String size: 39

    // Get a substring
    std::string substring = my_string.substing(0, 5);
    std::cout << substring << std::endl; // Output: Start
    return 0;
}
```

## Building

To build the library and run the example, you can use a C++ compiler like g++.

```bash
g++ string_library.cpp -o string_library.exe
./string_library.exe
```

## Contributing

Contributions are welcome! Please feel free to submit a pull request.

## License

This project is not licensed. You are free to use, modify, and distribute the code.
