// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>


#ifndef CODE_PLANET_HPP
#define CODE_PLANET_HPP

#include <string>
#include <iostream>
#include <iterator>

class Planet {
public:
    std::string Name;
    size_t SattelitesNumber;

    Planet(std::string name, size_t sattelites_number) : Name(name), SattelitesNumber(sattelites_number){};

    friend std::ostream &operator<<(std::ostream &, Planet &);
};



#endif //CODE_PLANET_HPP
