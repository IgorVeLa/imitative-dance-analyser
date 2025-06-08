#include <iostream>
#include "performance.h"

class User {
    public:
        // TODO: uuid
        int id{};
        std::string email{};
        // TODO: secure type
        std::string password{};
        std::list<Performance> performances{};
};
