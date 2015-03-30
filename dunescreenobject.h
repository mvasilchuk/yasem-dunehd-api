#ifndef DUNESCREENOBJECT_H
#define DUNESCREENOBJECT_H


#include <QObject>

namespace yasem {
class Profile;
class AbstractWebPage;

class DuneScreenObject: public QObject
{
    Q_OBJECT
    Q_PROPERTY(int width READ getWidth USER true)
    Q_PROPERTY(int height READ getHeight USER true)
    Q_PROPERTY(int innerWidth READ getWidth USER true)
    Q_PROPERTY(int innerHeight READ getHeight USER true)
    Q_PROPERTY(int availWidth READ getWidth USER true)
    Q_PROPERTY(int availHeight READ getHeight USER true)
    Q_PROPERTY(int colorDepth READ getColorDepth USER true)
public:
    DuneScreenObject(Profile* profile, AbstractWebPage* page);
    virtual ~DuneScreenObject();

protected:
    Profile* m_profile;
    AbstractWebPage* m_page;

    int width;
    int height;
    int colorDepth;

    int getWidth() {return width;}
    int getHeight() {return height;}
    int getColorDepth() {return colorDepth;}

};

}

#endif // DUNESCREENOBJECT_H
