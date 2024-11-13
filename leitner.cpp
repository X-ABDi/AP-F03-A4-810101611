#include "leitner.hpp"

std::vector<std::string> leitner::inputHandle()
{
    get_input.getLine();
    return get_input.split();
}

std::string_view leitner::commandHandle (std::vector<std::string> command)
{
    return process_input.identifyCommand(command);
}

void leitner::initiate ()
{
    while (true)
    {
        std::vector<std::string> command{inputHandle()};
        if (command.size() == 0)
            break;
        std::string respond{commandHandle(command)};
        std::cout << respond << std::endl;
        // result(respond);
    }
}

int main ()
{
    leitner leitner_box;
    leitner_box.initiate();
    return 0;
}