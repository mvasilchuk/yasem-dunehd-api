#include "duneapistbobject.h"
#include "macros.h"
#include "duneprofile.h"
#include "dunewebobject.h"
#include "profilemanager.h"
#include "dune_enums.h"

#include "mediaplayerpluginobject.h"
#include "guipluginobject.h"
#include "browserpluginobject.h"
#include "dunescreenobject.h"

#include <QFile>

using namespace yasem;

DuneApiStbObject::DuneApiStbObject(Plugin* plugin):
    StbPluginObject(plugin)
{

}

DuneApiStbObject::~DuneApiStbObject()
{

}



PluginObjectResult DuneApiStbObject::init()
{
    StbPluginObject::init();// It's reqired to register profile class id

    player(dynamic_cast<MediaPlayerPluginObject*>(PluginManager::instance()->getByRole(ROLE_MEDIA)));
    gui(dynamic_cast<GuiPluginObject*>(PluginManager::instance()->getByRole(ROLE_GUI)));
    browser(dynamic_cast<BrowserPluginObject*>(PluginManager::instance()->getByRole(ROLE_BROWSER)));

    QFile res(QString(":/dunehd/js/dunehd.js"));
    res.open(QIODevice::ReadOnly|QIODevice::Text);
    jsFix = res.readAll();

    QList<StbSubmodel> &submodels = getSubmodels();

    submodels.append(StbSubmodel(QString::number(Dune_HD_TV_102), "Dune HD TV-102"));

    return PLUGIN_OBJECT_RESULT_OK;
}

PluginObjectResult DuneApiStbObject::deinit()
{
    return PLUGIN_OBJECT_RESULT_OK;
}

QString DuneApiStbObject::getProfileClassId()
{
    return "dunehd";
}

Profile *DuneApiStbObject::createProfile(const QString &id)
{
    STUB();
    return new DuneProfile(this, id);
}

void DuneApiStbObject::initObject(AbstractWebPage *page)
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

void DuneApiStbObject::resetObjects(AbstractWebPage* page)
{
    STUB();
    DuneProfile* profile = dynamic_cast<DuneProfile*>(ProfileManager::instance()->getActiveProfile());

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


