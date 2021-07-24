#include "title.h"

using namespace GML;

Title::Title(std::string name,
             std::string platform,
             double complete_time,
             std::optional<Medal>medal,
             std::optional<std::string> genre)
{
    this->name = name;
    this->platform = platform;
    this->complete_time = complete_time;
    this->medal = medal;
    this->genre = genre;
}
