#ifndef NEIGE_H
#define NEIGE_H
#include "surface.h"
#include <QGraphicsItem>

class neige : public surface
{
public:
    neige(qreal xpos, qreal ypos, QGraphicsItem *parent = 0);
};

#endif // NEIGE_H
