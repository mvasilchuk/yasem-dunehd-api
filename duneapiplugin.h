#ifndef DUNEAPI_H
#define DUNEAPI_H

#include "duneapi_global.h"

#include "plugin.h"

#include <QObject>
#include <QWidget>

namespace yasem
{

class AbstractWebPage;

class DUNEAPISHARED_EXPORT DuneAPI : public Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.DuneApiPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::Plugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "DuneHD API implementation for YASEM")
public:

    explicit DuneAPI(QObject* parent = 0);
    virtual ~DuneAPI();

    void register_dependencies();
    void register_roles();
};

}

#endif // DUNEAPI_H
