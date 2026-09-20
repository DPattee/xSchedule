; -- xSchedule_common.iss --
; #include file for common entries for xSchedule setup build
;
; Installer AppVersion and output filename (xSchedule_{Year}_{Version}{Other}.exe).
; Keep Year.Version in sync with xschedule_version_string in xSchedule/xScheduleVersion.h
; and with the GitHub release tag. For a patch release, use Other "_1" here and ".1" in
; the C++ version string (e.g. 2026.06_1 vs 2026.06.1).

#define MyTitleName "xSchedule"
#define Year 2026
#define Version "06"
#define Other ""
