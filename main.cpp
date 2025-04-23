#include <iostream>
#include <sstream>
#include "Mergesort.cpp"
#include "Quicksort.cpp"
#include "Data.cpp"
#include <vector>


int main() {
    std::cout << "This program is intended to predict a team's chance of winning!\nInput a digit specifying which command and variables accordingly.\nUse _ for the spaces in a team's name i.e. 2 Real_Madrid Manchester_United.\n1: Team\n2: Team Opponent\n3: Quit" << std::endl;

    std::string line;
    std::getline(std::cin, line);
    std::istringstream stream(line);
    std::string num, name, opp;
    stream >> num >> name >> opp;
    std::vector<Match> data, mdata, qdata;
    if (num == "1") {
        std::cout << "1" << std::endl;
        mdata = Mergesort<std::vector<Match> >(data, 0, data.size()-1, name, "");
        qdata = Quicksort<std::vector<Match> >(data, name, "");
        for (auto it=0; it < qdata.size(); it++) {

        }
    }
    else if (num == "2") {
        std::cout << "2" << std::endl;
    }
    return 0;
}