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

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0 (GUI_ID_USER + 0x01)
#define ID_TEXT_1 (GUI_ID_USER + 0x02)
#define ID_TEXT_2 (GUI_ID_USER + 0x03)
#define ID_TEXT_3 (GUI_ID_USER + 0x04)
#define ID_TEXT_4 (GUI_ID_USER + 0x05)
#define ID_TEXT_5 (GUI_ID_USER + 0x06)
#define ID_TEXT_6 (GUI_ID_USER + 0x07)
#define ID_TEXT_7 (GUI_ID_USER + 0x08)
#define ID_TEXT_8 (GUI_ID_USER + 0x09)
#define ID_TEXT_9 (GUI_ID_USER + 0x0A)
#define ID_TEXT_10 (GUI_ID_USER + 0x0B)
#define ID_TEXT_11 (GUI_ID_USER + 0x0C)
#define ID_TEXT_12 (GUI_ID_USER + 0x0D)
#define ID_TEXT_13 (GUI_ID_USER + 0x0E)
#define ID_TEXT_14 (GUI_ID_USER + 0x0F)
#define ID_TEXT_15 (GUI_ID_USER + 0x10)
#define ID_TEXT_16 (GUI_ID_USER + 0x11)
#define ID_TEXT_17 (GUI_ID_USER + 0x12)

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
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, -1, 0, 800, 480, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_0, 10, 54, 144, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_1, 10, 85, 122, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_2, 10, 114, 136, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_3, 10, 142, 152, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_4, 10, 176, 204, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_5, 10, 210, 211, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_6, 10, 243, 189, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_7, 10, 279, 250, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_8, 10, 350, 272, 42, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_9, 10, 435, 310, 34, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_10, 10, 391, 293, 41, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_11, 643, 12, 151, 42, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_12, 535, 66, 256, 44, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_13, 515, 119, 277, 57, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_14, 443, 185, 362, 76, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_15, 460, 389, 342, 89, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_16, 432, 279, 362, 106, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_17, 10, 315, 223, 20, 0, 100, 0 },
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
    // Initialization of 'Window'
    //
    hItem = pMsg->hWin;
    WINDOW_SetBkColor(hItem, 0x0000FF00);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetFont(hItem, GUI_FONT_13B_ASCII);
    TEXT_SetText(hItem, "This is 13B_ASCII font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetText(hItem, "This is 16B font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
    TEXT_SetFont(hItem, GUI_FONT_16B_ASCII);
    TEXT_SetText(hItem, "This is 16B ASCII font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
    TEXT_SetFont(hItem, GUI_FONT_20B_1);
    TEXT_SetText(hItem, "This is 20B font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
    TEXT_SetFont(hItem, GUI_FONT_20B_ASCII);
    TEXT_SetText(hItem, "This is 20B ASCII font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_5);
    TEXT_SetFont(hItem, GUI_FONT_20F_ASCII);
    TEXT_SetText(hItem, "This is 20F ASCII font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_6);
    TEXT_SetFont(hItem, GUI_FONT_24B_1);
    TEXT_SetText(hItem, "This is 24B font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_7);
    TEXT_SetFont(hItem, GUI_FONT_24B_ASCII);
    TEXT_SetText(hItem, "This is 24B ASCII font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_8);
    TEXT_SetFont(hItem, GUI_FONT_32_ASCII);
    TEXT_SetText(hItem, "This is 32 ASCII font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_9);
    TEXT_SetFont(hItem, GUI_FONT_32B_ASCII);
    TEXT_SetText(hItem, "This is 32B ASCII font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_10);
    TEXT_SetFont(hItem, GUI_FONT_32B_1);
    TEXT_SetText(hItem, "This is 32B font");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_11);
    TEXT_SetFont(hItem, GUI_FONT_D24X32);
    TEXT_SetText(hItem, "123.45");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_12);
    TEXT_SetFont(hItem, GUI_FONT_D32);
    TEXT_SetText(hItem, "123.4567890");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_13);
    TEXT_SetFont(hItem, GUI_FONT_D48);
    TEXT_SetText(hItem, "000.0123");
    TEXT_SetTextColor(hItem, 0x0000FFFF);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_14);
    TEXT_SetFont(hItem, GUI_FONT_D64);
    TEXT_SetText(hItem, "-987.321");
    TEXT_SetTextColor(hItem, 0x00FF0000);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_15);
    TEXT_SetFont(hItem, GUI_FONT_D80);
    TEXT_SetText(hItem, "123.45");
    TEXT_SetTextColor(hItem, 0x000000FF);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_16);
    TEXT_SetFont(hItem, GUI_FONT_D60X80);
    TEXT_SetText(hItem, "67.765");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_17);
    TEXT_SetFont(hItem, GUI_FONT_24_ASCII);
    TEXT_SetText(hItem, "This is 24 ASCII font");
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  // USER START (Optionally insert additional message handling)
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
*       CreateWindow
*/
WM_HWIN CreateWindow(void);
WM_HWIN CreateWindow(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), &_cbDialog, WM_HBKWIN, -1, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
void MainTask(void);
void MainTask(void) {
	GUI_Init();

	CreateWindow();
	while (1) {
		GUI_Delay(200);
	}
}
// USER END

/*************************** End of file ****************************/
