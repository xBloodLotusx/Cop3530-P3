#include <iostream>
#include <fstream>
#include <string>
// Created by Joshie Land on 4/20/25.
//

#include "Data.h"
class Match {
public:
    std::string match_date;
    std::string home_team;
    std::string away_team;
    int home_score;
    int away_score;

    Match(std::string date, std::string home, std::string away, int hscore, int ascore)
            : match_date(date), home_team(home), away_team(away), home_score(hscore), away_score(ascore) {}
};




