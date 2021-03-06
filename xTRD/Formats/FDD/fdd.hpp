#ifndef fdd_hpp
#define fdd_hpp

#define versionLength 30
#define TRACKMAX (85*2)
#define SECTMAX  30

const unsigned short sectorSize = 0x100;

#pragma pack(1)

struct FDDHdr
{
  char  signature[versionLength];
  BYTE  noCyls;
  BYTE  noHeads;
  DWORD diskIndex;
  DWORD cylsOffset[TRACKMAX];
};

struct SectorHdr
{
  BYTE  c, h, r, n;
  DWORD offset;
};

struct TrackHdr
{
  BYTE trkType;
  BYTE noSecs;
};

#pragma pack()

#endif
