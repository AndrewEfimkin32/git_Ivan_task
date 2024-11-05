#include <iostream>
#include <cmath>
#include "point.h"
#include <vector>
#include <windows.h>
#include "figureutils.h"
#include "poligon.h"
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include "rectangle.h"
#include "scene.h"
#include "infomenu.h"
#include <string>

// Список задач
// Вывести всю логику в класс Сцена
// Проверка треугольника работает не правильно!!! И скорее всего четырехугольника тоже!!!
// Сократить код как можно больше, вынести cout в отдельный класс.

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
           if (scene.checkVector()){
               std::cout << "\nList is empty!!!" << std::endl;
           } else {scene.printList();}
           break;
       case 3:
           int choise3;
           menu.secondMenu();
           std::cout << "Please, select action: ";
           std::cin>> choise3;
           // Switch for creating shapes
           /* Есть вопрос
           Почему я должен каждый case заносить в ковычки? В данном случае*/
           switch (choise3) {
           case 0:
               {Figure *figure = new Poligon();
               scene.addFigure(figure);}
               break;
           case 1:
               {Figure *figure = new Triangle();
               scene.addFigure(figure);}
               break;
           case 2:
               {Figure *figure = new Rectangles();
               scene.addFigure(figure);}
               break;
           case 3:
               {Figure *figure = new Square();
               scene.addFigure(figure);}
               break;
           case 4:
               {Figure *figure = new Circle();
               scene.addFigure(figure);}
               break;
           default: std::cout<< "\nWrong command!!!" << std::endl; break;
           }
           break;
       case 4:
           if (scene.checkVector()){
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
        case 5: scene.clearList(); break;
        case 6:
           if (scene.checkVector()){
               std::cout << "\nThere are no shapes that can be changed" << std::endl;
           } else{
               int choiseEdit;
               std::cout<< "\n Select a shape to change it:"<<std::endl;
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
