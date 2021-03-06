#include "dunescreenobject.h"
#include "stbprofile.h"
#include "datasource.h"

#include "dune_enums.h"

using namespace yasem;

DuneScreenObject::DuneScreenObject(SDK::Profile* profile, SDK::WebPage* page):
    m_profile(profile),
    m_page(page)
{
    SDK::Datasource* ds = profile->datasource();

    QString gmode = ds->get(GROUP_SYSTEM, "gmode", "1280");

    if(gmode == "720")
    {
        width = 720;
        height = 576;
    }
    else if(gmode == "1920")
    {
        width = 1920;
        height = 1080;
    }
    else
    {
        width = 1280;
        height = 720;
    }

    colorDepth = 32;
}

DuneScreenObject::~DuneScreenObject()
{

}

