#ifndef LEVEL_H
#define LEVEL_H

class QString;
class QGraphicsScene;
class QPixmap;
class QPoint;

#include <QList>
#include <QStringList>
#include "w_dialog.h"

class Level
{
public:
    Level(int levelNumber);
    QGraphicsScene *populateScene();
    QPoint *getStartingPoint();
    QPoint getViewStart();
    QGraphicsScene* changeLevel(int levelNumber);
    int getLevelNumber();
    QString getDialogText();

private:
    int levelNumber;
    QPoint* startingPoint;
    QPoint* viewStart;

    int maxBlocksHeight;
    int maxBlocksWidth;

    void getSceneSize();

    QList<QList<QPoint> > ennemi;
    QStringList dialogList;
    int dialogValue;
};

#endif // LEVEL_H
