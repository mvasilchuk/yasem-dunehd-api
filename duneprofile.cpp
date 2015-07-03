#include "duneprofile.h"
#include "pluginmanager.h"
#include "dune_enums.h"

#include "browserpluginobject.h"
#include "datasourceplugin.h"
#include "mediaplayerpluginobject.h"
#include "dunewebobject.h"
#include "stbpluginobject.h"
#include "datasourcepluginobject.h"
#include "abstractwebpage.h"

#include <QDir>

using namespace yasem;

DuneProfile::DuneProfile(SDK::StbPluginObject *profilePlugin, const QString &id = "") :
    SDK::Profile(profilePlugin, id)
{
    Q_ASSERT(profilePlugin);

    //userAgents.insert("DuneHD", "DuneHD/1.0 (product_id: hdtv_101_qwerty; firmware_version: 111216_2030_devel) arora");
    userAgents.insert("DuneHD", "Opera/9.80 (Linux mips; U; en) Presto/2.10.287 Version/12.00 DuneHD/1.0 (tv102; 150227_0032_b9) CE-HTML/1.0 NETRANGEMMH");

    portalResolutions.insert("720", QSize(720, 576));
    portalResolutions.insert("1280", QSize(1280, 720));
    portalResolutions.insert("1920", QSize(1920, 1080));

    videoResolutions.insert("720p", QSize(1280, 720));
    videoResolutions.insert("1080p", QSize(1920, 1080));

    loadConfigOptions();
}

void DuneProfile::start()
{
    STUB();

    SDK::BrowserPluginObject* browser = m_profile_plugin->browser();
    if(!browser)
    {
        WARN() << "MagProfile::start() : browser not found!";
        return;
    }

    configureKeyMap();

    browser->setUserAgent(get("user_agent", userAgents.value("DuneHD")));
    browser->stb(m_profile_plugin);

    QSize portalSize = portalResolutions.value(datasource()->get(GROUP_SYSTEM, "gmode", "1920"));
    SDK::AbstractWebPage* page = m_profile_plugin->browser()->getFirstPage();
    page->setPageViewportSize(portalSize);

    QString urlString = portal();
    DEBUG() << urlString;
    QUrl portalUrl = QUrl(urlString.replace("~", QDir::homePath()));
    page->load(portalUrl);
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
    SDK::BrowserPluginObject* browser = m_profile_plugin->browser();

    browser->clearKeyEvents();

    browser->registerKeyEvent(SDK::RC_KEY_OK,    DuneWebObject::KEY_ENTER);
    browser->registerKeyEvent(SDK::RC_KEY_LEFT,  DuneWebObject::KEY_LEFT);
    browser->registerKeyEvent(SDK::RC_KEY_RIGHT, DuneWebObject::KEY_RIGHT);
    browser->registerKeyEvent(SDK::RC_KEY_UP,    DuneWebObject::KEY_UP);
    browser->registerKeyEvent(SDK::RC_KEY_DOWN,  DuneWebObject::KEY_DOWN);

    browser->registerKeyEvent(SDK::RC_KEY_BACK,      DuneWebObject::KEY_RETURN);
    browser->registerKeyEvent(SDK::RC_KEY_PAGE_UP,   DuneWebObject::KEY_PPLUS);
    browser->registerKeyEvent(SDK::RC_KEY_PAGE_DOWN, DuneWebObject::KEY_PMINUS);

    browser->registerKeyEvent(SDK::RC_KEY_FAST_FORWARD,  DuneWebObject::KEY_FWD);
    browser->registerKeyEvent(SDK::RC_KEY_REWIND,        DuneWebObject::KEY_REW);
    browser->registerKeyEvent(SDK::RC_KEY_STOP,          DuneWebObject::KEY_STOP);
    browser->registerKeyEvent(SDK::RC_KEY_PLAY_PAUSE,    DuneWebObject::KEY_PLAY);

    browser->registerKeyEvent(SDK::RC_KEY_EXIT, DuneWebObject::KEY_RETURN);
    browser->registerKeyEvent(SDK::RC_KEY_MENU, DuneWebObject::KEY_TOP_MENU);

    browser->registerKeyEvent(SDK::RC_KEY_RED,       DuneWebObject::KEY_A);
    browser->registerKeyEvent(SDK::RC_KEY_GREEN,     DuneWebObject::KEY_B);
    browser->registerKeyEvent(SDK::RC_KEY_YELLOW,    DuneWebObject::KEY_C);
    browser->registerKeyEvent(SDK::RC_KEY_BLUE,      DuneWebObject::KEY_D);
}

QString DuneProfile::portal()
{
    return datasource()->get(GROUP_SYSTEM, PORTAL_ADDRESS);
}

void DuneProfile::loadConfigOptions()
{
    QHash<QString, QString> models;
    models.insert("Dune HD TV-102", "Dune HD TV-102");

    SDK::ProfileConfigGroup &main_group = profileConfiguration.groups.first(); //Main group is created by default in profile

    main_group.options.append(SDK::ConfigOption(SDK::DB_TAG_PROFILE, "Model",
                                                tr("STB Model"),            "Dune HD TV-102",       "options", "", models));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, PORTAL_ADDRESS,
                                                tr("Portal URL"),           "http://", "string"));

    QHash<QString, QString> gmodes;
    gmodes.insert("720", "720x576");
    gmodes.insert("1280", "1280x720");
    gmodes.insert("1920", "1920x1080");
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, "gmode",
                                                tr("Graphical mode"),       "1280",         "options", "", gmodes));

    QHash<QString, QString> vmodes;
    vmodes.insert("720p", "720p (HD)");
    vmodes.insert("1080p", "1080p (FullHD)");
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, "vmode",
                                                tr("Video mode"),           "720p",         "options", "", vmodes));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, PRODUCT_ID,
                                                tr("Product ID"),           "tv102", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, FIRMWARE_VERSION,
                                                tr("Firmware version"),     "150227_0032_b9", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, SERIAL_NUMBER,
                                                tr("Serial number"),        "0000-0000-0000-0000-0000-0000-0000-0000", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, MAC_ADDRESS,
                                                tr("MAC address"),          "A0:0A:BF:00:00:00", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, PRIMARY_MAC_ADDRESS,
                                                tr("Primary MAC address"),  "A0:0A:BF:00:00:00", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, IP_ADDRESS,
                                                tr("IP address"),           "192.168.0.10", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, DNS_1_ADDRESS,
                                                tr("DNS 1 address"),        "8.8.8.8", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, DNS_2_ADDRESS,
                                                tr("DNS 2 address"),        "8.8.4.4", "string"));
    main_group.options.append(SDK::ConfigOption(GROUP_SYSTEM, GATEWAY_ADDRESS,
                                                tr("Gateway"),              "", "string"));

}
