#include <iostream>
#include <list>
#include <ctime>

class Performance {
    public:
        // TODO: UUID
        int id{};
        std::string title{};
        time_t date{};
        int similarityScore{};
        // TODO: find out what keypoints type is from AI model
        std::list<int> keypoints{};
        // TODO: user video
        // TODO: reference video
};
