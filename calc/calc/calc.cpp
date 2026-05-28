#include <iostream>
#include "add.h"
#include "sub.h"
#include "mul.h"

int main()
{
    int a, b;
    char op;

    std::cout << "계산기 프로그램\n";
    std::cout << "사용 가능한 연산자: +, -, *\n";
    std::cout << "계산식 입력 예시: 10 + 20\n";
    std::cout << "입력: ";

    std::cin >> a >> op >> b;

    switch (op)
    {
    case '+':
        std::cout << "결과: " << add(a, b) << std::endl;
        break;

    case '-':
        std::cout << "결과: " << sub(a, b) << std::endl;
        break;

    case '*':
        std::cout << "결과: " << mul(a, b) << std::endl;
        break;

    default:
        std::cout << "잘못된 연산자입니다." << std::endl;
        break;
    }

    return 0;
}