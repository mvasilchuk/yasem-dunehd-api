#ifndef DUNEAPI_H
#define DUNEAPI_H

#include "stbprofile.h"
#include "stbplugin.h"

#include "duneapi_global.h"

#include <QObject>
#include <QWidget>

namespace yasem
{

class DUNEAPISHARED_EXPORT DuneAPI : public QObject, public virtual Plugin, public StbPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.DuneApiPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::Plugin yasem::StbPlugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "DuneHD API implementation for YASEM")
public:



    explicit DuneAPI();


    // Plugin interface
public:
    PLUGIN_ERROR_CODES initialize();
    PLUGIN_ERROR_CODES deinitialize();

public:
    QString getProfileClassId();
    Profile *createProfile(const QString &id);
    void init();
protected:
    void resetObjects();

    QString jsFix;

    // StbPlugin interface
public slots:
    QUrl handleUrl(QUrl &url);
    void applyFixes();
};

}

#endif // DUNEAPI_H
