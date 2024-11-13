#include "getInput.hpp"

void getInput::getLine ()
{
    std::getline(std::cin, line);
}

std::vector<std::string> getInput::split()
{
    std::vector<std::string> command;
    line_stream = std::stringstream();
    line_stream << line;
    word.clear();
    line_stream >> word;
    while (word != "")
    {
        command.push_back(word);
        word.clear();
        line_stream >> word;
    }
    return command;
}

void getInput::printLine()
{
    std::cout << line << std::endl;
}