#ifndef DUNE_ENUMS_H
#define DUNE_ENUMS_H

#include <QString>

namespace yasem {

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




}


#endif // DUNE_ENUMS_H
