#include <map>
#include <string> 
#include <vector>

class Node {

private: 
    std::map<std::string, int8_t> sets;
    int8_t id; 

public:
    
    std::map<std::string,int8_t> Setter(std::map<std::string,int8_t> sets, std::vector<int8_t> ids) 
    {
        int count = 1;
        for(auto it = ids.begin(); it != ids.end(); it++)
        {
            sets[std::to_string(count)] = *it;
            count++;
        }
    }

};