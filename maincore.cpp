#include<iostream>
#include "maincore.h"
#include "storage_manager.h"
#include "QFileInfo"
#include<QDebug>
#include<QCoreApplication>


void main_core() {
    qInfo() << QFileInfo(".").absolutePath();
    auto path = QCoreApplication::applicationDirPath() + "/test_file.txt";
    std::cout << path.toUtf8().constData() << std::endl;

    // TODO: add assets
    //std::string result = GML::StorageManager::readFile(path.toUtf8().constData());
    //std::cout << "Read file contents: " << result;
}
