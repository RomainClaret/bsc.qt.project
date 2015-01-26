#ifndef M_PAUSE_H
#define M_PAUSE_H

#include <QWidget>

class QLabel;
class QPushButton;
class QFormLayout;
class QGraphicsDropShadowEffect;



class M_Pause : public QWidget
{
    Q_OBJECT
public:
    M_Pause(QWidget *parent);

    void setUnableMenu(int levelValue);

private:
    QFormLayout *layoutMenuPause;
    QLabel *titleMenuPause;
    QLabel *undertitleMenuPause;

    QPushButton *btnMenuPauseResume;
    QPushButton *btnMenuPauseIsland;
    QPushButton *btnMenuPauseQuit;
    QPushButton *btnMenuPauseRestartEnigma;
    QPushButton *btnMenuPauseRestartLevel;

    QString styleBtn;

    QGraphicsDropShadowEffect* shadowbtn();
    void paintEvent(QPaintEvent *pe);

signals:

public slots:

};

#endif // M_PAUSE_H
