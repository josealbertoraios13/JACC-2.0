#pragma once

#include <string_view>

namespace flags {
    constexpr std::string_view HELP_LONGER = "--help";
    constexpr std::string_view HELP_SHORT = "-h";

    constexpr std::string_view VERSION_LONGER = "--version";
    constexpr std::string_view VERSION_SHORT = "-v";
    
    constexpr std::string_view VERBOSE_LONGER = "--verbose";
    constexpr std::string_view VERBOSE_SHORT = "-V";

    constexpr std::string_view CREATE_LONGER = "--create";
    constexpr std::string_view CREATE_SHORT = "-c";
}

class ArgumentParser {
    public:
        ArgumentParser();
        void execute(int argc, char* argv[]);
};