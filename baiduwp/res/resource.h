//stamp:106e44a307985f44
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				PAGE_DISK = _T("LAYOUT:PAGE_DISK");
				PAGE_SHARE = _T("LAYOUT:PAGE_SHARE");
				PAGE_SAFE = _T("LAYOUT:PAGE_SAFE");
				PAGE_BOX = _T("LAYOUT:PAGE_BOX");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * PAGE_DISK;
			const TCHAR * PAGE_SHARE;
			const TCHAR * PAGE_SAFE;
			const TCHAR * PAGE_BOX;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
				TRAY_MENU_ICONS = _T("IMG:TRAY_MENU_ICONS");
				TRAY_MENU_ITEM = _T("IMG:TRAY_MENU_ITEM");
				TRAY_MENU_SEP = _T("IMG:TRAY_MENU_SEP");
				ID_PNG_BG = _T("IMG:ID_PNG_BG");
				ID_SYS_BTN_CLOSE = _T("IMG:ID_SYS_BTN_CLOSE");
				ID_SYS_BTN_MAX = _T("IMG:ID_SYS_BTN_MAX");
				ID_SYS_BTN_RESTORE = _T("IMG:ID_SYS_BTN_RESTORE");
				ID_SYS_BTN_MIN = _T("IMG:ID_SYS_BTN_MIN");
				ID_MENU_BTN_MSG = _T("IMG:ID_MENU_BTN_MSG");
				ID_MENU_BTN_SET = _T("IMG:ID_MENU_BTN_SET");
				ID_SCROLLBAR = _T("IMG:ID_SCROLLBAR");
				ID_TBAR_VIP = _T("IMG:ID_TBAR_VIP");
				ID_CAPTION_BANNER = _T("IMG:ID_CAPTION_BANNER");
				ID_CAPTION_PROG_FRG = _T("IMG:ID_CAPTION_PROG_FRG");
				ID_CAPTION_PROG_BKG = _T("IMG:ID_CAPTION_PROG_BKG");
				ID_CAPTION_HEAD = _T("IMG:ID_CAPTION_HEAD");
				ID_CAPTION_TAB_BKG = _T("IMG:ID_CAPTION_TAB_BKG");
				ID_CAPTION_TAB_DISK = _T("IMG:ID_CAPTION_TAB_DISK");
				ID_CAPTION_TAB_SHARE = _T("IMG:ID_CAPTION_TAB_SHARE");
				ID_CAPTION_TAB_SAFE = _T("IMG:ID_CAPTION_TAB_SAFE");
				ID_CAPTION_TAB_BOX = _T("IMG:ID_CAPTION_TAB_BOX");
				ID_TOOLBAR_BK = _T("IMG:ID_TOOLBAR_BK");
				ID_TOOLBAR_BTN_BK = _T("IMG:ID_TOOLBAR_BTN_BK");
				ID_TOOLBAR_ICO_DOWNLOAD = _T("IMG:ID_TOOLBAR_ICO_DOWNLOAD");
				ID_TOOLBAR_ICO_MORE = _T("IMG:ID_TOOLBAR_ICO_MORE");
				ID_TOOLBAR_ICO_NEW_DIR = _T("IMG:ID_TOOLBAR_ICO_NEW_DIR");
				ID_TOOLBAR_ICO_OFFLINE_DOWN = _T("IMG:ID_TOOLBAR_ICO_OFFLINE_DOWN");
				ID_TOOLBAR_ICO_PUSH = _T("IMG:ID_TOOLBAR_ICO_PUSH");
				ID_TOOLBAR_ICO_SHARE = _T("IMG:ID_TOOLBAR_ICO_SHARE");
				ID_TOOLBAR_ICO_UPLOAD = _T("IMG:ID_TOOLBAR_ICO_UPLOAD");
				ID_TOOLBAR_ICO_DELETE = _T("IMG:ID_TOOLBAR_ICO_DELETE");
				ID_SAFEBOX_ICON = _T("IMG:ID_SAFEBOX_ICON");
				ID_SAFEBOX_BTN_BK = _T("IMG:ID_SAFEBOX_BTN_BK");
				ID_TASK_LIST_BTN = _T("IMG:ID_TASK_LIST_BTN");
				ID_TASK_LIST_ICO = _T("IMG:ID_TASK_LIST_ICO");
				ID_STATUS_BAR_BKG = _T("IMG:ID_STATUS_BAR_BKG");
				ID_STATUS_BAR_RB = _T("IMG:ID_STATUS_BAR_RB");
				ID_STATUS_BAR_TOOL = _T("IMG:ID_STATUS_BAR_TOOL");
				ID_STATUS_BAR_BACKUP = _T("IMG:ID_STATUS_BAR_BACKUP");
				ID_STATUS_BAR_LOCK = _T("IMG:ID_STATUS_BAR_LOCK");
				ID_NAVIGATOR_BKG = _T("IMG:ID_NAVIGATOR_BKG");
				ID_NAVI_PATH_INNER_BKG = _T("IMG:ID_NAVI_PATH_INNER_BKG");
				ID_NAVI_PATH_BKG = _T("IMG:ID_NAVI_PATH_BKG");
				ID_NAVI_BACK = _T("IMG:ID_NAVI_BACK");
				ID_NAVI_DROP_ARROW = _T("IMG:ID_NAVI_DROP_ARROW");
				ID_NAVI_DOWN_ARROW = _T("IMG:ID_NAVI_DOWN_ARROW");
				ID_NAVI_ADDRESS_BKG = _T("IMG:ID_NAVI_ADDRESS_BKG");
				ID_NAVI_REFRESH = _T("IMG:ID_NAVI_REFRESH");
				ID_NAVI_HOME = _T("IMG:ID_NAVI_HOME");
				ID_NAVI_LEFT_WND = _T("IMG:ID_NAVI_LEFT_WND");
				ID_NAVI_LEFT_WND_DOT = _T("IMG:ID_NAVI_LEFT_WND_DOT");
				ID_NAVI_LEFT_WND_HIDE = _T("IMG:ID_NAVI_LEFT_WND_HIDE");
				ID_NAVI_LIST = _T("IMG:ID_NAVI_LIST");
				ID_NAVI_NEXT = _T("IMG:ID_NAVI_NEXT");
				ID_NAVI_TILE = _T("IMG:ID_NAVI_TILE");
				ID_SEARCHBOX_BKG = _T("IMG:ID_SEARCHBOX_BKG");
				ID_SEARCH_ICO = _T("IMG:ID_SEARCH_ICO");
				ID_DELETE_ICO = _T("IMG:ID_DELETE_ICO");
				ID_LIST_HEADER_BKG = _T("IMG:ID_LIST_HEADER_BKG");
				ID_LIST_HEADER_ARROW = _T("IMG:ID_LIST_HEADER_ARROW");
				ID_LIST_SELECT_RANGE = _T("IMG:ID_LIST_SELECT_RANGE");
				ID_LIST_ITEM_BKG = _T("IMG:ID_LIST_ITEM_BKG");
				ID_CHECK_BOX = _T("IMG:ID_CHECK_BOX");
				ID_LIST_DOWNLOAD = _T("IMG:ID_LIST_DOWNLOAD");
				ID_LIST_SHARE = _T("IMG:ID_LIST_SHARE");
				ID_LIST_MORE = _T("IMG:ID_LIST_MORE");
				ID_FUNC_BOX_BACKUP = _T("IMG:ID_FUNC_BOX_BACKUP");
				ID_FUNC_BOX_BTNBKG = _T("IMG:ID_FUNC_BOX_BTNBKG");
				ID_FUNC_BOX_DATACABLE = _T("IMG:ID_FUNC_BOX_DATACABLE");
				ID_FUNC_BOX_LOCK = _T("IMG:ID_FUNC_BOX_LOCK");
				ID_FUNC_BOX_PHONE = _T("IMG:ID_FUNC_BOX_PHONE");
				ID_FUNC_BOX_RECYCLE = _T("IMG:ID_FUNC_BOX_RECYCLE");
				ID_FUNC_BOX_VIPONLY = _T("IMG:ID_FUNC_BOX_VIPONLY");
				ID_SHAREPANEL_ADDBTN = _T("IMG:ID_SHAREPANEL_ADDBTN");
				ID_SHAREPANEL_EMPTY = _T("IMG:ID_SHAREPANEL_EMPTY");
				ID_SHAREPANEL_EMPTYSESSION = _T("IMG:ID_SHAREPANEL_EMPTYSESSION");
				ID_SHAREPANEL_FRIEND = _T("IMG:ID_SHAREPANEL_FRIEND");
				ID_SHAREPANEL_GROUP = _T("IMG:ID_SHAREPANEL_GROUP");
				ID_SHAREPANEL_LEFTPANELBKG = _T("IMG:ID_SHAREPANEL_LEFTPANELBKG");
				ID_SHAREPANEL_SESSION = _T("IMG:ID_SHAREPANEL_SESSION");
				ID_SHAREPANEL_SHAREFILEBTN = _T("IMG:ID_SHAREPANEL_SHAREFILEBTN");
			}
			const TCHAR * TRAY_MENU_ICONS;
			const TCHAR * TRAY_MENU_ITEM;
			const TCHAR * TRAY_MENU_SEP;
			const TCHAR * ID_PNG_BG;
			const TCHAR * ID_SYS_BTN_CLOSE;
			const TCHAR * ID_SYS_BTN_MAX;
			const TCHAR * ID_SYS_BTN_RESTORE;
			const TCHAR * ID_SYS_BTN_MIN;
			const TCHAR * ID_MENU_BTN_MSG;
			const TCHAR * ID_MENU_BTN_SET;
			const TCHAR * ID_SCROLLBAR;
			const TCHAR * ID_TBAR_VIP;
			const TCHAR * ID_CAPTION_BANNER;
			const TCHAR * ID_CAPTION_PROG_FRG;
			const TCHAR * ID_CAPTION_PROG_BKG;
			const TCHAR * ID_CAPTION_HEAD;
			const TCHAR * ID_CAPTION_TAB_BKG;
			const TCHAR * ID_CAPTION_TAB_DISK;
			const TCHAR * ID_CAPTION_TAB_SHARE;
			const TCHAR * ID_CAPTION_TAB_SAFE;
			const TCHAR * ID_CAPTION_TAB_BOX;
			const TCHAR * ID_TOOLBAR_BK;
			const TCHAR * ID_TOOLBAR_BTN_BK;
			const TCHAR * ID_TOOLBAR_ICO_DOWNLOAD;
			const TCHAR * ID_TOOLBAR_ICO_MORE;
			const TCHAR * ID_TOOLBAR_ICO_NEW_DIR;
			const TCHAR * ID_TOOLBAR_ICO_OFFLINE_DOWN;
			const TCHAR * ID_TOOLBAR_ICO_PUSH;
			const TCHAR * ID_TOOLBAR_ICO_SHARE;
			const TCHAR * ID_TOOLBAR_ICO_UPLOAD;
			const TCHAR * ID_TOOLBAR_ICO_DELETE;
			const TCHAR * ID_SAFEBOX_ICON;
			const TCHAR * ID_SAFEBOX_BTN_BK;
			const TCHAR * ID_TASK_LIST_BTN;
			const TCHAR * ID_TASK_LIST_ICO;
			const TCHAR * ID_STATUS_BAR_BKG;
			const TCHAR * ID_STATUS_BAR_RB;
			const TCHAR * ID_STATUS_BAR_TOOL;
			const TCHAR * ID_STATUS_BAR_BACKUP;
			const TCHAR * ID_STATUS_BAR_LOCK;
			const TCHAR * ID_NAVIGATOR_BKG;
			const TCHAR * ID_NAVI_PATH_INNER_BKG;
			const TCHAR * ID_NAVI_PATH_BKG;
			const TCHAR * ID_NAVI_BACK;
			const TCHAR * ID_NAVI_DROP_ARROW;
			const TCHAR * ID_NAVI_DOWN_ARROW;
			const TCHAR * ID_NAVI_ADDRESS_BKG;
			const TCHAR * ID_NAVI_REFRESH;
			const TCHAR * ID_NAVI_HOME;
			const TCHAR * ID_NAVI_LEFT_WND;
			const TCHAR * ID_NAVI_LEFT_WND_DOT;
			const TCHAR * ID_NAVI_LEFT_WND_HIDE;
			const TCHAR * ID_NAVI_LIST;
			const TCHAR * ID_NAVI_NEXT;
			const TCHAR * ID_NAVI_TILE;
			const TCHAR * ID_SEARCHBOX_BKG;
			const TCHAR * ID_SEARCH_ICO;
			const TCHAR * ID_DELETE_ICO;
			const TCHAR * ID_LIST_HEADER_BKG;
			const TCHAR * ID_LIST_HEADER_ARROW;
			const TCHAR * ID_LIST_SELECT_RANGE;
			const TCHAR * ID_LIST_ITEM_BKG;
			const TCHAR * ID_CHECK_BOX;
			const TCHAR * ID_LIST_DOWNLOAD;
			const TCHAR * ID_LIST_SHARE;
			const TCHAR * ID_LIST_MORE;
			const TCHAR * ID_FUNC_BOX_BACKUP;
			const TCHAR * ID_FUNC_BOX_BTNBKG;
			const TCHAR * ID_FUNC_BOX_DATACABLE;
			const TCHAR * ID_FUNC_BOX_LOCK;
			const TCHAR * ID_FUNC_BOX_PHONE;
			const TCHAR * ID_FUNC_BOX_RECYCLE;
			const TCHAR * ID_FUNC_BOX_VIPONLY;
			const TCHAR * ID_SHAREPANEL_ADDBTN;
			const TCHAR * ID_SHAREPANEL_EMPTY;
			const TCHAR * ID_SHAREPANEL_EMPTYSESSION;
			const TCHAR * ID_SHAREPANEL_FRIEND;
			const TCHAR * ID_SHAREPANEL_GROUP;
			const TCHAR * ID_SHAREPANEL_LEFTPANELBKG;
			const TCHAR * ID_SHAREPANEL_SESSION;
			const TCHAR * ID_SHAREPANEL_SHAREFILEBTN;
		}IMG;
		class _FILETYPE{
			public:
			_FILETYPE(){
				ID_FILE_TYPE_BKG = _T("FILETYPE:ID_FILE_TYPE_BKG");
				ID_FILE_TYPE_DOC = _T("FILETYPE:ID_FILE_TYPE_DOC");
				ID_FILE_TYPE_ALL = _T("FILETYPE:ID_FILE_TYPE_ALL");
				ID_FILE_TYPE_APP = _T("FILETYPE:ID_FILE_TYPE_APP");
				ID_FILE_TYPE_IMG = _T("FILETYPE:ID_FILE_TYPE_IMG");
				ID_FILE_TYPE_MUSIC = _T("FILETYPE:ID_FILE_TYPE_MUSIC");
				ID_FILE_TYPE_OTHER = _T("FILETYPE:ID_FILE_TYPE_OTHER");
				ID_FILE_TYPE_SEED = _T("FILETYPE:ID_FILE_TYPE_SEED");
				ID_FILE_TYPE_SHARE = _T("FILETYPE:ID_FILE_TYPE_SHARE");
				ID_FILE_TYPE_VIDEO = _T("FILETYPE:ID_FILE_TYPE_VIDEO");
			}
			const TCHAR * ID_FILE_TYPE_BKG;
			const TCHAR * ID_FILE_TYPE_DOC;
			const TCHAR * ID_FILE_TYPE_ALL;
			const TCHAR * ID_FILE_TYPE_APP;
			const TCHAR * ID_FILE_TYPE_IMG;
			const TCHAR * ID_FILE_TYPE_MUSIC;
			const TCHAR * ID_FILE_TYPE_OTHER;
			const TCHAR * ID_FILE_TYPE_SEED;
			const TCHAR * ID_FILE_TYPE_SHARE;
			const TCHAR * ID_FILE_TYPE_VIDEO;
		}FILETYPE;
		class _FILEICON{
			public:
			_FILEICON(){
				ID_FILE_ICON_S_ALLFILETYPE = _T("FILEICON:ID_FILE_ICON_S_ALLFILETYPE");
				ID_FILE_ICON_S_APKTYPE = _T("FILEICON:ID_FILE_ICON_S_APKTYPE");
				ID_FILE_ICON_S_APPS = _T("FILEICON:ID_FILE_ICON_S_APPS");
				ID_FILE_ICON_S_DOCTYPE = _T("FILEICON:ID_FILE_ICON_S_DOCTYPE");
				ID_FILE_ICON_S_EXETYPE = _T("FILEICON:ID_FILE_ICON_S_EXETYPE");
				ID_FILE_ICON_S_FOLDERTYPE = _T("FILEICON:ID_FILE_ICON_S_FOLDERTYPE");
				ID_FILE_ICON_S_ICON_SHARE = _T("FILEICON:ID_FILE_ICON_S_ICON_SHARE");
				ID_FILE_ICON_S_IMGTYPE = _T("FILEICON:ID_FILE_ICON_S_IMGTYPE");
				ID_FILE_ICON_S_IPATYPE = _T("FILEICON:ID_FILE_ICON_S_IPATYPE");
				ID_FILE_ICON_S_MUSICTYPE = _T("FILEICON:ID_FILE_ICON_S_MUSICTYPE");
				ID_FILE_ICON_S_OTHERTYPE = _T("FILEICON:ID_FILE_ICON_S_OTHERTYPE");
				ID_FILE_ICON_S_PDFTYPE = _T("FILEICON:ID_FILE_ICON_S_PDFTYPE");
				ID_FILE_ICON_S_PPTTYPE = _T("FILEICON:ID_FILE_ICON_S_PPTTYPE");
				ID_FILE_ICON_S_RARTYPE = _T("FILEICON:ID_FILE_ICON_S_RARTYPE");
				ID_FILE_ICON_S_TORRENTTYPE = _T("FILEICON:ID_FILE_ICON_S_TORRENTTYPE");
				ID_FILE_ICON_S_TXTTYPE = _T("FILEICON:ID_FILE_ICON_S_TXTTYPE");
				ID_FILE_ICON_S_VIDEOTYPE = _T("FILEICON:ID_FILE_ICON_S_VIDEOTYPE");
				ID_FILE_ICON_S_VSDTYPE = _T("FILEICON:ID_FILE_ICON_S_VSDTYPE");
				ID_FILE_ICON_S_XLSTYPE = _T("FILEICON:ID_FILE_ICON_S_XLSTYPE");
				ID_FILE_ICON_B_APKTYPE = _T("FILEICON:ID_FILE_ICON_B_APKTYPE");
				ID_FILE_ICON_B_DOCTYPE = _T("FILEICON:ID_FILE_ICON_B_DOCTYPE");
				ID_FILE_ICON_B_EXETYPE = _T("FILEICON:ID_FILE_ICON_B_EXETYPE");
				ID_FILE_ICON_B_FOLDERTYPE = _T("FILEICON:ID_FILE_ICON_B_FOLDERTYPE");
				ID_FILE_ICON_B_IMGTYPE = _T("FILEICON:ID_FILE_ICON_B_IMGTYPE");
				ID_FILE_ICON_B_IPATYPE = _T("FILEICON:ID_FILE_ICON_B_IPATYPE");
				ID_FILE_ICON_B_MUSICTYPE = _T("FILEICON:ID_FILE_ICON_B_MUSICTYPE");
				ID_FILE_ICON_B_OTHERTYPE = _T("FILEICON:ID_FILE_ICON_B_OTHERTYPE");
				ID_FILE_ICON_B_PDFTYPE = _T("FILEICON:ID_FILE_ICON_B_PDFTYPE");
				ID_FILE_ICON_B_PPTTYPE = _T("FILEICON:ID_FILE_ICON_B_PPTTYPE");
				ID_FILE_ICON_B_RARTYPE = _T("FILEICON:ID_FILE_ICON_B_RARTYPE");
				ID_FILE_ICON_B_TORRENTTYPE = _T("FILEICON:ID_FILE_ICON_B_TORRENTTYPE");
				ID_FILE_ICON_B_TXTTYPE = _T("FILEICON:ID_FILE_ICON_B_TXTTYPE");
				ID_FILE_ICON_B_VIDEOTYPE = _T("FILEICON:ID_FILE_ICON_B_VIDEOTYPE");
				ID_FILE_ICON_B_VSDTYPE = _T("FILEICON:ID_FILE_ICON_B_VSDTYPE");
				ID_FILE_ICON_B_XLSTYPE = _T("FILEICON:ID_FILE_ICON_B_XLSTYPE");
			}
			const TCHAR * ID_FILE_ICON_S_ALLFILETYPE;
			const TCHAR * ID_FILE_ICON_S_APKTYPE;
			const TCHAR * ID_FILE_ICON_S_APPS;
			const TCHAR * ID_FILE_ICON_S_DOCTYPE;
			const TCHAR * ID_FILE_ICON_S_EXETYPE;
			const TCHAR * ID_FILE_ICON_S_FOLDERTYPE;
			const TCHAR * ID_FILE_ICON_S_ICON_SHARE;
			const TCHAR * ID_FILE_ICON_S_IMGTYPE;
			const TCHAR * ID_FILE_ICON_S_IPATYPE;
			const TCHAR * ID_FILE_ICON_S_MUSICTYPE;
			const TCHAR * ID_FILE_ICON_S_OTHERTYPE;
			const TCHAR * ID_FILE_ICON_S_PDFTYPE;
			const TCHAR * ID_FILE_ICON_S_PPTTYPE;
			const TCHAR * ID_FILE_ICON_S_RARTYPE;
			const TCHAR * ID_FILE_ICON_S_TORRENTTYPE;
			const TCHAR * ID_FILE_ICON_S_TXTTYPE;
			const TCHAR * ID_FILE_ICON_S_VIDEOTYPE;
			const TCHAR * ID_FILE_ICON_S_VSDTYPE;
			const TCHAR * ID_FILE_ICON_S_XLSTYPE;
			const TCHAR * ID_FILE_ICON_B_APKTYPE;
			const TCHAR * ID_FILE_ICON_B_DOCTYPE;
			const TCHAR * ID_FILE_ICON_B_EXETYPE;
			const TCHAR * ID_FILE_ICON_B_FOLDERTYPE;
			const TCHAR * ID_FILE_ICON_B_IMGTYPE;
			const TCHAR * ID_FILE_ICON_B_IPATYPE;
			const TCHAR * ID_FILE_ICON_B_MUSICTYPE;
			const TCHAR * ID_FILE_ICON_B_OTHERTYPE;
			const TCHAR * ID_FILE_ICON_B_PDFTYPE;
			const TCHAR * ID_FILE_ICON_B_PPTTYPE;
			const TCHAR * ID_FILE_ICON_B_RARTYPE;
			const TCHAR * ID_FILE_ICON_B_TORRENTTYPE;
			const TCHAR * ID_FILE_ICON_B_TXTTYPE;
			const TCHAR * ID_FILE_ICON_B_VIDEOTYPE;
			const TCHAR * ID_FILE_ICON_B_VSDTYPE;
			const TCHAR * ID_FILE_ICON_B_XLSTYPE;
		}FILEICON;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _SMENU{
			public:
			_SMENU(){
				menu_tray = _T("SMENU:menu_tray");
			}
			const TCHAR * menu_tray;
		}SMENU;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_close",65536},
		{L"btn_head",65542},
		{L"btn_max",65537},
		{L"btn_min",65539},
		{L"btn_msg",65541},
		{L"btn_navi_go_back",65553},
		{L"btn_navi_go_next",65554},
		{L"btn_navi_history",65555},
		{L"btn_navi_home",65556},
		{L"btn_navi_home_drop",65557},
		{L"btn_navi_left_wnd",65560},
		{L"btn_navi_refresh",65558},
		{L"btn_navi_search",65559},
		{L"btn_navi_tile",65561},
		{L"btn_restore",65538},
		{L"btn_set",65540},
		{L"btn_share_add",65578},
		{L"btn_status_backup",65576},
		{L"btn_status_lock",65577},
		{L"btn_status_tool",65575},
		{L"btn_task_list_btn",65546},
		{L"btn_tb_download",65548},
		{L"btn_tb_more",65552},
		{L"btn_tb_new_dir",65550},
		{L"btn_tb_offline_down",65551},
		{L"btn_tb_share",65549},
		{L"btn_tb_upload",65547},
		{L"btn_tb_vip",65543},
		{L"col_1",65568},
		{L"col_2",65571},
		{L"col_3",65573},
		{L"file_list_view",65567},
		{L"file_tile_view",65564},
		{L"list_item_btn",65570},
		{L"list_item_img",65569},
		{L"list_item_modify_time",65574},
		{L"list_item_size",65572},
		{L"prog_test",65544},
		{L"radioex_0",20000},
		{L"radioex_1",10000},
		{L"radioex_2",10001},
		{L"radioex_3",10002},
		{L"radioex_4",10003},
		{L"radioex_5",20005},
		{L"radioex_6",20006},
		{L"radioex_7",20007},
		{L"radioex_8",20008},
		{L"tab_file",65563},
		{L"tab_main",65545},
		{L"tab_share_panel",65579},
		{L"tile_item_img",65565},
		{L"tile_item_txt",65566},
		{L"wnd_left_file_type",65562}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_head = namedXmlID[2].strName;
			btn_max = namedXmlID[3].strName;
			btn_min = namedXmlID[4].strName;
			btn_msg = namedXmlID[5].strName;
			btn_navi_go_back = namedXmlID[6].strName;
			btn_navi_go_next = namedXmlID[7].strName;
			btn_navi_history = namedXmlID[8].strName;
			btn_navi_home = namedXmlID[9].strName;
			btn_navi_home_drop = namedXmlID[10].strName;
			btn_navi_left_wnd = namedXmlID[11].strName;
			btn_navi_refresh = namedXmlID[12].strName;
			btn_navi_search = namedXmlID[13].strName;
			btn_navi_tile = namedXmlID[14].strName;
			btn_restore = namedXmlID[15].strName;
			btn_set = namedXmlID[16].strName;
			btn_share_add = namedXmlID[17].strName;
			btn_status_backup = namedXmlID[18].strName;
			btn_status_lock = namedXmlID[19].strName;
			btn_status_tool = namedXmlID[20].strName;
			btn_task_list_btn = namedXmlID[21].strName;
			btn_tb_download = namedXmlID[22].strName;
			btn_tb_more = namedXmlID[23].strName;
			btn_tb_new_dir = namedXmlID[24].strName;
			btn_tb_offline_down = namedXmlID[25].strName;
			btn_tb_share = namedXmlID[26].strName;
			btn_tb_upload = namedXmlID[27].strName;
			btn_tb_vip = namedXmlID[28].strName;
			col_1 = namedXmlID[29].strName;
			col_2 = namedXmlID[30].strName;
			col_3 = namedXmlID[31].strName;
			file_list_view = namedXmlID[32].strName;
			file_tile_view = namedXmlID[33].strName;
			list_item_btn = namedXmlID[34].strName;
			list_item_img = namedXmlID[35].strName;
			list_item_modify_time = namedXmlID[36].strName;
			list_item_size = namedXmlID[37].strName;
			prog_test = namedXmlID[38].strName;
			radioex_0 = namedXmlID[39].strName;
			radioex_1 = namedXmlID[40].strName;
			radioex_2 = namedXmlID[41].strName;
			radioex_3 = namedXmlID[42].strName;
			radioex_4 = namedXmlID[43].strName;
			radioex_5 = namedXmlID[44].strName;
			radioex_6 = namedXmlID[45].strName;
			radioex_7 = namedXmlID[46].strName;
			radioex_8 = namedXmlID[47].strName;
			tab_file = namedXmlID[48].strName;
			tab_main = namedXmlID[49].strName;
			tab_share_panel = namedXmlID[50].strName;
			tile_item_img = namedXmlID[51].strName;
			tile_item_txt = namedXmlID[52].strName;
			wnd_left_file_type = namedXmlID[53].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_close;
		 const wchar_t * btn_head;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_msg;
		 const wchar_t * btn_navi_go_back;
		 const wchar_t * btn_navi_go_next;
		 const wchar_t * btn_navi_history;
		 const wchar_t * btn_navi_home;
		 const wchar_t * btn_navi_home_drop;
		 const wchar_t * btn_navi_left_wnd;
		 const wchar_t * btn_navi_refresh;
		 const wchar_t * btn_navi_search;
		 const wchar_t * btn_navi_tile;
		 const wchar_t * btn_restore;
		 const wchar_t * btn_set;
		 const wchar_t * btn_share_add;
		 const wchar_t * btn_status_backup;
		 const wchar_t * btn_status_lock;
		 const wchar_t * btn_status_tool;
		 const wchar_t * btn_task_list_btn;
		 const wchar_t * btn_tb_download;
		 const wchar_t * btn_tb_more;
		 const wchar_t * btn_tb_new_dir;
		 const wchar_t * btn_tb_offline_down;
		 const wchar_t * btn_tb_share;
		 const wchar_t * btn_tb_upload;
		 const wchar_t * btn_tb_vip;
		 const wchar_t * col_1;
		 const wchar_t * col_2;
		 const wchar_t * col_3;
		 const wchar_t * file_list_view;
		 const wchar_t * file_tile_view;
		 const wchar_t * list_item_btn;
		 const wchar_t * list_item_img;
		 const wchar_t * list_item_modify_time;
		 const wchar_t * list_item_size;
		 const wchar_t * prog_test;
		 const wchar_t * radioex_0;
		 const wchar_t * radioex_1;
		 const wchar_t * radioex_2;
		 const wchar_t * radioex_3;
		 const wchar_t * radioex_4;
		 const wchar_t * radioex_5;
		 const wchar_t * radioex_6;
		 const wchar_t * radioex_7;
		 const wchar_t * radioex_8;
		 const wchar_t * tab_file;
		 const wchar_t * tab_main;
		 const wchar_t * tab_share_panel;
		 const wchar_t * tile_item_img;
		 const wchar_t * tile_item_txt;
		 const wchar_t * wnd_left_file_type;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_close	=	65536;
		const static int btn_head	=	65542;
		const static int btn_max	=	65537;
		const static int btn_min	=	65539;
		const static int btn_msg	=	65541;
		const static int btn_navi_go_back	=	65553;
		const static int btn_navi_go_next	=	65554;
		const static int btn_navi_history	=	65555;
		const static int btn_navi_home	=	65556;
		const static int btn_navi_home_drop	=	65557;
		const static int btn_navi_left_wnd	=	65560;
		const static int btn_navi_refresh	=	65558;
		const static int btn_navi_search	=	65559;
		const static int btn_navi_tile	=	65561;
		const static int btn_restore	=	65538;
		const static int btn_set	=	65540;
		const static int btn_share_add	=	65578;
		const static int btn_status_backup	=	65576;
		const static int btn_status_lock	=	65577;
		const static int btn_status_tool	=	65575;
		const static int btn_task_list_btn	=	65546;
		const static int btn_tb_download	=	65548;
		const static int btn_tb_more	=	65552;
		const static int btn_tb_new_dir	=	65550;
		const static int btn_tb_offline_down	=	65551;
		const static int btn_tb_share	=	65549;
		const static int btn_tb_upload	=	65547;
		const static int btn_tb_vip	=	65543;
		const static int col_1	=	65568;
		const static int col_2	=	65571;
		const static int col_3	=	65573;
		const static int file_list_view	=	65567;
		const static int file_tile_view	=	65564;
		const static int list_item_btn	=	65570;
		const static int list_item_img	=	65569;
		const static int list_item_modify_time	=	65574;
		const static int list_item_size	=	65572;
		const static int prog_test	=	65544;
		const static int radioex_0	=	20000;
		const static int radioex_1	=	10000;
		const static int radioex_2	=	10001;
		const static int radioex_3	=	10002;
		const static int radioex_4	=	10003;
		const static int radioex_5	=	20005;
		const static int radioex_6	=	20006;
		const static int radioex_7	=	20007;
		const static int radioex_8	=	20008;
		const static int tab_file	=	65563;
		const static int tab_main	=	65545;
		const static int tab_share_panel	=	65579;
		const static int tile_item_img	=	65565;
		const static int tile_item_txt	=	65566;
		const static int wnd_left_file_type	=	65562;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
