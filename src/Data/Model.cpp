#include "AllData.h"

struct Data_Model_House Data_Model_Houses[20];
struct Data_Model_Building Data_Model_Buildings[130];
struct Data_Model_Difficulty Data_Model_Difficulty = {
	{300, 200, 150, 100, 75}, // money percentage
	{40, 60, 80, 100, 120}, // enemy percentage
	{70, 60, 50, 50, 40} // starting favor
};

struct Data_Scenario Data_Scenario;

struct Data_Settings Data_Settings;
struct Data_Settings_Map Data_Settings_Map;

struct Data_Message Data_Message;

struct Data_Random Data_Random;

struct Data_Empire Data_Empire;
struct Data_Empire_Sizes Data_Empire_Sizes = {2000, 1000, 16, 16, 120};
struct Data_Empire_Index Data_Empire_Index[40];
struct Data_Empire_Object Data_Empire_Objects[200];
struct Data_Empire_City Data_Empire_Cities[41];
struct Data_Empire_Trade Data_Empire_Trade;

struct Data_Graphics_Main Data_Graphics_Main;
struct Data_Graphics_Enemy Data_Graphics_Enemy;
struct Data_Graphics_PixelData Data_Graphics_PixelData;

struct Data_Screen Data_Screen = { 800, 600, {80, 60} };

struct Data_Mouse Data_Mouse;

struct Data_Language_Text Data_Language_Text;
struct Data_Language_Message Data_Language_Message;

struct Data_CityInfo Data_CityInfo;
struct Data_CityInfo_Buildings Data_CityInfo_Buildings;
struct Data_CityInfo_CultureCoverage Data_CityInfo_CultureCoverage;
struct Data_CityInfo_Extra Data_CityInfo_Extra;
struct Data_CityInfo_Resource Data_CityInfo_Resource;

struct Data_KeyboardInput Data_KeyboardInput;

struct Data_State Data_State;

struct Data_Walker_NameSequence Data_Walker_NameSequence;
struct Data_Walker Data_Walkers[MAX_WALKERS];
struct Data_Walker_Trader Data_Walker_Traders[MAX_TRADERS];

struct Data_Building Data_Buildings[MAX_BUILDINGS];
struct Data_Building_Storage Data_Building_Storages[MAX_STORAGES];
struct Data_Buildings_Extra Data_Buildings_Extra;

struct Data_Sound_City Data_Sound_City[70];

struct Data_CityView Data_CityView;

struct Data_InvasionWarning Data_InvasionWarnings[101];

struct Data_TradePrice Data_TradePrices[16];

struct Data_Formation Data_Formations[MAX_FORMATIONS];
struct Data_Formation_Extra Data_Formation_Extra;

struct Data_FileList Data_FileList;

struct Data_Routes Data_Routes;

int Constant_SalaryForRank[11] = {0, 2, 5, 8, 12, 20, 30, 40, 60, 80, 100};
int Constant_DirectionGridOffsets[8] = {-162, -161, 1, 163, 162, 161, -1, -163};
