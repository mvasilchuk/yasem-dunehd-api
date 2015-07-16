#include "duneapistbobject.h"
#include "macros.h"
#include "duneprofile.h"
#include "dunewebobject.h"
#include "profilemanager.h"
#include "dune_enums.h"

#include "mediaplayer.h"
#include "gui.h"
#include "browser.h"
#include "dunescreenobject.h"

#include <QFile>

using namespace yasem;

DuneApiStbObject::DuneApiStbObject(SDK::Plugin* plugin):
    SDK::StbPluginObject(plugin)
{

}

DuneApiStbObject::~DuneApiStbObject()
{

}



SDK::PluginObjectResult DuneApiStbObject::init()
{
    SDK::StbPluginObject::init();// It's reqired to register profile class id

    player(SDK::__get_plugin<SDK::MediaPlayer*>(SDK::ROLE_MEDIA));
    browser(SDK::__get_plugin<SDK::Browser*>(SDK::ROLE_BROWSER));

    QFile res(QString(":/dunehd/js/dunehd.js"));
    res.open(QIODevice::ReadOnly|QIODevice::Text);
    jsFix = res.readAll();

    QList<SDK::StbSubmodel> &submodels = getSubmodels();

    submodels.append(SDK::StbSubmodel(QString::number(Dune_HD_TV_102), "Dune HD TV-102"));

    return SDK::PLUGIN_OBJECT_RESULT_OK;
}

SDK::PluginObjectResult DuneApiStbObject::deinit()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}

QString DuneApiStbObject::getProfileClassId()
{
    return "dunehd";
}

SDK::Profile *DuneApiStbObject::createProfile(const QString &id)
{
    STUB();
    return new DuneProfile(this, id);
}

void DuneApiStbObject::initObject(SDK::WebPage *page)
{
    resetObjects(page);
}

QString DuneApiStbObject::getIcon(const QSize &size)
{
    return "";
}

QUrl DuneApiStbObject::handleUrl(QUrl &url)
{
    return url;
}

void DuneApiStbObject::applyFixes()
{
    // FIXME: use m_page->evalJs();
    //browser()->evalJs(jsFix);
}

void DuneApiStbObject::resetObjects(SDK::WebPage* page)
{
    STUB();
    DuneProfile* profile = dynamic_cast<DuneProfile*>(SDK::ProfileManager::instance()->getActiveProfile());

    QHash<QString, QObject*>& api = getApi();
    api.clear();

    //Q_ASSERT(this->datasource() != NULL);

    QString mimeType = "application/x-dune-stb-api";

    getWebObjects().clear();

    api.insert("screen", new DuneScreenObject(profile, page));


    addWebObject(QString("dunehd_object"), mimeType, QString(""), QString("DuneHD API"), [=](){
        return new DuneWebObject(profile, page);
    });

    qDebug() << "---------------------------------------------------------------";

    qDebug() << "size!!!!" << getWebObjects().size();

    getApi().clear();
}


