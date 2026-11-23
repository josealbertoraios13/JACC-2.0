#pragma once

#include <string>

class ProjectCreator {
    public:
        ProjectCreator();
        void createProject(const std::string& projectName);

    private:
        void createDirectories(const std::string& projectName);
        void createFiles(const std::string& projectName);
};