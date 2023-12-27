//temperature scale conversion technique

#include <iostream>
#include<iomanip>
int main()
{
    float temperatureValue;
    int choiceNumber;
    std::cout << "Enter the temperature value you want to convert: ";
    std::cin >> temperatureValue;
    std::cout << "Original Unit of Measurement ?" << std::endl;
    std::cout << "1.Celsius" << std::endl;
    std::cout << "2.Farenheit" << std::endl;
    std::cout << "3.Kelvin" << std::endl;
    std::cout << "Enter the choice number: ";
    std::cin >> choiceNumber;

        switch (choiceNumber)
        {
        case 1:
            // celsius to fareheit
            std::cout <<"Farenheit Scale: " <<std::fixed<<std::setprecision(2)<<round(9 * temperatureValue) / 5 + 32 << "F" << std::endl;
            // celsius kelvin
            std::cout <<"Kelvin Scale: "<<std::fixed<<std::setprecision(2)<<(temperatureValue + 273)<<"K"<< std::endl;
            break;
        case 2:
            // convert to celsius
            std::cout <<"Celsius Scale: "<<std::fixed<<std::setprecision(2)<<(5 * (temperatureValue - 32) / 9) << "C" << std::endl;
            // covert to kelvin
            std::cout <<"Kelvin Scale: "<<std::fixed<<std::setprecision(2)<<(5 * (temperatureValue - 32) / 9) + 273 << "K" << std::endl;
            break;
        case 3:
            // covert to celsius
            std::cout <<"Celsius Scale: "<<std::fixed<<std::setprecision(2)<<(temperatureValue - 273) << "C" << std::endl;
            // covert to farenheit
            std::cout <<"Farenheit Scale: "<<std::fixed<<std::setprecision(2)<<(9 * (temperatureValue - 273) / 5 + 32) << "F" << std::endl;
            break;
        default:
            std::cout << "Please enter the correct choice i.e 1,2 or 3." << std::endl;
            break;
        }
    return 0;
}
