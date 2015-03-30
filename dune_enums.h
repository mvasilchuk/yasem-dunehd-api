#ifndef DUNE_ENUMS_H
#define DUNE_ENUMS_H

#include <QString>

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

enum ResetSettings {
    RESET_SETTINGS_FULL,
    RESET_SETTINGS_SOFT
};

enum PlaybackState {
    PLAYBACK_STATE_STOPPED,
    PLAYBACK_STATE_INITIALIZING,
    PLAYBACK_STATE_PLAYING,
    PLAYBACK_STATE_PAUSED,
    PLAYBACK_STATE_SEEKING,
    PLAYBACK_STATE_BUFFERING,
    PLAYBACK_STATE_FINISHED,
    PLAYBACK_STATE_DEINITIALIZING
};

enum PlaybackEvent {
    PLAYBACK_EVENT_NO_EVENT,
    PLAYBACK_EVENT_MEDIA_DESCRIPTION_CHANGED,
    PLAYBACK_EVENT_MEDIA_READ_STALLED,
    PLAYBACK_EVENT_END_OF_MEDIA,
    PLAYBACK_EVENT_ERROR_MEDIA_FORMAT_NOT_SUPPORTED,
    PLAYBACK_EVENT_ERROR_INTERNAL_ERROR,
    PLAYBACK_EVENT_ERROR_MEDIA_READ_FAILED,
    PLAYBACK_EVENT_ERROR_MEDIA_OPEN_FAILED,
    PLAYBACK_EVENT_EXTERNAL_ACTION,
    PLAYBACK_EVENT_ERROR_MEDIA_PROTOCOL_NOT_SUPPORTED,
    PLAYBACK_EVENT_ERROR_MEDIA_PERMISSION_DENIED
};

enum MethodResult {
    OK,
    ALREADY_INITIALIZED,
    NOT_INITIALIZED,
    POWER_OFF,
    ERROR,
    INVALID_ARGUMENT,
    NOT_SUPPORTED
};



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


#endif // DUNE_ENUMS_H
