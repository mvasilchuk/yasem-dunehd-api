#ifndef DUNEAPISTBOBJECT_H
#define DUNEAPISTBOBJECT_H

#include <stbpluginobject.h>


namespace yasem {

class DuneApiStbObject: public StbPluginObject
{
    Q_OBJECT
public:

    enum DeviceModel {
        Dune_HD_TV_102
    };

    DuneApiStbObject(Plugin* plugin);
    ~DuneApiStbObject();

    // AbstractPluginObject interface
public:
    PluginObjectResult init();
    PluginObjectResult deinit();

    // StbPluginObject interface
public slots:
    QString getProfileClassId();
    Profile *createProfile(const QString &id);
    void initObject(AbstractWebPage *page);
    QString getIcon(const QSize &size);
    QUrl handleUrl(QUrl &url);
    void applyFixes();
    void resetObjects(AbstractWebPage* page);

private:
    QString jsFix;

};

}

#endif // DUNEAPISTBOBJECT_H
