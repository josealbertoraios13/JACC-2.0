#pragma once 

#include <string>

class Command {
    public:
        Command();
        void execute(const std::string& commandFlag);

    private:
        void displayHelp();
        void displayVersion();
};