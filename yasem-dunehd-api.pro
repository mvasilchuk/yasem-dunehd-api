#-------------------------------------------------
#
# Project created by QtCreator 2014-02-11T12:10:38
#
#-------------------------------------------------

QT       = core gui widgets

CONFIG += C++11

TARGET = yasem-dunehd-api
TEMPLATE = lib
CONFIG += plugin

DEFINES += DUNEAPI_LIBRARY

INCLUDEPATH += ../yasem-core

SOURCES += \
    duneapi.cpp \
    duneprofile.cpp \
    dunewebobject.cpp

HEADERS +=\
    duneapi.h \
    duneprofile.h \
    duneapi_global.h \
    dunewebobject.h \
    dune_enums.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    metadata.json \
    resources/dunedh.js \
    LICENSE \
    README.md

include(../common.pri)
DESTDIR = $$DEFAULT_PLUGIN_DIR

RESOURCES += \
    resources.qrc
