#ifndef DUNEWEBOBJECT_H
#define DUNEWEBOBJECT_H

#include "stbprofile.h"
#include "dune_enums.h"

#include <QWidget>

namespace yasem
{

static const QString GROUP_SYSTEM = "SYSTEM";
static const QString GROUP_USER = "USER";

static const QString PORTAL_ADDRESS         = "portal";
static const QString API_VERSION            = "api-version";
static const QString PRODUCT_ID             = "product-id";
static const QString SERIAL_NUMBER          = "serial-number";
static const QString FIRMWARE_VERSION       = "firmware-version";
static const QString MAC_ADDRESS            = "mac-address";
static const QString PRIMARY_MAC_ADDRESS    = "primary-mac-address";
static const QString IP_ADDRESS             = "ip-address";
static const QString DNS_1_ADDRESS          = "dns-1-address";
static const QString DNS_2_ADDRESS          = "dns-2-address";
static const QString GATEWAY_ADDRESS        = "gateway-address";

class DuneWebObject : public QWidget
{
    Q_OBJECT
public:

    enum StandbyModes {
        STANDBY_MODE_OFF,
        STANDBY_MODE_ON
    };

    Q_PROPERTY(int STANDBY_MODE_ON  MEMBER STANDBY_MODE_ON  CONSTANT FINAL)
    Q_PROPERTY(int STANDBY_MODE_OFF MEMBER STANDBY_MODE_OFF CONSTANT FINAL)

    enum DigitalAudioOutput {
        DIGITAL_AUDIO_OUTPUT_PCM,
        DIGITAL_AUDIO_OUTPUT_BITSTREAM
    };

    Q_PROPERTY(int DIGITAL_AUDIO_OUTPUT_PCM       MEMBER DIGITAL_AUDIO_OUTPUT_PCM       CONSTANT FINAL)
    Q_PROPERTY(int DIGITAL_AUDIO_OUTPUT_BITSTREAM MEMBER DIGITAL_AUDIO_OUTPUT_BITSTREAM CONSTANT FINAL)

    enum VideoConnector {
        VIDEO_CONNECTOR_HDMI,
        VIDEO_CONNECTOR_COMPONENT,
        VIDEO_CONNECTOR_COMPOSITE,
        VIDEO_CONNECTOR_SVIDEO
    };

    Q_PROPERTY(int VIDEO_CONNECTOR_HDMI      MEMBER VIDEO_CONNECTOR_HDMI      CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_CONNECTOR_COMPONENT MEMBER VIDEO_CONNECTOR_COMPONENT CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_CONNECTOR_COMPOSITE MEMBER VIDEO_CONNECTOR_COMPOSITE CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_CONNECTOR_SVIDEO    MEMBER VIDEO_CONNECTOR_SVIDEO    CONSTANT FINAL)

    enum VideoMode {
        VIDEO_MODE_NTSC,
        VIDEO_MODE_480P,
        VIDEO_MODE_PAL,
        VIDEO_MODE_576P,
        VIDEO_MODE_720P50,
        VIDEO_MODE_720P60,
        VIDEO_MODE_1080I50,
        VIDEO_MODE_1080I60,
        VIDEO_MODE_1080P23,
        VIDEO_MODE_1080P24,
        VIDEO_MODE_1080P50,
        VIDEO_MODE_1080P60
    };

    Q_PROPERTY(int VIDEO_MODE_NTSC    MEMBER VIDEO_MODE_NTSC    CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_480P    MEMBER VIDEO_MODE_480P    CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_PAL     MEMBER VIDEO_MODE_PAL     CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_576P    MEMBER VIDEO_MODE_576P    CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_720P50  MEMBER VIDEO_MODE_720P50  CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_720P60  MEMBER VIDEO_MODE_720P60  CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_1080I50 MEMBER VIDEO_MODE_1080I50 CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_1080I60 MEMBER VIDEO_MODE_1080I60 CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_1080P23 MEMBER VIDEO_MODE_1080P23 CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_1080P24 MEMBER VIDEO_MODE_1080P24 CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_1080P50 MEMBER VIDEO_MODE_1080P50 CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_MODE_1080P60 MEMBER VIDEO_MODE_1080P60 CONSTANT FINAL)

    enum AspectRatio {
        ASPECT_RATIO_AUTO,
        ASPECT_RATIO_16_9,
        ASPECT_RATIO_4_3
    };

    Q_PROPERTY(int ASPECT_RATIO_AUTO MEMBER ASPECT_RATIO_AUTO CONSTANT FINAL)
    Q_PROPERTY(int ASPECT_RATIO_16_9 MEMBER ASPECT_RATIO_16_9 CONSTANT FINAL)
    Q_PROPERTY(int ASPECT_RATIO_4_3  MEMBER ASPECT_RATIO_4_3  CONSTANT FINAL)

    enum VideoZoom {
        VIDEO_ZOOM_NORMAL,
        VIDEO_ZOOM_ENLARGE,
        VIDEO_ZOOM_MAKE_WIDER,
        VIDEO_ZOOM_NON_LINEAR_STRETCH,
        VIDEO_ZOOM_NON_LINEAR_STRETCH_TO_FULL_SCREEN,
        VIDEO_ZOOM_MAKE_TALLER,
        VIDEO_ZOOM_CUT_EDGES,
        VIDEO_ZOOM_FULL_SCREEN,
        VIDEO_ZOOM_STRETCH_TO_FULL_SCREEN
    };

    Q_PROPERTY(int VIDEO_ZOOM_NORMAL                            MEMBER VIDEO_ZOOM_NORMAL                            CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_ENLARGE                           MEMBER VIDEO_ZOOM_ENLARGE                           CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_MAKE_WIDER                        MEMBER VIDEO_ZOOM_MAKE_WIDER                        CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_NON_LINEAR_STRETCH                MEMBER VIDEO_ZOOM_NON_LINEAR_STRETCH                CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_NON_LINEAR_STRETCH_TO_FULL_SCREEN MEMBER VIDEO_ZOOM_NON_LINEAR_STRETCH_TO_FULL_SCREEN CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_MAKE_TALLER                       MEMBER VIDEO_ZOOM_MAKE_TALLER                       CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_CUT_EDGES                         MEMBER VIDEO_ZOOM_CUT_EDGES                         CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_FULL_SCREEN                       MEMBER VIDEO_ZOOM_FULL_SCREEN                       CONSTANT FINAL)
    Q_PROPERTY(int VIDEO_ZOOM_STRETCH_TO_FULL_SCREEN            MEMBER VIDEO_ZOOM_STRETCH_TO_FULL_SCREEN            CONSTANT FINAL)

    enum ScreenSize {
        SCREEN_SIZE_AUTO,
        SCREEN_SIZE_720_480,
        SCREEN_SIZE_720_576,
        SCREEN_SIZE_1280_720,
        SCREEN_SIZE_1920_1080
    };

    Q_PROPERTY(int SCREEN_SIZE_AUTO      MEMBER SCREEN_SIZE_AUTO      CONSTANT FINAL)
    Q_PROPERTY(int SCREEN_SIZE_720_480   MEMBER SCREEN_SIZE_720_480   CONSTANT FINAL)
    Q_PROPERTY(int SCREEN_SIZE_720_576   MEMBER SCREEN_SIZE_720_576   CONSTANT FINAL)
    Q_PROPERTY(int SCREEN_SIZE_1280_720  MEMBER SCREEN_SIZE_1280_720  CONSTANT FINAL)
    Q_PROPERTY(int SCREEN_SIZE_1920_1080 MEMBER SCREEN_SIZE_1920_1080 CONSTANT FINAL)

    enum ExitBrowserMode {
        EXIT_BROWSER_MODE_RESTART,
        EXIT_BROWSER_MODE_STANDBY,
        EXIT_BROWSER_MODE_POWER_OFF,
        EXIT_BROWSER_MODE_CLOSE
    };

    Q_PROPERTY(int EXIT_BROWSER_MODE_RESTART   MEMBER EXIT_BROWSER_MODE_RESTART   CONSTANT FINAL)
    Q_PROPERTY(int EXIT_BROWSER_MODE_STANDBY   MEMBER EXIT_BROWSER_MODE_STANDBY   CONSTANT FINAL)
    Q_PROPERTY(int EXIT_BROWSER_MODE_POWER_OFF MEMBER EXIT_BROWSER_MODE_POWER_OFF CONSTANT FINAL)
    Q_PROPERTY(int EXIT_BROWSER_MODE_CLOSE     MEMBER EXIT_BROWSER_MODE_CLOSE     CONSTANT FINAL)

    struct screenshotParameters{
        int areaX;
        int areaY;
        int areaWidth;
        int areaHeight;
        int imageWidth;
        int imageHeight;
        QString imageName;
    };

    enum NetworkConnection {
        NETWORK_CONNECTION_ETHERNET,
        NETWORK_CONNECTION_GIGAETH,
        NETWORK_CONNECTION_WIFI,
        NETWORK_CONNECTION_PPPOE,
        NETWORK_CONNECTION_NONE
    };

    enum NetworkMode {
        NETWORK_MODE_AUTO,
        NETWORK_MODE_AUTO_MANUAL_DNS,
        NETWORK_MODE_MANUAL,
    };

    enum WifiSecurity {
        WIFI_SECURITY_NONE,
        WIFI_SECURITY_WEP_64_BIT_ASCII,
        WIFI_SECURITY_WEP_64_BIT_HEX,
        WIFI_SECURITY_WEP_128_BIT_ASCII,
        WIFI_SECURITY_WEP_128_BIT_HEX,
        WIFI_SECURITY_WPA_TKIP,
        WIFI_SECURITY_WPA_AES,
        WIFI_SECURITY_WPA2_TKIP,
        WIFI_SECURITY_WPA2_AES
    };

    enum WifiApMode {
        WIFI_AP_MODE_DISABLED,
        WIFI_AP_MODE_ROUTER
    };

    enum PppoeDnsMode {
        PPPOE_DNS_MODE_AUTO,
        PPPOE_DNS_MODE_MANUAL
    };

    enum PppoeDhcp {
        PPPOE_DHCP_DISABLED,
        PPPOE_DHCP_ENABLED
    };

    struct NetworkConfiguration
    {
        NetworkConnection connection;
        NetworkMode mode;
        QString ipAddress;
        QString mask;
        QString gateway;
        QString dns1;
        QString dns2;
        QString wifiSsid;
        WifiSecurity wifiSecurity;
        QString wifiPassword;
        WifiApMode wifiApMode;
        QString wifiApSsid;
        QString wifiApPassword;
        QString pppoeLogin;
        QString pppoePassword;
        PppoeDnsMode pppoeDnsMode;
        PppoeDhcp pppoeDhcp;
    };

    enum Timezone {
       TIME_ZONE_GMT_MINUS_12_00,
       TIME_ZONE_GMT_MINUS_11_00,
       TIME_ZONE_GMT_MINUS_10_00,
       TIME_ZONE_GMT_MINUS_09_00,
       TIME_ZONE_GMT_MINUS_08_00,
       TIME_ZONE_GMT_MINUS_07_00,
       TIME_ZONE_GMT_MINUS_06_00,
       TIME_ZONE_GMT_MINUS_05_00,
       TIME_ZONE_GMT_MINUS_04_00,
       TIME_ZONE_GMT_MINUS_03_30,
       TIME_ZONE_GMT_MINUS_03_00,
       TIME_ZONE_GMT_MINUS_02_00,
       TIME_ZONE_GMT_MINUS_01_00,
       TIME_ZONE_GMT,
       TIME_ZONE_GMT_PLUS_01_00,
       TIME_ZONE_GMT_PLUS_02_00,
       TIME_ZONE_GMT_PLUS_03_00,
       TIME_ZONE_GMT_PLUS_03_30,
       TIME_ZONE_GMT_PLUS_04_00,
       TIME_ZONE_GMT_PLUS_04_30,
       TIME_ZONE_GMT_PLUS_05_00,
       TIME_ZONE_GMT_PLUS_05_30,
       TIME_ZONE_GMT_PLUS_05_45,
       TIME_ZONE_GMT_PLUS_06_00,
       TIME_ZONE_GMT_PLUS_06_30,
       TIME_ZONE_GMT_PLUS_07_00,
       TIME_ZONE_GMT_PLUS_08_00,
       TIME_ZONE_GMT_PLUS_09_00,
       TIME_ZONE_GMT_PLUS_09_30,
       TIME_ZONE_GMT_PLUS_10_00,
       TIME_ZONE_GMT_PLUS_11_00,
       TIME_ZONE_GMT_PLUS_12_00,
       TIME_ZONE_GMT_PLUS_13_00,
       TIME_ZONE_AUTO
    };

    enum DaylightSaving {
        DAYLIGHT_SAVING_TIME_OFF,
        DAYLIGHT_SAVING_TIME_AUTO
    };

    struct TimeRange
    {
        int startTime;
        int endTime;
    };


    explicit DuneWebObject(Profile *profile, QWidget *parent = 0);

    int getTest() { return 10; }



signals:

public slots:
    bool init();

    QString getApiVersion();
    QString getProductId();
    QString getSerialNumber();
    QString getFirmwareVersion();
    QString getMacAddress();
    QString getPrimaryMacAddress();
    QString getIpAddress();
    QString getDns1Address();
    QString getDns2Address();
    QString getGatewayAddress();
    int log(const QString &message);
    int reboot();
    int getStandbyMode();
    bool fileExists(const QString &path);
    QString getUserSetting(const QString &key);
    int setUserSetting(const QString &key, const QString &value);
    QString getFirmwareUpgradeUrl();
    QString getFirmwareUpgradeVersion();
    int startFirmwareUpgrade(const QString &url, const QString &version);
    int resetSettings(int reset);
    int getPlaybackState();
    int getColorKey(int key);
    int getColorKey();
    int setPlaybackEventCallback(const QString &callback);
    int play(const QString &mediaUrl);
    int stop();
    bool canPause();
    int pause();
    int resume();
    int setInitialSpeed(int speed);
    int getSpeed();
    int setSpeed(int speed);
    bool hasLength();
    int getLengthInSeconds();
    int setInitialPositionInSeconds(int seconds);
    int getPositionInSeconds();
    int setPositionInSeconds(int seconds);
    int setSpeedAndPositionInSeconds(int speed, int seconds);
    int getVolume();
    int setVolume(int volume);
    bool isMuteEnabled();
    int enableMute();
    int disableMute();
    int setInitialAudioPid(int pid);
    QString getAudioTracksDescription();
    int getAudioTrack();
    int setAudioTrack(int track);
    int getDigitalAudioOutput();
    int setDigitalAudioOutput(int output);
    QString getDefaultAudioLanguage();
    QString setDefaultAudioLanguage(const QString &language);
    QString getSubtitleTracksDescription();
    int getSubtitleTrack();
    int setSubtitleTrack(int track);
    bool isTeletextAvailable();
    bool isTeletextEnabled();
    int enableTeletext();
    int disableTeletext();
    int getTeletextPageNumber();
    int setTeletextPageNumber(int page);
    bool isTeletextMixModeEnabled();
    int enableTeletextMixMode();
    int disableTeletextMixMode();
    int inputTeletextKey(int key);
    bool deinit();
    int setColorKey(int color);
    int disableColorKey();
    bool isVideoEnabled();
    int enableVideo();
    int disableVideo();
    bool isVideoOnTop();
    int enableVideoOnTop();
    int disableVideoOnTop();
    bool isWindowFullScreen();
    int enableWindowFullScreen();
    int getWindowRectX();
    int getWindowRectY();
    int getWindowRectWidth();
    int getWindowRectHeight();
    int setWindowRect(int x, int y, int width, int height);
    int getClipRectX();
    int getClipRectY();
    int getClipRectWidth();
    int getClipRectHeight();
    int setClipRect(int x, int y, int width, int height);
    int getVideoWidth();
    int getVideoHeight();
    int getVideoConnector();
    int setVideoConnector(int connector);
    int getVideoMode();
    int setVideoMode(int mode);
    int getAspectRatio();
    int setAspectRatio(int ratio);
    int getVideoZoom();
    int setVideoZoom(int zoom);
    int exitBrowser(int mode);
    int launchNativeUi();
    int launchNativeUi(const QString &returnUrl);
    int launchNativeUiExt(const QString &nativeUrl, const QString &returnUrl);
    QString getBrowserProxies();
    int setBrowserProxy(int type, const QString &host, int port, const QString &user, const QString &password, const QString &exceptions);
    int removeBrowserProxies();
    int getRcAutoRepeatPeriod();
    int setRcAutoRepeatPeriod(int period);
    QString getRcAutoRepeatKeys();
    int setRcAutoRepeatKeys(int keys[]);
    int saveScreenshot(screenshotParameters params);
    bool isStorageAvailable();
    QString getMainStorageDescription();
    int getFolderItemsNumber(const QString &mediaUrl);
    QString getFolderContent();
    int getBrowserAlphaLevel();
    int setBrowserAlphaLevel(int level);
    int getScreenSize();
    int setScreenSize(int size);
    QString getHomePage();
    int setNetworkConfiguration(NetworkConfiguration config);
    QString getNetworkConfiguration();
    int scanForWifiNetworks(int timeout);
    QString getWifiNetworksDescription();
    int getTimeZone();
    int setTimeZone(int zone);
    int getDaylightSavingTime();
    int setDaylightSavingTime(int time);
    int enableEpgFromMpegTsStream();
    int disableEpgFromMpegTsStream();
    QString getEpgFromMpegTsStream(const QString &serviceUrl, TimeRange timeRange);
    int getChannelsNumber();
    QString getChannelsDescription(int startIndex, int maxCount);

protected:


    Profile* profile;

};

}

#endif // DUNEWEBOBJECT_H
