#ifndef DUNEPROFILE_H
#define DUNEPROFILE_H

#include "stbprofile.h"

#include <QObject>

namespace yasem
{

class DuneProfile : public QObject, public SDK::Profile
{
    Q_OBJECT
public:
    explicit DuneProfile(SDK::StbPluginObject *profilePlugin, const QString &id);

signals:

public slots:


    // Profile interface
public:
    void start();
    void stop();
    void initDefaults();
    void configureKeyMap();
    QString portal();

protected:
    void loadConfigOptions();
};

}

#endif // DUNEPROFILE_H
