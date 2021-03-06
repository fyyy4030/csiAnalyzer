
#include "GUI.h"
#include "DIALOG.h"
#include "GRAPH.h"
#include <stdlib.h>

#define SIZE 500
GRAPH_DATA_Handle hData;
GRAPH_SCALE_Handle hScaleX,hScaleY;
//I16 aData0[] = { 23,34,03,30,47,64,56,27 };
static GUI_POINT data_[10] = {
	{0,200},
	{ 100,40 },
	{ 200,60 },
	{ 300,80 },
	{ 400,60 },
	{ 500,40 },
	{ 60,20 },
	{ 70,00 },
	{ 80,20 },
	{ 90,40 }

};



void MainTask(void);
void MainTask(void) {
	WM_HWIN hDlg, hGraph = 0;
	int NumDataItems = 100,MaxNumDataItems=500;
	GUI_Init();
	GUI_CURSOR_Show();
	WM_SetDesktopColor(GUI_BLACK);
#if GUI_SUPPORT_MEMDEV
	WM_SetCreateFlags(WM_CF_MEMDEV);
#endif
	hGraph = GRAPH_CreateEx(100, 100, 500, 300, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_GRAPH0);
	GRAPH_DATA_XY_Clear(hData);
	hData = GRAPH_DATA_XY_Create(GUI_RED, MaxNumDataItems, data_, NumDataItems);
	GRAPH_AttachData(hGraph, hData);
	hScaleY = GRAPH_SCALE_Create(50, GUI_TA_RIGHT, GRAPH_SCALE_CF_VERTICAL, 50);
	GRAPH_SCALE_SetFont(hScaleY, GUI_FONT_24_ASCII);
	GRAPH_AttachScale(hGraph, hScaleY);
	GRAPH_SCALE_SetFactor(hScaleY, 1);

	hScaleX = GRAPH_SCALE_Create(0, GUI_TA_RIGHT, GRAPH_SCALE_CF_HORIZONTAL, 100);
	GRAPH_SCALE_SetFont(hScaleX, GUI_FONT_24_ASCII);
	GRAPH_AttachScale(hGraph, hScaleX);
	//GRAPH_SCALE_SetFactor(hScaleX,1 );
	//GRAPH_SCALE_SetTickDist(hScaleX, 50);
	//GRAPH_DATA_YT_SetAlign(hData,GRAPH_ALIGN_LEFT);
	//GRAPH_SetVSizeX(hGraph, 100);

	GRAPH_SetBorder(hGraph, 60, 0, 0, 0);
	/*
	Do something with the widget...
	*/
	//WM_DeleteWindow(hGraph);
	int i = 0;
	
	GRAPH_AttachData(hGraph, hData);
	while (1) {
		
#ifdef WIN32
		GUI_Delay(1000);

		/*GUI_POINT n;
		i += 10;
		n.x = i;
		n.y = i;
		GUI_POINT *pn = &n;
		GRAPH_DATA_XY_AddPoint(hData,pn ); */
#endif
		
		/*
		if (!_Stop) {
			if (!hGraph) {
				hGraph = WM_GetDialogItem(hDlg, GUI_ID_GRAPH0);
			}
			_AddValues(hGraph);
		}*/
		//GUI_Exec();
		//GUI_Delay(10);
	}
}