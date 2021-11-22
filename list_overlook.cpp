#include <iostream>
#include <list>
#include <forward_list>

std::ostream& operator<<(std::ostream& ostr, const std::list<int>& our_list) {
    for(auto number: our_list) {
        ostr << number << ' ';
    }
    ostr << std::endl;
    return ostr;
}
// std::cout << ' ' << var3...

int main() {
    std::list<int> list_of_numbers;
    list_of_numbers.push_back(10);
    list_of_numbers.push_front(-10);
    list_of_numbers.insert(list_of_numbers.begin(), 5);
    std::cout << list_of_numbers;
    list_of_numbers.remove(5);
    for(auto iterator = list_of_numbers.begin(); iterator != list_of_numbers.end(); iterator++) {
        std::cout << *iterator << ' ';
    }
    std::cout << std::endl;

    std::list<int> other_list = {8, 10, 42};

    auto new_position = std::next(other_list.begin(), 2); // работает для ЛЮБОГО итератора
    new_position = std::prev(new_position);

    other_list.splice(new_position, list_of_numbers);

    std::cout << other_list;

    other_list.sort();

    std::cout << other_list;

    other_list.reverse();

    std::cout << other_list;

}