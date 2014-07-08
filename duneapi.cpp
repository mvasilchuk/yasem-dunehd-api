#include "duneapi.h"
#include "macros.h"
#include "duneprofile.h"
#include "dunewebobject.h"
#include "profilemanager.h"

#include "mediaplayerplugin.h"
#include "guiplugin.h"
#include "browserplugin.h"

#include <QFile>

using namespace yasem;

DuneAPI::DuneAPI()
{
    QFile res(QString(":/dunehd/js/dunehd.js"));
    res.open(QIODevice::ReadOnly|QIODevice::Text);
    jsFix = res.readAll();
}

PLUGIN_ERROR_CODES DuneAPI::initialize()
{
    player(dynamic_cast<MediaPlayerPlugin*>(PluginManager::instance()->getByRole("mediaplayer")));
    gui(dynamic_cast<GuiPlugin*>(PluginManager::instance()->getByRole("gui")));
    browser(dynamic_cast<BrowserPlugin*>(PluginManager::instance()->getByRole("browser")));
    return PLUGIN_ERROR_NO_ERROR;
}

PLUGIN_ERROR_CODES DuneAPI::deinitialize()
{
    STUB();
    return PLUGIN_ERROR_NO_ERROR;
}


QString DuneAPI::getProfileClassId()
{
    return "dunehd";
}

Profile *DuneAPI::createProfile(const QString &id)
{
    STUB();
    return new DuneProfile(this, id);
}

void DuneAPI::init()
{
    resetObjects();
}

void DuneAPI::resetObjects()
{
    STUB();
    Profile* profile = ProfileManager::instance()->getActiveProfile();
    //Q_ASSERT(this->datasource() != NULL);

    QString mimeType = "application/x-dune-stb-api";

    webObjects.clear();


    addWebObject(QString("dunehd_object"), mimeType, QString(""), QString("DuneHD API"), [=](){
        return new DuneWebObject(profile);
    });

    qDebug() << "---------------------------------------------------------------";

    qDebug() << "size!!!!" << webObjects.size();

    api.clear();
}

QUrl DuneAPI::handleUrl(QUrl &url)
{
    return url;
}

void DuneAPI::applyFixes()
{
    browser()->evalJs(jsFix);
}



QString DuneAPI::getIcon(const QSize &size = QSize())
{
    return "";
}
