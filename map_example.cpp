#include <map>
#include <vector>
#include <iostream>

auto translate(const std::vector<std::string>& phrase, std::map<std::string, std::string>& dictionary) {
    std::vector<std::string> result; // создали хранилище для результата
    for(auto& word: phrase) { // для каждого слова из фразы
        result.push_back(dictionary[word]); // добавляем в результат перевод этого слова из словаря
    }
    return result;
}

std::ostream& operator<<(std::ostream& os, std::vector<std::string>& to_print) { // у нас os -- это cout
    for(auto& item: to_print) {
        os << item << ' ';
    }
    return os;
}


int main() {
    std::map<std::string, std::string> dictionary;
    dictionary["I"] = "Ya";
    dictionary["love"] = "liubliu";
    dictionary["you"] = "vy";
    dictionary["run"] = "begu";
    dictionary["sleep"] = "spliu";
    dictionary["to"] = "k";
    std::vector<std::string> phrase_1 = {"I", "love", "you"};
    std::vector<std::string> phrase_2 = {"I", "love", "to", "sleep"};
    std::vector<std::string> phrase_3 = {"I", "run", "to", "you"};

    auto translated_1 = translate(phrase_1, dictionary);
    auto translated_2 = translate(phrase_2, dictionary);
    auto translated_3 = translate(phrase_3, dictionary);

    std::cout << translated_1 << std::endl;
    std::cout << translated_2 << std::endl;
    std::cout << translated_3 << std::endl;
}