#ifndef DUNEAPISTBOBJECT_H
#define DUNEAPISTBOBJECT_H

#include <stbpluginobject.h>


namespace yasem {

class DuneApiStbObject: public SDK::StbPluginObject
{
    Q_OBJECT
public:

    enum DeviceModel {
        Dune_HD_TV_102
    };

    DuneApiStbObject(SDK::Plugin* plugin);
    ~DuneApiStbObject();

    // AbstractPluginObject interface
public:
    SDK::PluginObjectResult init();
    SDK::PluginObjectResult deinit();

    // StbPluginObject interface
public slots:
    QString getProfileClassId();
    SDK::Profile *createProfile(const QString &id);
    void initObject(SDK::AbstractWebPage *page);
    QString getIcon(const QSize &size);
    QUrl handleUrl(QUrl &url);
    void applyFixes();
    void resetObjects(SDK::AbstractWebPage* page);

private:
    QString jsFix;

};

}

#endif // DUNEAPISTBOBJECT_H
