#include <array>
#include <string> 

class Node {

private: 
    std::array<std::string> sets;
    int8_t id; 

public:
    
    constexpr array* Setter(std::array<std::string> sets, int_8* ids) 
    {
        for(auto id : ids)
        {
            sets.push_back(id);
        }
    }

}