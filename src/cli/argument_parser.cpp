#include "jacc/cli/argument_parser.hpp"
#include "jacc/cli/command.hpp"

ArgumentParser::ArgumentParser() {}

void ArgumentParser::execute(int argc, char* argv[]) {
    if (argc < 3) {
        Command command;
        command.execute(argv[1]);
        return;
    }
}