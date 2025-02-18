#ifndef GUI_H
#define GUI_H

#include <Arduino.h>
#include <TFT_eSPI.h>
#include "TEF6686.h"
#include "WiFiConnect.h"
#include "WiFiConnectParam.h"

#define SMETERPIN       27
#define CONTRASTPIN     2

#define ITEM_GAP		20
#define ITEM1			30
#define ITEM2			50
#define ITEM3			70
#define ITEM4			90
#define ITEM5			110
#define ITEM6			130
#define ITEM7			150
#define ITEM8			170
#define ITEM9			190
#define ITEM10			210

enum menupage {INDEX, MAINSETTINGS, AUDIOSETTINGS, DISPLAYSETTINGS, RDSSETTINGS, FMSETTINGS, AMSETTINGS, CONNECTIVITY};

extern byte menuitem;
extern byte items[8];

extern bool advancedRDS;
extern bool afmethodBold;
extern bool afpage;
extern bool afscreen;
extern bool artheadold;
extern bool BWreset;
extern bool change;
extern bool compressedold;
extern bool dropout;
extern bool dynamicPTYold;
extern bool dynamicspi;
extern bool edgebeep;
extern bool hasafold;
extern bool haseonold;
extern bool hasrtplusold;
extern bool hastmcold;
extern bool LowLevelInit;
extern bool menuopen;
extern bool mwstepsize;
extern bool rdsreset;
extern bool RDSstatus;
extern bool RDSstatusold;
extern bool rdsstereoold;
extern bool usesquelch;
extern bool softmuteam;
extern bool softmutefm;
extern bool Stereostatusold;
extern bool StereoToggle;
extern bool TAold;
extern bool TPold;
extern bool USBmode;
extern bool wifi;
extern byte af;
extern byte af_counterold;
extern byte afpagenr;
extern byte amnb;
extern byte amscansens;
extern byte audiomode;
extern byte band;
extern byte bandAM;
extern byte bandFM;
extern byte bandforbidden;
extern byte batteryold;
extern byte batteryoptions;
extern byte batteryoptionsold;
extern byte ContrastSet;
extern byte CurrentTheme;
extern byte ECCold;
extern byte fmscansens;
extern byte fmdefaultstepsize;
extern byte fmnb;
extern byte fmdeemphasis;
extern byte amcodect;
extern byte amcodectcount;
extern byte amrfagc;
extern byte hardwaremodel;
extern byte hardwaremodelold;
extern byte HighCutLevel;
extern byte HighCutOffset;
extern byte language;
extern byte licold;
extern byte menupage;
extern byte MSold;
extern byte poweroptions;
extern byte poweroptionsold;
extern byte eonptyold[20];
extern byte rdsblockold;
extern byte region;
extern byte screensaverOptions[5];
extern byte screensaverset;
extern byte showmodulation;
extern byte showSWMIBand;
extern byte showrdserrors;
extern byte stationlistid;
extern int8_t CNold;
extern byte StereoLevel;
extern byte StereoLevel;
extern byte submenu;
extern byte subnetclient;
extern byte theme;
extern byte tot;
extern byte touchrotating;
extern byte unit;
extern byte spispeed;
extern byte spispeedold;
extern char eonpicodeold[20][6];
extern char programTypePrevious[18];
extern float batteryVold;
extern float vPerold;
extern int ActiveColor;
extern int ActiveColorSmooth;
extern int AMLevelOffset;
extern int BackgroundColor;
extern int BackgroundColorSmooth;
extern int BarInsignificantColor;
extern int BarSignificantColor;
extern int BatteryValueColor;
extern int BatteryValueColorSmooth;
extern int BWAutoColor;
extern int BWAutoColorSmooth;
extern int FrameColor;
extern int GreyoutColor;
extern int InsignificantColor;
extern int InsignificantColorSmooth;
extern int menuoption;
extern int PrimaryColor;
extern int PrimaryColorSmooth;
extern int RDSColor;
extern int RDSColorSmooth;
extern int rssiold;
extern int SecondaryColor;
extern int SecondaryColorSmooth;
extern int SignificantColor;
extern int SignificantColorSmooth;
extern int Squelchold;
extern int SStatusold;
extern int StereoColor;
extern int StereoColorSmooth;
extern int16_t SStatus;
extern int8_t LevelOffset;
extern int8_t LowLevelSet;
extern int8_t VolSet;
extern String CurrentThemeString;
extern String eonpsold[20];
extern String PIold;
extern String pinstringold;
extern String PSold;
extern String ptynold;
extern String rds_clockold;
extern String stationIDold;
extern String stationStateold;
extern String XDRGTK_key;
extern unsigned int ConverterSet;
extern unsigned int HighEdgeSet;
extern unsigned int LowEdgeSet;
extern unsigned int mappedfreqold[20];
extern unsigned int mappedfreqold2[20];
extern unsigned int mappedfreqold3[20];

extern TFT_eSPI tft;
extern TEF6686 radio;
extern WiFiConnect wc;
extern TFT_eSprite MenuInfobox;

void BuildAFScreen();
void BuildMenu();
void BuildAdvancedRDS();
void BuildDisplay();
void MenuUp();
void MenuDown();
void DoMenu();
void doTheme();
void Infoboxprint(const char* input);

extern void ShowFreq(int mode);
extern void ShowBandSelectionFM(bool notglanceview, bool normaldisplay);
extern void ShowBandSelectionAM(bool notglanceview, bool normaldisplay);
extern void ScreensaverTimerSet(byte value);
extern void ShowMemoryPos();
extern void ShowTuneMode();
extern void updateBW();
extern void ShowStepSize();
extern void updateiMS();
extern void updateEQ();
extern void doTheme();
extern void tryWiFi();
extern void tftPrint(int8_t offset, const String & text, int16_t x, int16_t y, int color, int smoothcolor, uint8_t fontsize);

#endif