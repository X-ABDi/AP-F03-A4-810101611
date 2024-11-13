#include <iostream>
#include <string>
#include <sstream>
#include<vector>

class getInput
{
        std::string line;
        std::string word; 
        std::stringstream line_stream;
    public:
        void getLine ();
        void printLine ();
        std::vector<std::string> split();

};