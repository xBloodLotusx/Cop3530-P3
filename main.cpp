#include <iostream>
#include <sstream>
#include <vector>
#include "Mergesort.cpp"
#include "Quicksort.cpp"


int main() {
    std::cout << "This program is intended to predict a team's chance of winning!\nInput a digit specifying which command and variables accordingly.\nUse _ for the spaces in a team's name i.e. 2 Real_Madrid Manchester_United.\n1: Team\n2: Team Opponent\n3: Quit" << std::endl;
    std::vector<Match> data = {
            Match(20230101, "Real_Madrid", "Barcelona", 2, 1),
            Match(20230201, "Real_Madrid", "Atletico_Madrid", 3, 0),
            Match(20230301, "Barcelona", "Real_Madrid", 1, 1),
            Match(20230401, "Real_Madrid", "Sevilla", 4, 1)
    };
    std::string line;
    std::getline(std::cin, line);
    std::istringstream stream(line);
    std::string num, name, opp;
    stream >> num >> name >> opp;
    if (num == "1") {
        std::cout << "1" << std::endl;
        std::vector<Match> mdata = Mergesort(data, 0, data.size() - 1, name, "");
        std::vector<Match> qdata = Quicksort(data, name, "");
        for (auto it=0; it < qdata.size(); it++) {

        }
    }
    else if (num == "2") {
        std::cout << "2" << std::endl;
    }
    return 0;
}