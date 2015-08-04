#ifndef DUNEWEBOBJECT_H
#define DUNEWEBOBJECT_H

#include "dune_enums.h"

#include <QWidget>

namespace yasem
{
class DuneProfile;

namespace SDK {
class Profile;
class WebPage;
class MediaPlayer;
class Browser;
}

class DuneWebObject : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(int KEY_RETURN MEMBER KEY_RETURN CONSTANT FINAL)
    Q_PROPERTY(int KEY_CLEAR MEMBER KEY_CLEAR CONSTANT FINAL)
    Q_PROPERTY(int KEY_ENTER MEMBER KEY_ENTER CONSTANT FINAL)
    Q_PROPERTY(int KEY_POPUP MEMBER KEY_POPUP CONSTANT FINAL)
    Q_PROPERTY(int KEY_PAUSE MEMBER KEY_PAUSE CONSTANT FINAL)
    Q_PROPERTY(int KEY_PPLUS MEMBER KEY_PPLUS CONSTANT FINAL)
    Q_PROPERTY(int KEY_PMINUS MEMBER KEY_PMINUS CONSTANT FINAL)
    Q_PROPERTY(int KEY_LEFT MEMBER KEY_LEFT CONSTANT FINAL)
    Q_PROPERTY(int KEY_UP MEMBER KEY_UP CONSTANT FINAL)
    Q_PROPERTY(int KEY_RIGHT MEMBER KEY_RIGHT CONSTANT FINAL)
    Q_PROPERTY(int KEY_DOWN MEMBER KEY_DOWN CONSTANT FINAL)
    Q_PROPERTY(int KEY_SELECT MEMBER KEY_SELECT CONSTANT FINAL)
    Q_PROPERTY(int KEY_0 MEMBER KEY_0 CONSTANT FINAL)
    Q_PROPERTY(int KEY_1 MEMBER KEY_1 CONSTANT FINAL)
    Q_PROPERTY(int KEY_2 MEMBER KEY_2 CONSTANT FINAL)
    Q_PROPERTY(int KEY_3 MEMBER KEY_3 CONSTANT FINAL)
    Q_PROPERTY(int KEY_4 MEMBER KEY_4 CONSTANT FINAL)
    Q_PROPERTY(int KEY_5 MEMBER KEY_5 CONSTANT FINAL)
    Q_PROPERTY(int KEY_6 MEMBER KEY_6 CONSTANT FINAL)
    Q_PROPERTY(int KEY_7 MEMBER KEY_7 CONSTANT FINAL)
    Q_PROPERTY(int KEY_8 MEMBER KEY_8 CONSTANT FINAL)
    Q_PROPERTY(int KEY_9 MEMBER KEY_9 CONSTANT FINAL)
    Q_PROPERTY(int KEY_ANGLE MEMBER KEY_ANGLE CONSTANT FINAL)
    Q_PROPERTY(int KEY_SEARCH MEMBER KEY_SEARCH CONSTANT FINAL)
    Q_PROPERTY(int KEY_MUTE MEMBER KEY_MUTE CONSTANT FINAL)
    Q_PROPERTY(int KEY_VMINUS MEMBER KEY_VMINUS CONSTANT FINAL)
    Q_PROPERTY(int KEY_VPLUS MEMBER KEY_VPLUS CONSTANT FINAL)
    Q_PROPERTY(int KEY_NEXT MEMBER KEY_NEXT CONSTANT FINAL)
    Q_PROPERTY(int KEY_PREV MEMBER KEY_PREV CONSTANT FINAL)
    Q_PROPERTY(int KEY_STOP MEMBER KEY_STOP CONSTANT FINAL)
    Q_PROPERTY(int KEY_A MEMBER KEY_A CONSTANT FINAL)
    Q_PROPERTY(int KEY_B MEMBER KEY_B CONSTANT FINAL)
    Q_PROPERTY(int KEY_C MEMBER KEY_C CONSTANT FINAL)
    Q_PROPERTY(int KEY_D MEMBER KEY_D CONSTANT FINAL)
    Q_PROPERTY(int KEY_URL MEMBER KEY_URL CONSTANT FINAL)
    Q_PROPERTY(int KEY_EJECT MEMBER KEY_EJECT CONSTANT FINAL)
    Q_PROPERTY(int KEY_INFO MEMBER KEY_INFO CONSTANT FINAL)
    Q_PROPERTY(int KEY_TOP_MENU MEMBER KEY_TOP_MENU CONSTANT FINAL)
    Q_PROPERTY(int KEY_SETUP MEMBER KEY_SETUP CONSTANT FINAL)
    Q_PROPERTY(int KEY_MODE MEMBER KEY_MODE CONSTANT FINAL)
    Q_PROPERTY(int KEY_SLOW MEMBER KEY_SLOW CONSTANT FINAL)
    Q_PROPERTY(int KEY_REW MEMBER KEY_REW CONSTANT FINAL)
    Q_PROPERTY(int KEY_FWD MEMBER KEY_FWD CONSTANT FINAL)
    Q_PROPERTY(int KEY_SUBTITLE MEMBER KEY_SUBTITLE CONSTANT FINAL)
    Q_PROPERTY(int KEY_AUDIO MEMBER KEY_AUDIO CONSTANT FINAL)
    Q_PROPERTY(int KEY_REC MEMBER KEY_REC CONSTANT FINAL)
    Q_PROPERTY(int KEY_DUNE MEMBER KEY_DUNE CONSTANT FINAL)
    Q_PROPERTY(int KEY_PLAY MEMBER KEY_PLAY CONSTANT FINAL)
    Q_PROPERTY(int KEY_ZOOM MEMBER KEY_ZOOM CONSTANT FINAL)

public:


    enum Keys {
        KEY_RETURN = 8,
        KEY_CLEAR = 12,
        KEY_ENTER = 13,
        KEY_POPUP = 18,
        KEY_PAUSE = 19,
        KEY_PPLUS = 33,
        KEY_PMINUS = 34,
        KEY_LEFT  = 37,
        KEY_UP = 38,
        KEY_RIGHT = 39,
        KEY_DOWN = 40,
        KEY_SELECT = 41,
        KEY_0 = 48,
        KEY_1 = 49,
        KEY_2 = 50,
        KEY_3 = 51,
        KEY_4 = 52,
        KEY_5 = 53,
        KEY_6 = 54,
        KEY_7 = 55,
        KEY_8 = 56,
        KEY_9 = 57,
        KEY_ANGLE = 168,
        KEY_SEARCH = 170,
        KEY_MUTE = 173,
        KEY_VMINUS = 174,
        KEY_VPLUS = 175,
        KEY_NEXT = 176,
        KEY_PREV = 177,
        KEY_STOP = 178,
        KEY_A    = 193,
        KEY_B    = 194,
        KEY_C    = 195,
        KEY_D    = 196,
        KEY_URL  = 197,
        KEY_EJECT = 198,
        KEY_INFO = 199,
        KEY_TOP_MENU = 200,
        KEY_SETUP = 201,
        KEY_MODE = 202,
        KEY_SLOW = 203,
        KEY_REW = 204,
        KEY_FWD = 205,
        KEY_SUBTITLE = 206,
        KEY_AUDIO = 207,
        KEY_REC = 208,
        KEY_DUNE = 209,
        KEY_PLAY = 250,
        KEY_ZOOM = 251
    };

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

    enum PlaybackEvent {
        PLAYBACK_EVENT_NO_EVENT                           = 1,
        PLAYBACK_EVENT_MEDIA_DESCRIPTION_CHANGED          = 2,
        PLAYBACK_EVENT_MEDIA_READ_STALLED                 = 3,
        PLAYBACK_EVENT_END_OF_MEDIA                       = 4,
        PLAYBACK_EVENT_ERROR_MEDIA_FORMAT_NOT_SUPPORTED   = 5,
        PLAYBACK_EVENT_ERROR_INTERNAL_ERROR               = 6,
        PLAYBACK_EVENT_ERROR_MEDIA_READ_FAILED            = 7,
        PLAYBACK_EVENT_ERROR_MEDIA_OPEN_FAILED            = 8,
        PLAYBACK_EVENT_EXTERNAL_ACTION                    = 9,
        PLAYBACK_EVENT_ERROR_MEDIA_PROTOCOL_NOT_SUPPORTED = 10,
        PLAYBACK_EVENT_ERROR_MEDIA_PERMISSION_DENIED      = 11,
        PLAYBACK_EVENT_SCRAMBLING_STATUS_CHANGED          = 12
    };

    Q_PROPERTY(int PLAYBACK_EVENT_NO_EVENT                              MEMBER PLAYBACK_EVENT_NO_EVENT                              CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_MEDIA_DESCRIPTION_CHANGED             MEMBER PLAYBACK_EVENT_MEDIA_DESCRIPTION_CHANGED             CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_MEDIA_READ_STALLED                    MEMBER PLAYBACK_EVENT_MEDIA_READ_STALLED                    CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_END_OF_MEDIA                          MEMBER PLAYBACK_EVENT_END_OF_MEDIA                          CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_ERROR_MEDIA_FORMAT_NOT_SUPPORTED      MEMBER PLAYBACK_EVENT_ERROR_MEDIA_FORMAT_NOT_SUPPORTED      CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_ERROR_INTERNAL_ERROR                  MEMBER PLAYBACK_EVENT_ERROR_INTERNAL_ERROR                  CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_ERROR_MEDIA_READ_FAILED               MEMBER PLAYBACK_EVENT_ERROR_MEDIA_READ_FAILED               CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_ERROR_MEDIA_OPEN_FAILED               MEMBER PLAYBACK_EVENT_ERROR_MEDIA_OPEN_FAILED               CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_EXTERNAL_ACTION                       MEMBER PLAYBACK_EVENT_EXTERNAL_ACTION                       CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_ERROR_MEDIA_PROTOCOL_NOT_SUPPORTED    MEMBER PLAYBACK_EVENT_ERROR_MEDIA_PROTOCOL_NOT_SUPPORTED    CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_ERROR_MEDIA_PERMISSION_DENIED         MEMBER PLAYBACK_EVENT_ERROR_MEDIA_PERMISSION_DENIED         CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_EVENT_SCRAMBLING_STATUS_CHANGED             MEMBER PLAYBACK_EVENT_SCRAMBLING_STATUS_CHANGED             CONSTANT FINAL)

    enum PlaybackState {
        PLAYBACK_STATE_UNDEFINED       = -1,
        PLAYBACK_STATE_STOPPED         = 1,
        PLAYBACK_STATE_INITIALIZING    = 2,
        PLAYBACK_STATE_PLAYING         = 3,
        PLAYBACK_STATE_PAUSED          = 4,
        PLAYBACK_STATE_SEEKING         = 5,
        PLAYBACK_STATE_BUFFERING       = 6,
        PLAYBACK_STATE_FINISHED        = 7,
        PLAYBACK_STATE_DEINITIALIZING  = 8
    };

    Q_PROPERTY(int PLAYBACK_STATE_UNDEFINED         MEMBER PLAYBACK_STATE_UNDEFINED           CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_STOPPED           MEMBER PLAYBACK_STATE_STOPPED           CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_INITIALIZING      MEMBER PLAYBACK_STATE_INITIALIZING      CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_PLAYING           MEMBER PLAYBACK_STATE_PLAYING           CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_PAUSED            MEMBER PLAYBACK_STATE_PAUSED            CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_SEEKING           MEMBER PLAYBACK_STATE_SEEKING           CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_BUFFERING         MEMBER PLAYBACK_STATE_BUFFERING         CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_FINISHED          MEMBER PLAYBACK_STATE_FINISHED          CONSTANT FINAL)
    Q_PROPERTY(int PLAYBACK_STATE_DEINITIALIZING    MEMBER PLAYBACK_STATE_DEINITIALIZING    CONSTANT FINAL)

    struct TimeRange
    {
        int startTime;
        int endTime;
    };

    explicit DuneWebObject(DuneProfile *profile, SDK::WebPage* page, QWidget *parent = 0);
    virtual ~DuneWebObject();

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
    SDK::WebPage* m_page;
    SDK::Browser* m_browser;
    DuneProfile* m_profile;
    SDK::MediaPlayer* m_player;

    DuneProfile* profile();
    SDK::MediaPlayer* player();
    QString m_event_callback_string;

};

}

#endif // DUNEWEBOBJECT_H
