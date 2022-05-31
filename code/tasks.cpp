// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>

#include "tasks.hpp"

void printText(int a) {
    std::cout << "\n\n\t\t\t\tTASK №" << a << '\n';
}

template<class T>
void printVector(std::vector<T> vector) {
    std::cout << '\n';
    for (auto element: vector) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

void task1() {
    printText(1);
    std::string s1, s2;
    std::cin >> s1 >> s2;
    int q = std::count(s2.begin(), s2.end(), s1[s1.length() - 1]);
    std::cout << q;
}

void task2() {
    printText(2);
    std::string str;
    std::cin.ignore();
    getline(std::cin, str); // не вводит
    std::cout << str.substr(str.find(' ') + 1, str.find(',') - str.find(' ') - 1);
}

void task3() {
//12.	Дан текстовый файл. Запишите в другой файл содержимое исходного файла, нумеруя каждую строку.
    std::string s; // сюда будем класть считанные строки
    std::ifstream fin("input.txt");
    std::ofstream fout("output.txt");
    size_t i = 0;
    while (getline(fin, s)) {
        fout << i++ << ". " << s << '\n';
    }
    fin.close();
    fout.close();
}

void task4() {
    printText(4);
    std::vector<float> v1, v2, v3;
    for (size_t i = 0; i < 25; ++i) {
        v1.push_back(rand() % 150 * (float) (rand() % 10) / 10);
        v2.push_back(rand() % 150 * (float) (rand() % 10) / 10);
        v3.push_back(v1[i] + v2[i]);
    }
    printVector(v1);
    printVector(v2);
    printVector(v3);
}

void task5() {

    printText(5);
    std::vector<Planet> planets{Planet("Меркурий", 0), Planet("Венера", 0), Planet("Земля", 1), Planet("Марс", 2),
                                Planet("Юпитер", 69), Planet("Сатурн", 62), Planet("Уран", 27), Planet("Нептун", 14),
                                Planet("Плутон", 10)};

    for (auto planet: planets) {
        std::cout << planet;
    }
    std::cout << "Планета с максимальным количеством спутников:\n";
    std::cout << *(std::max_element(planets.begin(), planets.end(), [](const Planet &planet1, const Planet &planet2) {
        return planet1.SattelitesNumber < planet2.SattelitesNumber;
    }));
}

void task6() {
    printText(6);
    std::list<int> list;
    for (size_t i = 0; i < 25; ++i) {
        list.push_back((int) pow(-1, rand() % 2) * rand() % 145);
    }
    std::cout << "list:\n";
    for (auto number: list) {
        std::cout << number << ' ';
    }
    std::cout << '\n' << std::count_if(list.begin(), list.end(), [](int number) { return number > 0; });
}

void task7() {
    printText(7);
    std::list<Card> cards{Card("На западном фронте без перемен", "Эрих Мария Ремарк", 1232),
                          Card("Мартин Иден", "Джек Лондон", 0),
                          Card("Великий Гэтсби", "Фрэнсис Скотт Фицджеральд", 122),
                          Card("Скотный двор", "Джордж Оруэлл", 888),
                          Card("Повелитель мух", "Уильям Голдинг", 123)};
    for (auto card: cards) {
        std::cout << card;
    }
    std::string author;
    std::cout << "Введите имя автора:\n";
    std::getline(std::cin, author);
    std::list<Card> searchResult;
    for (auto card: cards) {
        if (card.author == author) {
            searchResult.push_back(card);
        }
    }
    if (searchResult.empty()) {
        std::cout << "Книг данного автора нет";
    } else {
        std::cout << "Найдены следующие книги:\n";
        for (auto card: searchResult) {
            std::cout << card;
        }
    }
}

void task8() {
    printText(8);
    std::map<int, double> numbers;
    for (int i = 0; i < 10; ++i) {
        numbers.insert(std::make_pair(i, (i + static_cast<double>(i) / 10)));
    }
    for (auto number: numbers) {
        std::cout << number.first << " - " << number.second << '\n';
    }
    for (int i = 0; i < 10; i += 2) {
        numbers.erase(numbers[i]);
    }
    std::cout << "После удаления:\n";
    for (auto number: numbers) {
        std::cout << number.first << " - " << number.second << '\n';
    }
}

void task9() {
    printText(9);
    std::map<std::string, std::string> Phones{{"5671234", "Ivanov"},
                                              {"3214567", "Petrov"},
                                              {"9871234", "Sidorov"}};
    std::string mas[4] = {"1112233", "9871234", "5671234", "5556688"};
    for (size_t i = 0; i < 4; ++i) {
        if (Phones.find(mas[i]) != Phones.end()) {
            std::cout << Phones[mas[i]] << '\n';
        }
    }
}