#include "duneapiplugin.h"
#include "duneapistbobject.h"

using namespace yasem;

DuneAPI::DuneAPI(QObject* parent):
    Plugin(parent)
{

}

DuneAPI::~DuneAPI()
{

}

void yasem::DuneAPI::register_dependencies()
{
    add_dependency(ROLE_DATASOURCE);
    add_dependency(ROLE_BROWSER);
    add_dependency({ROLE_MEDIA, true, true});
}

void yasem::DuneAPI::register_roles()
{
    register_role(ROLE_STB_API, new DuneApiStbObject(this));
}
