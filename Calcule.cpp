#include <iostream>

int main()
{
    float num1, num2;
    char opera;

    std::cin >> num1 >> opera >> num2;
    switch (opera)
    {
        case '+':
            std::cout << num1 << opera << num2 << "=" << num1 + num2;
            break;
        case '-':
            std::cout << num1 << opera << num2 << "=" << num1 - num2;
            break;
        case '*':
            std::cout << num1 << opera << num2 << "=" << num1 * num2;
            break;
        case '/':
            std::cout << num1 << opera << num2 << "=" << num1 / num2;
            break;
        case '%':
            bool isNum1, isNum2;
            (isNum1 = ((int)num1 == num1));
            (isNum2 = ((int)num2 == num2));
            if (isNum1 && isNum2)
                std::cout << num1 << opera << num2 << "=" << (int)num1 % (int)num2;
            else 
                std::cerr << "NOOOP";
            break;
    }
    return 0;
}