#include <iostream>
#include <stdexcept>

int main() {
    try {
        try {
            // nested try block
            throw std::runtime_error("An error occurred in the nested block");
        }
        catch (std::exception& e) {
            std::cout << "Caught exception in the nested block: " << e.what() << std::endl;
            throw; // rethrow the exception to the outer block
        }
    }
    catch (std::exception& e) {
        std::cout << "Caught exception in the outer block: " << e.what() << std::endl;
    }

    return 0;
}

