#include "infomenu.h"


void InfoMenu::mainMenu()
{
    std::cout << "\n\nWelcome to the Graphic Editor" << std::endl;
    std::cout << "The editor has the following functionality: " << std::endl;
    std::cout << "0 - Exit;" << std::endl;
    std::cout << "1 - List available shapes;" << std::endl;
    std::cout << "2 - List of figures on stage;" << std::endl;
    std::cout << "3 - Add a shape;" << std::endl;
    std::cout << "4 - Delete a shape;" << std::endl;
    std::cout << "5 - Clear the entire list;" << std::endl;
    std::cout << "6 - Edit figure;" << std::endl;
    std::cout << "Please, select action: ";
}

void InfoMenu::secondMenu()
{
    std::cout<< "\nYou can create the following shapes:" << std::endl;
    std::cout<< "0 - Poligon;" << std::endl;
    std::cout<< "1 - Triangle;" << std::endl;
    std::cout<< "2 - Rectangle;" << std::endl;
    std::cout<< "3 - Square;" << std::endl;
    std::cout<< "4 - Circle;" << std::endl;
}

