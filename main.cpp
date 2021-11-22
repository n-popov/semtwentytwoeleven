#include <iostream>
#include <set>
#include <map>



int main() {
    std::set<int, std::greater<>> set_of_numbers; // обёртка над красно-чёрным деревом
    // для каждого листика верно: элементы слева меньше, элементы справа больше

    // Сет -- множество
    // упорядоченность элементов (по умолчанию -- от меньшего к большему)
    // обращение к элементу за O(logN), N -- размер
    set_of_numbers.insert(3);
    set_of_numbers.insert(42);
    set_of_numbers.insert(-500);

    for(auto& item: set_of_numbers) { // как осуществляется итерация? неочевидно
        std::cout << item << ' ';
    }
    std::cout << std::endl;

    for(auto iter = set_of_numbers.begin(); iter != set_of_numbers.end(); iter++) { // ровно то же самое
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;

    // с каждой структурой данных связан специальный класс -- итератор
//    std::set<int>::iterator it = set_of_numbers.begin();

    // итератор -- это такой класс (структура с функциями),
    // функционал которого -- обеспечивать итерацию по структуре данных

    // к итераторам можно прибавлять целые числа
    // итератор для своей структуры данных делает ТО ЖЕ САМОЕ, что и указатель для обычного массива

//    int* standard_array = new int[5];
//    auto counter = 0;
//    for(auto pointer = standard_array; counter < 5; pointer++) {
//        std::cout << *pointer << ' ';
//        counter++;
//    }
//    delete[] standard_array;

//    std::vector<int> numbers = {5, 4, 3, 2, 1};
//    for(auto iterator = numbers.begin(); iterator != numbers.end(); iterator++) {
//        std::cout << *iterator << ' ';
//    }


    return 0;
}
