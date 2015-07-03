#include "duneapiplugin.h"
#include "duneapistbobject.h"

using namespace yasem;

DuneAPI::DuneAPI(QObject* parent):
    SDK::Plugin(parent)
{

}

DuneAPI::~DuneAPI()
{

}

void yasem::DuneAPI::register_dependencies()
{
    add_dependency(SDK::ROLE_DATASOURCE);
    add_dependency(SDK::ROLE_BROWSER);
    add_dependency({SDK::ROLE_MEDIA, true, true});
}

void yasem::DuneAPI::register_roles()
{
    register_role(SDK::ROLE_STB_API, new DuneApiStbObject(this));
}
