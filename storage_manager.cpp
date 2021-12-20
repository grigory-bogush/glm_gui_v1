#include "storage_manager.h"
#include<fstream>
#include<sstream>
#include<exception>

using namespace GML;

StorageManager::StorageManager() {}

std::string StorageManager::readFile(std::string path) {
    std::stringstream buffer;
    std::fstream file(path);

    if (file.is_open()) {
        buffer << file.rdbuf();

        file.close();
        return buffer.str();
    } else {
        throw std::runtime_error("Error reading file");
    }
}

void StorageManager::writeFile(std::string path, std::string contents) {
    std::fstream file(path);
    if (file.is_open()) {
        file << contents;
        file.close();
    }  else {
        throw std::runtime_error("Error writing fire");
    }
}
