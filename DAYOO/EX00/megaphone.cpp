#include <iostream>
using namespace std;

int    main(int argc, char **argv)
{
    int j;
    int i;

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else {

        i = 1;
        while (argv[i]) {
            
            j = 0;
            while (argv[i][j]) {

                if (argv[i][j] == '"')
                    continue;
                std::cout << char(toupper(argv[i][j]));
                j++;
            }
            i++;
        }
    }
    std::cout << "\n";
    return (0);
}