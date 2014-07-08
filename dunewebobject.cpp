#include "dunewebobject.h"

#include "enums.h"
#include "macros.h"

using namespace yasem;

DuneWebObject::DuneWebObject(Profile *profile, QWidget *parent) :
    QWidget(parent)
{
    Q_ASSERT(profile != NULL);
    this->profile = profile;
}

bool DuneWebObject::init()
{
    STUB();
    return true;
}

bool DuneWebObject::deinit()
{
    STUB();
    return true;
}

// -------------------------------- SYSTEM

QString DuneWebObject::getApiVersion()
{
    STUB();
    return profile->get(GROUP_SYSTEM, API_VERSION);
}

QString DuneWebObject::getProductId()
{
    STUB();
    return profile->get(GROUP_SYSTEM, PRODUCT_ID);
}

QString DuneWebObject::getSerialNumber()
{
    STUB();
    return profile->get(GROUP_SYSTEM, SERIAL_NUMBER);
}

QString DuneWebObject::getFirmwareVersion()
{
    STUB();
    return profile->get(GROUP_SYSTEM, FIRMWARE_VERSION);
}

QString DuneWebObject::getMacAddress()
{
    STUB();
    return profile->get(GROUP_SYSTEM, MAC_ADDRESS);
}

QString DuneWebObject::getPrimaryMacAddress()
{
    STUB();
    return profile->get(GROUP_SYSTEM, PRIMARY_MAC_ADDRESS);
}

QString DuneWebObject::getIpAddress()
{
    STUB();
    return profile->get(GROUP_SYSTEM, IP_ADDRESS);
}

QString DuneWebObject::getDns1Address()
{
    STUB();
    return profile->get(GROUP_SYSTEM, DNS_1_ADDRESS);
}

QString DuneWebObject::getDns2Address()
{
    STUB();
    return profile->get(GROUP_SYSTEM, DNS_2_ADDRESS);
}

QString DuneWebObject::getGatewayAddress()
{
    STUB();
    return profile->get(GROUP_SYSTEM, GATEWAY_ADDRESS);
}

int DuneWebObject::log(const QString &message)
{
    DEBUG() << message;
    return 0;
}

int DuneWebObject::reboot()
{
    STUB();
    return 0;
}

int DuneWebObject::getStandbyMode()
{
    STUB();
    return 0;
}

bool DuneWebObject::fileExists(const QString &path)
{
    STUB() << path;
    return true;
}

QString DuneWebObject::getUserSetting(const QString &key)
{
    STUB() << key;
    return profile->get(GROUP_USER, key);
}

int DuneWebObject::setUserSetting(const QString &key, const QString &value)
{
    STUB() << key << value;
    return profile->set(QString("%1/%2").arg(GROUP_USER).arg(key), value);
}

QString DuneWebObject::getFirmwareUpgradeUrl()
{
    STUB();
    return "";
}

QString DuneWebObject::getFirmwareUpgradeVersion()
{
    STUB();
    return "";
}

int DuneWebObject::startFirmwareUpgrade(const QString &url, const QString &version)
{
    STUB() << url << version;
    return 0;
}

/**
 * @brief resetSettings
 * @param reset
 *
 * RESET_SETTINGS_FULL
   RESET_SETTINGS_SOFT

 * @return
 */
int DuneWebObject::resetSettings(int reset)
{
    STUB() << reset;
    return 0;
}

// ----------------------------- PLAYBACK

int DuneWebObject::getPlaybackState()
{
    return PLAYBACK_STATE_STOPPED;
}

int DuneWebObject::play(const QString &mediaUrl)
{
    STUB() << mediaUrl;
    return 0;
}

int DuneWebObject::stop()
{
    STUB();
    return 0;
}

bool DuneWebObject::canPause()
{
    STUB();
    return true;
}

int DuneWebObject::pause()
{
    STUB();
    return 0;
}

int DuneWebObject::resume()
{
    STUB();
    return 0;
}

/**
 * @brief setInitialSpeed
 * @param speed
 *
 * Argument must be power of 2.
   Argument:
        -8192..-512 - -32x..-2x
        -256        - -1x
        -128..-8    - -1/2x..-1/32x
        0           - paused
        8..128      - 1/32x..1/2x
        256         - 1x
        512..8192   - 2x..32x
 *
 * @return
 */
int DuneWebObject::setInitialSpeed(int speed)
{
    STUB() << speed;
    return 0;
}
/**
 * @brief getSpeed
 * @return
 *
    Result is always power of 2.
    Result:
        -8192..-512 - -32x..-2x
        -256        - -1x
        -128..-8    - -1/2x..-1/32x
        0           - paused
        8..128      - 1/32x..1/2x
        256         - 1x
        512..8192   - 2x..32x
 *
 */
int DuneWebObject::getSpeed()
{
    STUB();
    return 1;
}

/**
 * @brief setSpeed
 * @param speed
    Argument must be power of 2.
    Argument:
        -8192..-512 - -32x..-2x
        -256        - -1x
        -128..-8    - -1/2x..-1/32x
        0           - paused
        8..128      - 1/32x..1/2x
        256         - 1x
        512..8192   - 2x..32x
 * @return
 */
int DuneWebObject::setSpeed(int speed)
{
    STUB() << speed;
    return 0;
}

/**
 * @brief hasLength
 * @return Returns true if length of media is known.
 */
bool DuneWebObject::hasLength()
{
    STUB();
    return true;
}

/**
 * @brief getLengthInSeconds
 * @return 0..N - media length in seconds
 */
int DuneWebObject::getLengthInSeconds()
{
    STUB();
    return 0;
}

/**
 * @brief setInitialPositionInSeconds
 * @param seconds 0..N - position in seconds
 * @return
 */
int DuneWebObject::setInitialPositionInSeconds(int seconds)
{
    STUB() << seconds;
    return 0;
}

/**
 * @brief getPositionInSeconds
 * @return 0..N - current position in seconds
 */
int DuneWebObject::getPositionInSeconds()
{
    STUB();
    return 0;
}

/**
 * @brief setPositionInSeconds
 * @param seconds 0..N - position in seconds
 * @return
 */
int DuneWebObject::setPositionInSeconds(int seconds)
{
    STUB() << seconds;
    return 0;
}

/**
 * @brief setSpeedAndPositionInSeconds
 * @param speed
            -8192..-512 - -32x..-2x
            -256        - -1x
            -128..-8    - -1/2x..-1/32x
            0           - paused
            8..128      - 1/32x..1/2x
            256         - 1x
            512..8192   - 2x..32x
 * @param seconds 0..N - position in seconds
 * @return
 */
int DuneWebObject::setSpeedAndPositionInSeconds(int speed, int seconds)
{
    STUB() << speed << seconds;
    return 0;
}

// ----------------------------- AUDIO

/**
 * @brief getVolume
 * @return 0..100 - current volume in percents
 */
int DuneWebObject::getVolume()
{
    STUB();
    return 100;
}

/**
 * @brief setVolume
 * @param volume 0..100 - volume in percents
 * @return
 */
int DuneWebObject::setVolume(int volume)
{
    STUB() << volume;
    return 0;
}

bool DuneWebObject::isMuteEnabled()
{
    STUB();
    return false;
}

int DuneWebObject::enableMute()
{
    STUB();
    return 0;
}

int DuneWebObject::disableMute()
{
    STUB();
    return 0;
}

/**
 * @brief setInitialAudioPid
 * @param pid 1..8191 - audio track PID
 * @return
 */
int DuneWebObject::setInitialAudioPid(int pid)
{
    STUB() << pid;
    return 0;
}

/**
 * @brief getAudioTracksDescription
 * @return
String "[ ]" if list of tracks is empty or error occured.
String in format "[ { index: <INDEX>, lang: <LANG>, codec: <CODEC>,
pid: <PID> }, ... ]",
where <INDEX> is int, <LANG>, <CODEC> are strings, <PID> is int
*/
QString DuneWebObject::getAudioTracksDescription()
{
    STUB();
    return "[]";
}

/**
 * @brief getAudioTrack
 * @return 0..N - current audio track index
 */
int DuneWebObject::getAudioTrack()
{
    STUB();
    return 0;
}

/**
 * @brief setAudioTrack
 * @param track 0..N - audio track index
 * @return
 */
int DuneWebObject::setAudioTrack(int track)
{
    STUB() << track;
    return 0;
}

/**
 * @brief getDigitalAudioOutput
 * @return
 * @see #DigitalAudioOutput
*/
int DuneWebObject::getDigitalAudioOutput()
{
    STUB();
    return DIGITAL_AUDIO_OUTPUT_PCM;
}

/**
 * @brief setDigitalAudioOutput
 * @param output
 * @return
 * @see #DigitalAudioOutput
 */
int DuneWebObject::setDigitalAudioOutput(int output)
{
    STUB() << output;
    return 0;
}

/**
 * @brief getDefaultAudioLanguage
 * @return Returns default audio language stored in STB settings.
    Result:
        3 letter language code
        see section "Supported languages" below
 */
QString DuneWebObject::getDefaultAudioLanguage()
{
    STUB();
    return "eng";
}

/**
 * @brief setDefaultAudioLanguage
 * @param language Stores default audio language in STB settings.
 *  3 letter language code
        see section "Supported languages" below
 * @return
 */
QString DuneWebObject::setDefaultAudioLanguage(const QString &language)
{
    STUB() << language;
    return 0;
}

// ----------------------------- Subtitle

/**
 * @brief getSubtitleTracksDescription
 * @return
 * String "[ ]" if list of tracks is empty or error occured.
        String in format "[ { index: <INDEX>, lang: <LANG>, codec: <CODEC>,
        pid: <PID> }, ... ]",
        where <INDEX> is int, <LANG>, <CODEC> are strings, <PID> is int
 */
QString DuneWebObject::getSubtitleTracksDescription()
{
    STUB();
    return "[]";
}

/**
 * @brief getSubtitleTrack
 * @return 0..N - current subtitle track index
 */
int DuneWebObject::getSubtitleTrack()
{
    STUB();
    return 0;
}

/**
 * @brief setSubtitleTrack
 * @param track 0..N - subtitle track index
 * @return
 */
int DuneWebObject::setSubtitleTrack(int track)
{
    STUB() << track;
    return 0;
}

// ----------------------------- Teletext

bool DuneWebObject::isTeletextAvailable()
{
    STUB();
    return false;
}

bool DuneWebObject::isTeletextEnabled()
{
    STUB();
    return false;
}

int DuneWebObject::enableTeletext()
{
    STUB();
    return 0;
}

int DuneWebObject::disableTeletext()
{
    STUB();
    return 0;
}

int DuneWebObject::getTeletextPageNumber()
{
    STUB();
    return 0;
}

int DuneWebObject::setTeletextPageNumber(int page)
{
    STUB() << page;
    return 0;
}

bool DuneWebObject::isTeletextMixModeEnabled()
{
    STUB();
    return false;
}

int DuneWebObject::enableTeletextMixMode()
{
    STUB();
    return 0;
}

int DuneWebObject::disableTeletextMixMode()
{
    STUB();
    return 0;
}

int DuneWebObject::inputTeletextKey(int key)
{
    STUB() << key;
    return 0;
}



// ----------------------------- VIDEO
int DuneWebObject::getColorKey(int key)
{
    STUB();
    return key;
}

int DuneWebObject::getColorKey()
{
    STUB();
    return 0;
}

int DuneWebObject::setColorKey(int color)
{
    STUB() << color;
    return OK;
}

int DuneWebObject::disableColorKey()
{
    STUB();
    return OK;
}

bool DuneWebObject::isVideoEnabled()
{
    STUB();
    return true;
}

int DuneWebObject::enableVideo()
{
    STUB();
    return OK;
}

int DuneWebObject::disableVideo()
{
    STUB();
    return OK;
}

bool DuneWebObject::isVideoOnTop()
{
    STUB();
    return true;
}

int DuneWebObject::enableVideoOnTop()
{
    STUB();
    return OK;
}

int DuneWebObject::disableVideoOnTop()
{
    STUB();
    return OK;
}

bool DuneWebObject::isWindowFullScreen()
{
    STUB();
    return true;
}

int DuneWebObject::enableWindowFullScreen()
{
    STUB();
    return OK;
}

int DuneWebObject::getWindowRectX()
{
    STUB();
    return 0;
}

int DuneWebObject::getWindowRectY()
{
    STUB();
    return 0;
}


int DuneWebObject::getWindowRectWidth()
{
    STUB();
    return 0;
}


int DuneWebObject::getWindowRectHeight()
{
    STUB();
    return 0;
}

int DuneWebObject::setWindowRect(int x, int y, int width, int height)
{
    STUB() << x << y << width << height;
    return 0;
}

int DuneWebObject::getClipRectX()
{
    STUB();
    return 0;
}

int DuneWebObject::getClipRectY()
{
    STUB();
    return 0;
}

int DuneWebObject::getClipRectWidth()
{
    STUB();
    return 0;
}

int DuneWebObject::getClipRectHeight()
{
    STUB();
    return 0;
}

int DuneWebObject::setClipRect(int x, int y, int width, int height)
{
    STUB() << x << y << width << height;
    return 0;
}

int DuneWebObject::getVideoWidth()
{
    STUB();
    return 0;
}

int DuneWebObject::getVideoHeight()
{
    STUB();
    return 0;
}

/**
 * @brief getVideoConnector
 * @return

#VideoConnector
*/
int DuneWebObject::getVideoConnector()
{
    STUB();
    return VIDEO_CONNECTOR_HDMI;
}

int DuneWebObject::setVideoConnector(int connector)
{
    STUB() << connector;
    return OK;
}

/**
 * @brief getVideoMode
 * @return

#VideoMode
*/
int DuneWebObject::getVideoMode()
{
    STUB();
    return VIDEO_MODE_1080P60;
}

int DuneWebObject::setVideoMode(int mode)
{
    STUB() << mode;
    return OK;
}

int DuneWebObject::getAspectRatio()
{
    STUB();
    return ASPECT_RATIO_AUTO;
}

int DuneWebObject::setAspectRatio(int ratio)
{
    STUB() << ratio;
    return OK;
}

int DuneWebObject::getVideoZoom()
{
    STUB();
    return VIDEO_ZOOM_NORMAL;
}

int DuneWebObject::setVideoZoom(int zoom)
{
    STUB() << zoom;
    return OK;
}

// ----------------------------- Browser

/**
 * @brief getBrowserAlphaLevel
 * @return 0..255 - current alpha level
 */
int DuneWebObject::getBrowserAlphaLevel()
{
    STUB();
    return 0;
}

int DuneWebObject::setBrowserAlphaLevel(int level)
{
    STUB() << level;
    return OK;
}

int DuneWebObject::getScreenSize()
{
    STUB();
    return SCREEN_SIZE_1920_1080;
}

int DuneWebObject::setScreenSize(int size)
{
    STUB() << size;
    return OK;
}

QString DuneWebObject::getHomePage()
{
    STUB();
    return profile->get(QString("%1/%2").arg(GROUP_SYSTEM).arg("home-page"), "home-page");
}

int DuneWebObject::exitBrowser(int mode)
{
    STUB() << mode;
    return EXIT_BROWSER_MODE_CLOSE;
}

int DuneWebObject::launchNativeUi()
{
    return OK;
}

/**
 * @brief launchNativeUi
 * @param returnUrl optional URL that should be loaded after return to
        browser, if URL is not specified default URL is loaded
 * @return
 */
int DuneWebObject::launchNativeUi(const QString &returnUrl)
{
    STUB() << returnUrl;
    return OK;
}

/**
 * @brief launchNativeUiExt
 * @param nativeUrl optional URL to be loaded by native UI. The following
        values are supported:
            root://
            setup://network
            setup://network:::standalone=1
 * @param returnUrl - optional URL that should be loaded after return to
        browser, if URL is not specified default URL is loaded
 * @return
 */
int DuneWebObject::launchNativeUiExt(const QString &nativeUrl, const QString &returnUrl)
{
    STUB() << nativeUrl << returnUrl;
    return OK;
}

/**
 * @brief getBrowserProxies
 * @return

String "[ ]" if list of proxies is empty or error occured.
        String in format "[ { type: <TYPE>, host: <HOST>, port: <PORT>,
        user: <USER>, password: <PASSWORD>, exceptions: <EXCEPTIONS> },
        ... ]",
        where <TYPE> is BROWSER_PROXY_TYPE_SSL or BROWSER_PROXY_TYPE_HTTP,
        <PORT> is int, <HOST>, <USER>, <PASSWORD>, <EXCEPTIONS> are
        strings. <EXCEPTIONS> is a list of host names that are communicated
        directly without using browser proxy. Space is used as separator.
*/
QString DuneWebObject::getBrowserProxies()
{
    STUB();
    return "[]";
}

int DuneWebObject::setBrowserProxy(int type, const QString &host, int port, const QString &user,
                    const QString &password, const QString &exceptions)
{
   STUB() << type
          << host
          << port
          << user
          << password
          << exceptions;
   return OK;
}

int DuneWebObject::removeBrowserProxies()
{
    STUB();
    return OK;
}

/**
 * @brief getRcAutoRepeatPeriod
 * @return 50..500 - RC auto-repeat interval in milliseconds
 */
int DuneWebObject::getRcAutoRepeatPeriod()
{
    STUB();
    return 50;
}

/**
 * @brief DuneWebObject::setRcAutoRepeatPeriod
 * @param period  50..500 - RC auto-repeat interval in milliseconds
 * @return
 */
int DuneWebObject::setRcAutoRepeatPeriod(int period)
{
    STUB() << period;
    return OK;
}

/**
 * @brief getRcAutoRepeatKeys
 * @return

String "[ ]" if list of keys is empty or error occured.
        String in format "[ <CODE>, ... ]", where <CODE> is int.
        See section "Key codes" below.
*/
QString DuneWebObject::getRcAutoRepeatKeys()
{
    STUB();
    return "[]";
}

/**
 * @brief setRcAutoRepeatKeys
 * @param keys  Array of RC key codes.
        See section "Key codes" below.
 * @return
 */
int DuneWebObject::setRcAutoRepeatKeys(int keys[])
{
    STUB() << keys;
    return OK;
}

/**
 * @brief saveScreenshot
 * @param params
 * @return

Saves screenshot of specified screen area to BMP image file with
    specified dimensions. If area width or height are zero or not specified
    they are calculated from OSD size. If image width or height are
    specified and not equal to area width or height scaling is performed.
    Resulting image is stored in file /tmp/screenshot/image{imageName}.bmp.
    The file is intended for processing by separate application working on
    STB. The application is also responsible for deletion of image files to
    preserve memory consumption.
*/

int DuneWebObject::saveScreenshot(struct screenshotParameters params)
{
    STUB();// << params;
    return OK;
}

// ----------------------------- Storage

/**
 * @brief isStorageAvailable
 * @return

    Returns true if at least one storage is mounted successfully and is
    available and false otherwise.
    Currently only main storage is supported.
*/
bool DuneWebObject::isStorageAvailable()
{
    STUB();
    return true;
}

/**
 * @brief getMainStorageDescription
 * @return
Returns description of main storage.
    Result:
        Empty string if storage is not available or error occured.
        String in format
            "( {
                mediaUrl: <URL>,
                path: <PATH>,
                uuid: <UUID>,
                label: <LABEL>,
                name: <NAME>,
                size: <SIZE>,
                free: <SIZE>,
                fileSystem: <FILE_SYSTEM>,
                writable: <FLAG>
            } )",
        where <URL>, <PATH>, <UUID>, <LABEL>, <NAME>, <FILE_SYSTEM> are
        strings,
        <SIZE> is long long (bytes),
        <FLAG> is bool.

*/
QString DuneWebObject::getMainStorageDescription()
{
    STUB();
    return "()";
}

/**
 * @brief getFolderItemsNumber
 * @param mediaUrl
 * @return

    Returns total number of items in the specified directory,
    non-recursive.
    Result:
        Total number of items.
*/
int DuneWebObject::getFolderItemsNumber(const QString &mediaUrl)
{
    STUB() << mediaUrl;
    return 0;
}
/**
 * @brief getFolderContent
 * @return

 Returns non-recursive list of items in the specified directory.
    Arguments:
        mediaUrl - media URL of directory
        startIndex - starting index of items, zero based
        maxCount - maximum number of items to be returned
    Result:
        String in format
            "( {
                status: <STATUS>,
                items:
                [ {
                    name: <NAME>,
                    mediaUrl: <URL>,
                    path: <PATH>,
                    type: <TYPE>,
                    size: <SIZE>,
                    modified: <TIME>,
                    accessed: <TIME>
                }, ... ]
            } )",
        where <STATUS> is rc,
        <NAME>, <URL>, <PATH> are strings,
        <SIZE> is long long (bytes),
        <TIME> is int (timestamp),
        <TYPE> is one of the following:
            CONTENT_TYPE_DIRECTORY
            CONTENT_TYPE_FILE
            CONTENT_TYPE_VIDEO
            CONTENT_TYPE_AUDIO
            CONTENT_TYPE_IMAGE.
*/
QString DuneWebObject::getFolderContent()
{
    STUB();
    return "()";
}

// ----------------------------- Network

/**
 * @brief setNetworkConfiguration
 * @param config  Sets given network configuration.
 * @return
 */
int DuneWebObject::setNetworkConfiguration(struct NetworkConfiguration config)
{
    STUB();// << config;
    return OK;
}

/**
 * @brief getNetworkConfiguration
 * @return
Returns all network settings.
Result:
    Empty string if error occured.
    String in format
        "( {
            connection: <CONNECTION>,
            mode: <MODE>,
            ipAddress: <IP>,
            mask: <IP>,
            gateway: <IP>,
            dns1: <IP>,
            dns2: <IP>,
            wifiSsid: <SSID>,
            wifiSecurity: <SECURITY>,
            wifiPassword: <PASSWORD>,
            wifiApMode: <APMODE>,
            wifiApSsid: <SSID>,
            wifiApPassword: <PASSWORD>,
            pppoeLogin: <LOGIN>,
            pppoePassword: <PASSWORD>,
            pppoeDnsMode: <DNSMODE>,
            pppoeDhcp: <DHCPMODE>
        } )",
    where <IP>, <SSID>, <PASSWORD>, <LOGIN> are strings,
    <SECURITY>, <APMODE>, <DNSMODE>, <DHCPMODE> are enums.

*/
QString DuneWebObject::getNetworkConfiguration()
{
    STUB();
    return "( {} )";
}

/**
 * @brief scanForWifiNetworks
 * @param timeout
    Starts scanning of WiFi networks, doesn't wait until scanning is
    finished. Scanning finishes if some WiFi networks are found or given
    timeout in seconds is exceeded.
* @return
 */
int DuneWebObject::scanForWifiNetworks(int timeout)
{
    STUB() << timeout;
    return OK;
}

/**
 * @brief getWifiNetworksDescription
    Returns list of WiFi networks found during scanning.
    Result:
        String "[ ]" if list of networks is empty or error occured.
        String in format "[ { ssid: <SSID>, security: <SECURITY> }, ... ]",
        where <SSID> is string, <SECURITY> is enum.

* @return
 */
QString DuneWebObject::getWifiNetworksDescription()
{
    STUB();
    return "[]";
}

// ----------------------------- Time

/**
 * @brief getTimeZone
 * @return  Returns current time zone.
 */
int DuneWebObject::getTimeZone()
{
    STUB();
    return TIME_ZONE_GMT;
}

/**
 * @brief setTimeZone
 * @param zone  Sets time zone. To apply changes browser need to be restarted.
 * @return
 */
int DuneWebObject::setTimeZone(int zone)
{
    STUB() << zone;
    return OK;
}

int DuneWebObject::getDaylightSavingTime()
{
    STUB();
    return DAYLIGHT_SAVING_TIME_AUTO;
}

int DuneWebObject::setDaylightSavingTime(int time)
{
    STUB() << time;
    return OK;
}

// ----------------------------- DVB

/**
 * @brief enableEpgFromMpegTsStream
 * @return Enables retrieval of EPG data from currently played TS stream. The
    function takes effect for next playback only.
 */
int DuneWebObject::enableEpgFromMpegTsStream()
{
    STUB();
    return OK;
}

/**
 * @brief disableEpgFromMpegTsStream
 * @return  Disables retrieval of EPG data from currently played TS stream. The
    function takes effect for next playback only.
 */
int DuneWebObject::disableEpgFromMpegTsStream()
{
    STUB();
    return OK;
}

/**
 * @brief getEpgFromMpegTsStream
 * @param serviceUrl URL of DVB service
 * @param timeRange
 * struct timeRange
        {
            int startTime;
            int endTime;
        }
 *
Retrieves EPG information from currently played TS stream. EPG is
    retrieved for service indentified by serviceUrl - string in format
    dvb://<original_network_id>.<transport_stream_id>.<service_id>. All
    identifiers in serviceUrl should be hexadecimal numbers.
    Arguments:
        serviceUrl -

    Result:
        String "[ ]" if EPG is empty or error occured.
        String in format:
            "[ {
                startTime: <TIME>,
                endTime: <TIME>,
                name: <NAME>,
                description: <DESCRIPTION>
            }, ... ]",
        where <NAME>, <DESCRIPTION> are strings,
        <TIME> is int (timestamp).

* @return
 */
QString DuneWebObject::getEpgFromMpegTsStream(const QString &serviceUrl, struct TimeRange timeRange)
{
    STUB() << serviceUrl;// << timeRange;
    return "[]";
}

/**
 * @brief getChannelsNumber
 * @return Returns number of known channels.
 */
int DuneWebObject::getChannelsNumber()
{
    STUB();
    return 0;
}

/**
 * @brief getChannelsDescription
 * @param startIndex
 * @param maxCount
 * @return
 *
 *  Returns list of known channels.
    Arguments:
        startIndex - starting index of channels, zero based
        maxCount - maximum number of channels to be returned
    Result:
        String "[ ]" if list of channels is empty or error occured.
        String in format:
            "[ {
                provider: <NAME>,
                name: <NAME>,
                mediaUrl: <URL>,
                onid: <ID>,
                tsid: <ID>,
                sid: <ID>,
                lcn: <NUMBER>
            }, ... ]",
        where <NAME>, <URL> are strings,
        <ID>, <NUMBER> are ints.
 */
QString DuneWebObject::getChannelsDescription(int startIndex, int maxCount)
{
    STUB() << startIndex << maxCount;
    return "[]";
}

// ----------------------------- States and events

int DuneWebObject::setPlaybackEventCallback(const QString &callback)
{
    STUB() << callback;
    return 0;
}




