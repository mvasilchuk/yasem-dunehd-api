#ifndef DUNEAPI_H
#define DUNEAPI_H

#include "stbprofile.h"
#include "stbplugin.h"

#include "duneapi_global.h"

#include <QObject>
#include <QWidget>

namespace yasem
{

class AbstractWebPage;

class DUNEAPISHARED_EXPORT DuneAPI : public QObject, public StbPlugin
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
    void init(AbstractWebPage* page);
protected:
    void resetObjects(AbstractWebPage* page);

    QString jsFix;

    // StbPlugin interface
public slots:
    QUrl handleUrl(QUrl &url);
    void applyFixes();

    // StbPlugin interface
public:
    QString getIcon(const QSize &size);

    // Plugin interface
public:
    void register_dependencies();
    void register_roles();
};

}

#endif // DUNEAPI_H
