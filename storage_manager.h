#ifndef STORAGE_MANAGER_H
#define STORAGE_MANAGER_H

#include<string>

namespace GML {
    class StorageManager
    {
    public:
        StorageManager();
        static std::string readFile(std::string location);
        static void writeFile(std::string location, std::string contents);
    };
}
#endif // STORAGE_MANAGER_H
