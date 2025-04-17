#include <iostream>
#include <windows.h>
#include <limits>
#include <sstream>
#include <string>
#include <map>
// esse código é uma cópia do 4o exercício de flushInput
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::map<std::string, int> wordCountMap;
    std::string textao = R"""(essa Linguagem de PRogramação precisa#desse tipo de estruturação pra uma string ter
mAIS de uma?linha, dessa forma dando pra fazer textos.enormes em@uma#só%string$sem ter que imprimir (printar)
varias linhas SEPARADAS em 'cout's Diferentes)""";

    std::cout << textao << std::endl;

    std::stringstream ss;
    ss << textao;

    std::string proxString = "";
    
    while (ss >> proxString) {
        std::string palavra = "";
        int lastPullIndex = 0;

        for (char c : proxString) {
            ++lastPullIndex;
            if (std::isalpha(c)) {
                palavra.push_back(std::tolower(c));
            } else {
                break;
            }
        }

        if (lastPullIndex < proxString.size() - 1) {
            std::string leftover = proxString.substr(lastPullIndex);
            ss.str(leftover + " " + ss.str().substr(ss.tellg()));
            ss.clear();
        }

        if (!palavra.empty()) {
            std::cout << palavra << std::endl;
        }

        if (wordCountMap.find(palavra) == wordCountMap.end()) {
            wordCountMap.insert({palavra, 1});
        } else {
            wordCountMap[palavra] += 1;
        }
    }

    for (std::pair<const std::string, int>& pair : wordCountMap) {
        std::cout << "A palavra ''" << pair.first << "'' se repete " << pair.second << " vezes " << std::endl;
    }
    return 0;
}
