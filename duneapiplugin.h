#ifndef DUNEAPI_H
#define DUNEAPI_H

#include "duneapi_global.h"

#include "plugin.h"

#include <QObject>
#include <QWidget>

namespace yasem
{

class DUNEAPISHARED_EXPORT DuneAPI : public SDK::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.DuneApiPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::SDK::Plugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "DuneHD API")
    Q_CLASSINFO("version", MODULE_VERSION)
    Q_CLASSINFO("revision", GIT_VERSION)
public:

    explicit DuneAPI(QObject* parent = 0);
    virtual ~DuneAPI();

    void register_dependencies();
    void register_roles();
};

}

#endif // DUNEAPI_H
