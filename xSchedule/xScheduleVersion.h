#pragma once

#include <string>
#include "../xlights/xLights/xLightsVersion.h"

// Runtime version shown in Help→About and compared by CheckForUpdate()
// against the GitHub release tag_name. Keep this in sync with Year.Version
// in build_scripts/msw/xSchedule_common.iss when cutting a release.
static const std::string xschedule_version_string = "2026.06";
static const std::string xschedule_build_date     = __DATE__;

inline std::string GetXScheduleDisplayVersionString() {
#ifndef __WXOSX__
    return xschedule_version_string + " " + GetBitness();
#else
    return xschedule_version_string;
#endif
}
