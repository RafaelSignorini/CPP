#include <iostream>
#include <windows.h>
#include <limits>
#include <sstream>
#include <string>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string textao = R"""(essa Linguagem de PRogramação precisa#desse tipo de estruturação pra uma string ter
mAIS de uma?linha, dessa forma dando pra fazer textos.enormes em@uma#só%string$sem ter que imprimir (printar)
varias linhas SEPARADAS em 'cout's Diferentes)""";

    std::cout << textao << std::endl;

    std::stringstream ss;
    ss << textao;

    std::string proxString = ""; // esta é uma variável temporária, armazenando uma palavra inteira para ser utilizada
    
    while (ss >> proxString) { // aqui o stringstream (ss) recebe o valor da variável temporária
        std::string palavra = "";
        int lastPullIndex = 0; // reinicializa o lastPullIndex para cada nova palavra

        for (char c : proxString) { // aqui o foreach analiza cada caractere na string temporária
            ++lastPullIndex;
            if (std::isalpha(c)) { // e após verificar se é um caractere alfabético
                palavra.push_back(std::tolower(c)); // adiciona a letra na variável palavra
            } else { // evita de palavras separadas apenas por um ponto de não serem mergidas
                break;
            }
        }

        if (lastPullIndex < proxString.size() - 1) {
            std::string leftover = proxString.substr(lastPullIndex); // recebe o "resto" dos caracteres não utilizados
            ss.str(leftover + " " + ss.str().substr(ss.tellg())); // atualiza o conteúdo do stringstream
            ss.clear(); // limpa os flags de erro do stringstream
        }

        if (!palavra.empty()) {
            std::cout << palavra << std::endl;
        }
    }
    return 0;
}
