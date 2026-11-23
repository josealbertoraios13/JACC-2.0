#include <iostream>
#include "jacc/cli/argument_parser.hpp"

int main(int argc, char *argv[]){
    std::cout << "Welcome to jacc!" << std::endl;
    ArgumentParser parser;
    parser.execute(argc, argv);
    std::cout << "Exiting jacc." << std::endl;
    return 0;
}
