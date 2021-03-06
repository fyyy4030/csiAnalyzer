/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.12                          *
*        Compiled Jun 29 2011, 15:28:47                              *
*        (c) 2011 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "AboutWindowDLG.h"
#include "../Controller.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

#define ID_WINDOW_0     (GUI_ID_USER + 0x00)
#define ID_TEXT_0     (GUI_ID_USER + 0x01)
#define ID_BUTTON_0     (GUI_ID_USER + 0x05)
#define ID_TEXT_1     (GUI_ID_USER + 0x2C)
#define ID_TEXT_2     (GUI_ID_USER + 0x2D)
#define ID_TEXT_3     (GUI_ID_USER + 0x2E)
#define ID_TEXT_4     (GUI_ID_USER + 0x2F)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "AboutWindow", ID_WINDOW_0, 0, 0, 800, 480, 0, 0, 0 },
  { TEXT_CreateIndirect, "title", ID_TEXT_0, 100, 5, 600, 30, 0, 100, 0 },
  { BUTTON_CreateIndirect, "Back", ID_BUTTON_0, 340, 390, 120, 40, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_1, 100, 180, 600, 40, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_2, 110, 100, 600, 40, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_3, 100, 300, 600, 40, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_4, 100, 220, 600, 40, 0, 100, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int Id, NCode;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
	 
	  
    //
    // Initialization of 'title'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetFont(hItem, GUI_FONT_32B_1);
    TEXT_SetText(hItem, "About ");
    TEXT_SetTextColor(hItem, 0x00C08000);
    //
    // Initialization of 'Back'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetFont(hItem, GUI_FONT_24_ASCII);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
    TEXT_SetFont(hItem, GUI_FONT_32B_ASCII);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetText(hItem, "Fusion Process Control Pvt. Ltd.");
    TEXT_SetTextColor(hItem, 0x00C08000);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetText(hItem, "C/Si Analyzer v1.0");
    TEXT_SetFont(hItem, GUI_FONT_32B_ASCII);
    TEXT_SetTextColor(hItem, 0x00C08000);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetText(hItem, "Developed by: Rohan Pandit");
    TEXT_SetFont(hItem, GUI_FONT_24B_ASCII);
    TEXT_SetTextColor(hItem, 0x00C08000);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
    TEXT_SetText(hItem, "Sahakar Nagar, Pune");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetFont(hItem, GUI_FONT_24B_ASCII);
    TEXT_SetTextColor(hItem, 0x00C08000);
    // USER START (Optionally insert additional code for further widget initialization)

	
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'Back'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  showhideWindow(PG_SETTINGS, PAGES);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  case WM_PAINT :
	  GUI_SetColor(GUI_YELLOW);
	  GUI_DrawRoundedRect(80, 40, 720, 440, 20); 
	 
		  break;
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateAboutWindow
*/

WM_HWIN CreateAboutWindow(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), &_cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
