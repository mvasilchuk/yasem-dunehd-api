#ifndef DUNEPROFILE_H
#define DUNEPROFILE_H

#include "stbprofileplugin.h"
#include "stbprofile.h"

#include <QObject>

namespace yasem
{

class DuneProfile : public QObject, public Profile
{
    Q_OBJECT
public:
    explicit DuneProfile(StbPlugin *profilePlugin, const QString &id);

signals:

public slots:


    // Profile interface
public:
    void start();
    void stop();
    void initDefaults();
    void configureKeyMap();
    QString portal();
};

}

#endif // DUNEPROFILE_H
