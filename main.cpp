#include <iostream>
#include "MazeFactory.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    MazeFactory prototypeMaze(new Room);
    prototypeMaze.makeRoom();
    return 0;
}
