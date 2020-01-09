#include <iostream>
#include <cmath>

/*
 * Да се напише void функция на C++, която приема като параметър цяло положително число и го преобразува в
 * средното аритметично на цифрите му (закръглено надолу). Функцията да не извиква други функции.
 * Да се напише програма, която извиква написаната функция върху три цели числа (едноцифрено, двуцифрено и избрано от вас)
 * и извежда на екрана резултатите за всяко от тях.
 */

//Функцията трябва да е void, а принтирането е казано да е в main - т.е. се иска да се променя входния параметър.
void get_average_from_digits(int& number)
{
    int sum = 0;
    int length = log10(number);
    while(number > 10)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    sum += number;
    number = sum;

}
int main() {

    int a = 5;
    int b = 27;
    int c = 1234;

    get_average_from_digits(a);
    std::cout << a << std::endl;

    get_average_from_digits(b);
    std::cout << b << std::endl;

    get_average_from_digits(c);
    std::cout << c << std::endl;

    return 0;
}
