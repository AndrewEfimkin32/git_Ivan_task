#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <windows.h>
#include "point.h"
#include "figureutils.h"
#include "poligon.h"
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include "rectangle.h"
#include "scene.h"
#include "infomenu.h"

int main()
{
    SetConsoleCP(1251);
    int choise;
    Scene scene;
    InfoMenu menu;
    do{
       menu.mainMenu();
       std::cin >> choise;
       switch (choise) {
       case 0: std::cout<< "\nGood bye!!!"; break;
       case 1:menu.secondMenu(); break;
       case 2:
           std::cout<< "\nList of figures on stage :"<<std::endl;
           if (scene.empty()){
               std::cout << "\nList is empty!!!" << std::endl;
           } else {scene.printList();}
           break;
       case 3:
           int choise3;
           menu.secondMenu();
           std::cout << "Please, select action: ";
           std::cin>> choise3;
           switch (choise3) {
           case 0:
               scene.addFigure(new Poligon());
               break;
           case 1:
               scene.addFigure(new Triangle());
               break;
           case 2:
               scene.addFigure(new Rectangles());
               break;
           case 3:
               scene.addFigure(new Square());
               break;
           case 4:
               scene.addFigure(new Circle);
               break;
           default: std::cout<< "\nWrong command!!!" << std::endl; break;
           }
           break;
       case 4:
           if (scene.empty()){
               std::cout<< "\nThe list is empty, there is nothing to delete"<<std::endl;
           }else {
               int choiseDel;
               std::cout<< "\nYou can delete the following shapes:" << std::endl;
               scene.printList();
               std::cout<<"Select number of shape: ";
               std::cin>> choiseDel;
               choiseDel -= 1;
               scene.removeFigure(choiseDel);
           }
           break;
        case 5:
           if (scene.clearList()){
               std::cout<<"\nThe list has been cleared"<< std::endl;
           }else {
               std::cout<<"\nThe list is clear"<< std::endl;
           }
           break;
        case 6:
           if (scene.empty()){
               std::cout << "\nThere are no shapes that can be changed" << std::endl;
           } else{
               int choiseEdit;
               std::cout<< "\nSelect a shape to change it:"<<std::endl;
               scene.printList();
               std::cout<< "Choise a shape: ";
               std::cin >> choiseEdit;
               choiseEdit -= 1;
               scene.editFigure(choiseEdit);
           }
           break;
       default: std::cout<< "\nWrong command!!!" << std::endl; break;
       }
    }while (choise != 0);
    return 0;
}
