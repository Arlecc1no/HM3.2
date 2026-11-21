#include <iostream>
#include <string>

class Counter
{
private:
    int value{};
public:
    Counter()
    {
        value = 1;
    }

    Counter(int initialValue)
    {
        value = initialValue;
    }

    void in()
    {
        ++value;
    }

    void de()
    {
        --value;
    }

    int getValue()
    {
        return value;
    }
};

int main()
{
    Counter counter;
    std::string answer{};
    int initialValue{};
    char command{};
    
    std::cout << "Do you want to set the initial value? (yes/no): ";
    std::cin >> answer;
    if (answer == "yes")
    {
        std::cout << "Enter initial Value: ";
        std::cin >> initialValue;

        counter = Counter(initialValue);
    }
    
    while (true)
    {
        std::cout << "Enter command (+, -, =, x): ";
        std::cin >> command;

        if (command == '+')
        {
            counter.in();
        }
        else if (command == '-')
        {
            counter.de();
        }
        else if (command == '=')
        {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == 'x')
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Error!!! Invalid command!" << std::endl;
        }
        
    }


    return EXIT_FAILURE;
}