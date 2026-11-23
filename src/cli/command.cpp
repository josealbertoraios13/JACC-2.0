#include <iostream>

#include "jacc/cli/command.hpp"
#include "jacc/cli/argument_parser.hpp"

Command::Command() {}

void Command::execute(const std::string& commandFlag) {
    if (commandFlag == flags::HELP_LONGER || commandFlag == flags::HELP_SHORT) {
        displayHelp();
        return;
    } 
    
    if (commandFlag == flags::VERSION_LONGER || commandFlag == flags::VERSION_SHORT) {
        displayVersion();
        return;
    }
}

void Command::displayHelp() {
    std::cout << "Usage: jacc [options]\n";
    std::cout << "Options:\n";
    std::cout << "  -h, --help     Show this help message\n";
    std::cout << "  -v, --version  Show version information\n";
}

void Command::displayVersion() {
    std::cout << "jacc version 1.0.0\n";
}