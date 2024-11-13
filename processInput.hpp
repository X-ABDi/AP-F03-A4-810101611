#include <string>
#include<vector>
#include <map>
#include <functional>

namespace commands {
    const std::string_view STREAK = "streak";
    const std::string_view ADD_FLASHCARD = "add_flashcard";
    const std::string_view REVIEW_TODAY = "review_today";
    const std::string_view GET_REPORT = "get_report";
    const std::string_view GET_PROGRESS_REPORT = "get_progress_report";
    const std::string_view NEXT_DAY = "next_day";
}

class processInput
{
        using command_func = std::function<std::string_view(std::vector<std::string>)>;
        static std::map <std::string_view, command_func> command_functions;
    
    public:
        processInput();
        static std::string_view identifyCommand (std::vector<std::string> command)
        {
            auto it = command_functions.find(command[0]);
            if (it != command_functions.end())
            {
                return it->second(command);
            }
            return "command not found";
        }
        static std::string_view streakFunc (std::vector<std::string> command);
        static std::string_view addFunc (std::vector<std::string> command);
        static std::string_view reviewFunc (std::vector<std::string> command);
        static std::string_view reportFunc (std::vector<std::string> command);
        static std::string_view prgReportFunc (std::vector<std::string> command);
        static std::string_view nextdayFunc (std::vector<std::string> command);
};