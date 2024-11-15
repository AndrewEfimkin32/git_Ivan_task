#ifndef SCENE_H
#define SCENE_H
#include "figure.h"
#include <vector>

class Scene
{
public:
    Scene();
    ~Scene();
    void addFigure(Figure *figure);
    void printList();
    int size();
    bool empty();
    bool clearList();
    bool removeFigure(const int index);
    bool editFigure(const int index);
private:
    std::vector <Figure*> figures;
};

#endif // SCENE_H
