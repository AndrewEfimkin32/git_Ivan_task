#include "scene.h"
#include <iostream>

Scene::Scene()
{

}

Scene::~Scene()
{
    for(auto i = 0; i < figures.size(); ++i)
    {
        delete figures[i];
    }
    figures.clear();
}


void Scene::addFigure(Figure *figure)
{
    figure->fillPoints();
    if (!figure->checkForm())
    {
        std::cout<< "\nIt's not a "<< figure->myType() <<std::endl;
     } else {
        std::cout<< "\n" << figure->myType() << " is create!!!" << std::endl;
        std::cout<< "It's perimetr is:" << figure->resultPerimeter()<<std::endl;
        std::cout<< "It's square is:" << figure->resultSquare()<<std::endl;
        figures.push_back(figure);
    }
}

void Scene::printList()
{
    for(auto i = 0; i < figures.size(); ++i)
    {
        Figure* current = figures[i];
        std::cout<< i+1 << ". "<<current->myType() << " | Perimeter: " << current->resultPerimeter()
        << " | Square: " << current->resultSquare()<<std::endl;
    }
}

int Scene::size()
{
    return figures.size();
}

bool Scene::empty()
{
    return figures.empty();
}

bool Scene::removeFigure(const int index)
{
    if (index <= figures.size() && index >= 0)
    {
        figures.erase(figures.begin() + index);
        std::cout<< "\nThe shape has been deleted" << std::endl;
        return true;
    } else {
        std::cout<< "\nThere are no shapes that can be deleted" << std::endl;
        return false;
    }
}

bool Scene::clearList()
{
    if (figures.size() > 0){
        figures.clear();
        return true;
    } else {
        return false;}
}

bool Scene::editFigure(const int index)
{  
    // нет проверки на отрицательные индексы
    if (index <= figures.size() &&  index >= 0){
        Figure* currentForEdit = figures[index];
        currentForEdit->fillPoints();
        std::cout<< "\nThe "<< currentForEdit->myType() << " has been changed" << std::endl;
        return true;
    }else {
        std::cout << "\nThere is no such figure in the list" << std::endl;
        return false;
    }
}
