#-------------------------------------------------
#
# Project created by QtCreator 2014-02-11T12:10:38
#
#-------------------------------------------------

VERSION = 0.1.0
TARGET = yasem-dunehd-api
TEMPLATE = lib

include($${top_srcdir}/common.pri)

QT      = core gui widgets

DEFINES += DUNEAPI_LIBRARY

INCLUDEPATH += ../../yasem-core/
DEPENDPATH += ../../yasem-core/

SOURCES += \
    duneprofile.cpp \
    dunewebobject.cpp \
    $${CORE_ROOT_DIR}/stbpluginobject.cpp \
    $${CORE_ROOT_DIR}/mediaplayerpluginobject.cpp \
    duneapiplugin.cpp \
    duneapistbobject.cpp \
    dunescreenobject.cpp

HEADERS +=\
    duneprofile.h \
    duneapi_global.h \
    dunewebobject.h \
    dune_enums.h \
    $${CORE_ROOT_DIR}/stbpluginobject.h \
    $${CORE_ROOT_DIR}/mediaplayerpluginobject.h \
    $${CORE_ROOT_DIR}/profileconfigparserimpl.h \
    $${CORE_ROOT_DIR}/browserpluginobject.h \
    duneapiplugin.h \
    duneapistbobject.h \
    dunescreenobject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    metadata.json \
    resources/dunedh.js \
    LICENSE \
    README.md

RESOURCES += \
    resources.qrc
