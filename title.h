#ifndef TITLE_H
#define TITLE_H

#include<vector>
#include<string>
#include<optional>

namespace GML {
    enum struct MedalType {
        bronze,
        silver,
        gold
    };

    struct Medal {
        MedalType type;
        bool is_uncertain;
    };


    class Title
    {
        std::string name;
        std::string platform;
        double complete_time;

        // Fields that may or may not be present
        std::optional<Medal> medal;
        std::optional<std::string> genre;
    public:
        Title(const std::string name,
              const std::string platform,
              const double complete_time,
              std::optional<Medal>medal={},
              std::optional<std::string>genere={});
    };
}

#endif // TITLE_H
