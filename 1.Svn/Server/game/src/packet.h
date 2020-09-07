//Find
	HEADER_CG_SCRIPT_SELECT_ITEM	= 114,
	
///Add
#if defined(__BL_SOUL_ROULETTE__)
	HEADER_CG_SOUL_ROULETTE = 136,
#endif

//Find
	HEADER_GC_MAIN_CHARACTER4_BGM_VOL	= 138,
	
///Add
#if defined(__BL_SOUL_ROULETTE__)
	HEADER_GC_SOUL_ROULETTE = 145,
#endif

//Find
typedef struct command_item_pickup
{
	BYTE 	header;
	DWORD	vid;
} TPacketCGItemPickup;

///Add
#if defined(__BL_SOUL_ROULETTE__)
typedef struct command_cgroulette
{
	BYTE	header;
	BYTE 	option;
} TPacketCGSoulRoulette;
typedef struct command_gcroulette
{
	BYTE	header;
	BYTE 	option;
	int		yang;
	struct {
		DWORD vnum;
		BYTE count;
	} ItemInfo[20];
} TPacketGCSoulRoulette;
#endif