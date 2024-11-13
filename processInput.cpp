#include "processInput.hpp"

processInput::processInput()
{
    command_functions.emplace(commands::STREAK, &streakFunc);
    command_functions.emplace(commands::ADD_FLASHCARD, &addFunc);
    command_functions.emplace(commands::REVIEW_TODAY, &reviewFunc);
    command_functions.emplace(commands::GET_REPORT, &reportFunc);
    command_functions.emplace(commands::GET_PROGRESS_REPORT, &prgReportFunc);
    command_functions.emplace(commands::NEXT_DAY, &nextdayFunc);
}
