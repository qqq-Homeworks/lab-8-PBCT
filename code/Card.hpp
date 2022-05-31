// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>


#ifndef CODE_CARD_HPP
#define CODE_CARD_HPP

#include <string>
#include <iostream>

class Card {
    std::string title;        // заглавие книги
    // автор
    int number;        // количество имеющихся экземпляров
public:
    Card() : title(""), author(""), number(0) {}

    Card(std::string t, std::string a, int n) : title(t), author(a), number(n) {}

    friend std::ostream &operator<<(std::ostream &, Card &);

    std::string author;
};


#endif //CODE_CARD_HPP
