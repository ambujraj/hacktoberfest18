#include <iostream>
#include <stdlib.h>
#include <string>

int main(int argc, char *argv[])
{
    unsigned int _rand, _range, _guess;

    if(argc == 2)
    {
        if(!std::string(argv[1]).empty())
        {
            _range = static_cast<unsigned int>(int(argv[2]));
            _rand = rand() % _range;

            std::cout << "Have a guess? > ";
            std::cin >> _guess;
            if(_guess == _rand)
            {
                std::cout << "You guessed it! Pretty suspicoius ^O.o^\n"
                          << "Your Chance was: " << 1/_range << std::endl;
                return EXIT_SUCCESS;
            }
            else
            {
                std::cerr << "You did not guess it. Im sorry my friend." << std::endl;
                return EXIT_FAILURE;
            }
        }
        else
        {
            std::cerr << "Did not get your input. Mission abort!" << std::endl;
            return EXIT_FAILURE;
        }
    }
    else
    {
        std::cout << "usage: gg_2 [range]" << std::endl;
    }
    return EXIT_SUCCESS;
}
