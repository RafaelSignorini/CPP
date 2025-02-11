#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char user_input;
    std::cout << "Insira um único dígito no teclado para que o programa verifique suas características: (insira [~] para sair)\n";
    std::cin >> user_input;
    std::isalnum(user_input) ? std::cout << "O dígito é alfabético ou numérico.\n" : std::cout << "O dígito não é alfabético ou numérico.\n"; // Check if character is alphanumeric (function)
    std::isalpha(user_input) ? std::cout << "O dígito é alfabético.\n" : std::cout << "O dígito não é alfabético.\n"; // Check if character is alphabetic (function)
    std::isblank(user_input) ? std::cout << "O dígito é branco (vazio).\n" : std::cout << "O dígito não é branco (vazio).\n"; // Check if character is blank (function)
    std::iscntrl(user_input) ? std::cout << "O dígito é um caracetere de controle.\n" : std::cout << "O dígito não é um caracetere de controle.\n"; // Check if character is a control character (function)
    std::isdigit(user_input) ? std::cout << "O dígito é um valor decimal.\n" : std::cout << "O dígito não é um valor decimal.\n"; // Check if character is decimal digit (function)
    std::isgraph(user_input) ? std::cout << "O dígito é uma representação gráfica.\n" : std::cout << "O dígito não é uma representação gráfica.\n"; // Check if character has graphical representation (function)
    std::islower(user_input) ? std::cout << "O dígito é minúsculo.\n" : std::cout << "O dígito não é minúsculo.\n"; // Check if character is lowercase letter (function)
    std::isprint(user_input) ? std::cout << "O dígito é printável.\n" : std::cout << "O dígito não é printável.\n"; // Check if character is printable (function)
    std::ispunct(user_input) ? std::cout << "O dígito é um ponto / vírgula / etc.\n" : std::cout << "O dígito não é um ponto / vírgula / etc.\n"; // Check if character is a punctuation character (function)
    std::isspace(user_input) ? std::cout << "O dígito é um espaço.\n" : std::cout << "O dígito não é um espaço.\n"; // Check if character is a white-space (function)
    std::isupper(user_input) ? std::cout << "O dígito é maiúsculo.\n" : std::cout << "O dígito não é maiúsculo.\n"; // Check if character is uppercase letter (function)
    std::isxdigit(user_input) ? std::cout << "O dígito é hexadecimal.\n" : std::cout << "O dígito não é hexadecimal.\n"; // Check if character is hexadecimal digit (function)
}
