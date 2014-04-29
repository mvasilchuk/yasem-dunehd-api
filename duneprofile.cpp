#include "duneprofile.h"
#include "pluginmanager.h"

#include "browserplugin.h"
#include "datasourceplugin.h"
#include "mediasignalsender.h"
#include "mediaplayerplugin.h"
#include "dunewebobject.h"

#include <QDir>

using namespace yasem;

DuneProfile::DuneProfile(StbPlugin *profilePlugin, const QString &id = "") :
    Profile(profilePlugin, id)
{
    Q_ASSERT(profilePlugin);

    //User-Agent: DuneHD/1.0 (product_id: hdtv_101_qwerty; firmware_version: 111216_2030_devel)
    //X-Dune-Serial-Number: 0FC8-B9E9-1F23-0F8E-3CA2-67A7-4D3B-F400
    //X-Dune-Interface-Language: english

    userAgents.insert("DuneHD", "DuneHD/1.0 (product_id: hdtv_101_qwerty; firmware_version: 111216_2030_devel) arora");

    portalResolutions.insert("720", QSize(720, 576));
    portalResolutions.insert("1280", QSize(1280, 720));
    portalResolutions.insert("1920", QSize(1920, 1080));

    videoResolutions.insert("720p", QSize(1280, 720));
    videoResolutions.insert("1080p", QSize(1920, 1080));

    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, PORTAL_ADDRESS,    "http://",             QObject::tr("Portal URL")));
    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, SERIAL_NUMBER,     "0000000000",          QObject::tr("Serial number")));
    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, MAC_ADDRESS,       "00:1A:79:00:00:00",   QObject::tr("MAC address")));
    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, PRIMARY_MAC_ADDRESS, "00:1A:79:00:00:00", QObject::tr("Primary MAC address")));
    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, IP_ADDRESS,       "192.168.0.10",         QObject::tr("IP address")));
    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, DNS_2_ADDRESS,    "8.8.8.8",              QObject::tr("DNS 1 address")));
    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, DNS_1_ADDRESS,    "8.8.4.4",              QObject::tr("DNS 2 address")));
    profileConfig.add(ProfileConfig::Option(GROUP_SYSTEM, GATEWAY_ADDRESS,  "",                     QObject::tr("Gateway")));
}

void DuneProfile::start()
{
    STUB();

    configureKeyMap();

    profilePlugin->browser()->setUserAgent(get("user_agent", userAgents.value("DuneHD")));
    profilePlugin->browser()->stb(profilePlugin);

    QSize portalSize = portalResolutions.value(datasource()->get(DB_TAG_RDIR, "gmode", "1920"));
    profilePlugin->browser()->setInnerSize(portalSize);

    QString urlString = portal();
    DEBUG(urlString);
    QUrl portalUrl = QUrl(urlString.replace("~", QDir::homePath()));
    profilePlugin->browser()->load(portalUrl);
}

void DuneProfile::stop()
{
    STUB();
}

void DuneProfile::initDefaults()
{
    STUB();
}

void DuneProfile::configureKeyMap()
{
    STUB();
    BrowserPlugin* browser = profilePlugin->browser();

    browser->clearKeyEvents();

    browser->registerKeyEvent(RC_KEY_OK,    KEY_ENTER,   KEY_ENTER );
    browser->registerKeyEvent(RC_KEY_LEFT,  KEY_LEFT,    KEY_LEFT);
    browser->registerKeyEvent(RC_KEY_RIGHT, KEY_RIGHT,   KEY_RIGHT);
    browser->registerKeyEvent(RC_KEY_UP,    KEY_UP,      KEY_UP);
    browser->registerKeyEvent(RC_KEY_DOWN,  KEY_DOWN,    KEY_DOWN);

    browser->registerKeyEvent(RC_KEY_BACK,      KEY_RETURN,  KEY_RETURN);
    browser->registerKeyEvent(RC_KEY_PAGE_UP,   KEY_PPLUS,   KEY_PPLUS);
    browser->registerKeyEvent(RC_KEY_PAGE_DOWN, KEY_PMINUS,  KEY_PMINUS);

    browser->registerKeyEvent(RC_KEY_FAST_FORWARD,  KEY_FWD,     KEY_FWD);
    browser->registerKeyEvent(RC_KEY_REWIND,        KEY_REW,     KEY_REW);
    browser->registerKeyEvent(RC_KEY_STOP,          KEY_STOP,    KEY_STOP);
    browser->registerKeyEvent(RC_KEY_PLAY_PAUSE,    KEY_PLAY,    KEY_PLAY);

    browser->registerKeyEvent(RC_KEY_EXIT, KEY_RETURN,   KEY_RETURN);
    browser->registerKeyEvent(RC_KEY_MENU, KEY_TOP_MENU, KEY_TOP_MENU);

    browser->registerKeyEvent(RC_KEY_RED,       KEY_A, KEY_A);
    browser->registerKeyEvent(RC_KEY_GREEN,     KEY_B, KEY_B);
    browser->registerKeyEvent(RC_KEY_YELLOW,    KEY_C, KEY_C);
    browser->registerKeyEvent(RC_KEY_BLUE,      KEY_D, KEY_D);
}

QString DuneProfile::portal()
{
    return datasource()->get(GROUP_SYSTEM, PORTAL_ADDRESS);
}
