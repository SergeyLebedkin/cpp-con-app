#include <filesystem>
#include <iostream>

int main(int argc, char** argv) {
    std::cout << std::filesystem::current_path() << std::endl;
    return 0;
}
