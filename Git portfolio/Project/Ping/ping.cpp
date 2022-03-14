#include "ping.hpp"

using namespace std;

static string host;

bool ping(string host, int time){
    
    std::string str = "ping " + host + " -t " + to_string(time) + " > /dev/null 2>&1";  
    int ret = system((str).c_str());

    return ret == 0 ? true : false;
}
