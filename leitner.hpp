#ifndef __LEITNER__
#define __LEITNER__

#include <string_view>
#include <string>
#include<vector>
#include "getInput.hpp"
#include "processInput.hpp"

namespace output {
    const std::string_view STREAK_FIRST_LINE = "Your current streak is: ";
    const std::string_view STREAK_SECOND_LINE = "Keep going!\n";

    const std::string_view ADD_FLASHCARD = "flashcards added to the daily box\n";

    const std::string_view REVIEW_TODAY_FIRST_LINE = "Flashcard: ";
    const std::string_view REVIEW_TODAY_SECOND_LINE = "Your answer: ";
    const std::string_view REVIEW_TODAY_CORRECT = "Your answer was correct! Well done, keep it up!\n";
    const std::string_view REVIEW_TODAY_WRONG_FIRST = "Your answer was incorrect. Don't worry! The correct answer is: ";
    const std::string_view REVIEW_TODAY_WRONG_SECOND = ". Keep practicing!\n";
    const std::string_view REVIEW_TODAY_LAST_MESSAGE = "You’ve completed today’s review! Keep the momentum going and continue building your knowledge, one flashcard at a time!\n";

    const std::string_view GET_REPORT_FIRST_LINE = "Day: ";
    const std::string_view GET_REPORT_SECOND_LINE = "Correct Answers: ";
    const std::string_view GET_REPORT_THIRD_LINE = "Incorrect Answers: ";
    const std::string_view GET_REPORT_FORTH_LINE = "Total: ";

    const std::string_view GET_PRG_RPT_FIRST_LINE = "Challenge Progress Report:\n";
    const std::string_view GET_PRG_RPT_SECOND_LINE = "\n";
    const std::string_view GET_PRG_RPT_THIRD_LINE = "Day of the Challenge: ";
    const std::string_view GET_PRG_RPT_FORTH_LINE = "Streak: ";
    const std::string_view GET_PRG_RPT_FIFTH_LINE = "Total Days Participated: ";
    const std::string_view GET_PRG_RPT_SIXTH_LINE = "Mastered Flashcards: ";
    const std::string_view GET_PRG_RPT_SEVENTH_LINE = "\n";
    const std::string_view GET_PRG_RPT_EIGHTTH_LINE = "Keep  up  the  great  work!  You're  making  steady  progress  toward mastering your flashcards.";

    const std::string_view NEXT_DAY_FIRST_LINE1 = "Good morning! Today is day ";
    const std::string_view NEXT_DAY_FIRST_LINE2 = " of our journey.\n";
    const std::string_view NEXT_DAY_SECOND_LINE = "Your current streak is: ";
    const std::string_view NEXT_DAY_THIRD_LINE = "Start reviewing to keep your streak!\n";
}

class leitner 
{
        getInput get_input;
        processInput process_input;
    public:
        void initiate ();
        std::vector<std::string> inputHandle();
        std::string_view commandHandle (std::vector<std::string> command);
};

#endif