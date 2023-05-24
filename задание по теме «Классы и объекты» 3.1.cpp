// задание по теме «Классы и объекты» 3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator {
public:

    double num1=3.33;
    double num2=3.33;

    double add() {
        double a = num1 + num2;        
        return a;
    }

    double multiply() {
        double m = num1 * num2;
        return m;
    }

    double subtract_1_2() {
        double s = num2 - num1;
        return s;
    }

    double subtract_2_1() {
        double s1 = num1 - num2;
        return s1;
    }

    double divide_1_2() {
        double d1 = num1 / num2;
        return d1;
    }

    double divide_2_1() {
        double d = num2 / num1;
        return d;
    }

    bool set_num1(double num1){ 
        if (num1 != 0) {
            this->num1 = num1;            
            return true;
        }
        else {
            return false;  
                   }
            }

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
        
    }
    };


int main()
{
    setlocale(LC_ALL, "ru");
   
    Calculator Calc;
    int program_cycle = 0;
    double num1;
    double num2;
    do {

        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (Calc.set_num1(num1) == false)
                std::cout << "Неверный ввод! " << std::endl;
        } while (Calc.set_num1(num1) == false);

        do {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (Calc.set_num2(num2) == false)
                std::cout << "Неверный ввод! " << std::endl;
        } while (Calc.set_num2(num2) == false);


        std::cout
            << "num1 + num2 = " << Calc.add() << std::endl
            << "num1 - num2 = " << Calc.subtract_2_1() << std::endl
            << "num2 - num1 = " << Calc.subtract_1_2() << std::endl
            << "num1 * num2 = " << Calc.multiply() << std::endl
            << "num1 / num2 = " << Calc.divide_1_2() << std::endl
            << "num2 / num1 = " << Calc.divide_2_1() << std::endl;

    } while (program_cycle!=1);

    return 0; 
}