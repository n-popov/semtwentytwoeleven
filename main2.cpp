#include <map>
#include <iostream>

int main() {
    std::map<int, int> numbers_to_squares;
    // отсортировано по ключам
    // обращение к элементу за O(logN)
    numbers_to_squares.insert({1, 1});
    numbers_to_squares.insert({3, 9});
    numbers_to_squares.insert({5, 25});
    numbers_to_squares.insert({100, 10000});
    numbers_to_squares.insert({2, 4});
    numbers_to_squares[8] = 64; // если ключа нет, он создаётся при первом обращении по нему
    numbers_to_squares[42] = 1764;
    for(auto& [num, sqr]: numbers_to_squares) {
        std::cout << num << ' ' << sqr << std::endl;
    }

    std::cout << std::endl;

    numbers_to_squares[2] = 6;

    for(auto iterator = numbers_to_squares.begin(); iterator != numbers_to_squares.end(); iterator++) {
        std::pair<const int, int> pair_of_key_and_value = *iterator;
        std::cout << pair_of_key_and_value.first << ' ' <<
            pair_of_key_and_value.second << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Square of five is " << numbers_to_squares[5] << std::endl;
}