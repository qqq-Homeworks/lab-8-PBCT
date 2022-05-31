// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>


#include "Planet.hpp"

std::ostream &operator<<(std::ostream &ostream, Planet &planet) {
    ostream << '\"' << planet.Name << '\"' << " , " << planet.SattelitesNumber << '\n';
    return ostream;
}

