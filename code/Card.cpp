// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>


#include "Card.hpp"

std::ostream &operator<<(std::ostream &ostream, Card &card) {
    ostream << '\"' << card.title << '\"' << ' ' << card.author << ' ' << card.number << '\n';
    return ostream;
}
