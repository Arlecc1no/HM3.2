#include <iostream>

class Calculator
{
private:
    double num1{};
    double num2{};
public:
    double add() const
    {
        return num1 + num2;
    }

    double multiply() const
    {
        return num1 * num2;
    }

    double subtract_1_2() const
    {
        return num1 - num2;
    }

    double subtract_2_1() const
    {
        return num2 - num1;
    }

    double divide_1_2() const
    {
        return num1 / num2;
    }

     double divide_2_1() const
    {
        return num2 / num1;
    }

    bool set_num1(double value1)
    {
        if (value1 == 0)
        {
            return false;
        }
        else
        {
            num1 = value1;
            return true;
        }
    }
    
    bool set_num2(double value2)
    {
        if (value2 == 0)
        {
            return false;
        }
        else
        {
            num2 = value2;
            return true;
        }
    }
};

int main()
{
    Calculator calculator;
    double number{};
    while(true)
    {
        while (true)
        {
            std::cout << "Enter num1: ";
            std::cin >> number;

            if (calculator.set_num1(number))
            {
                break;
            }

            std::cout << "Error!!" << std::endl;
        }

        while (true)
        {
            std::cout << "Enter num2: ";
            std::cin >> number;

            if (calculator.set_num2(number))
            {
                break;
            }

            std::cout << "Error!!" << std::endl;
        }

        std::cout << "num1 + num2 = " << calculator.add()           << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2()  << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1()  << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply()      << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2()    << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1()    << std::endl;

        std::cout << std::endl;
    }
    return EXIT_SUCCESS;  //Не понимаю зачем, если программу всё равно останавливать через консоль ( в моём случае через Ctrl + C)
}