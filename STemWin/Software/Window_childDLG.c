/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.28                          *
*        Compiled Jan 30 2015, 16:41:06                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
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
#define ID_BUTTON_0 (GUI_ID_USER + 0x01)
#define ID_BUTTON_1 (GUI_ID_USER + 0x02)
#define ID_BUTTON_2 (GUI_ID_USER + 0x03)
#define ID_BUTTON_3 (GUI_ID_USER + 0x04)
#define ID_BUTTON_4 (GUI_ID_USER + 0x05)
#define ID_BUTTON_5 (GUI_ID_USER + 0x06)
#define ID_BUTTON_6 (GUI_ID_USER + 0x07)
#define ID_BUTTON_7 (GUI_ID_USER + 0x08)
#define ID_BUTTON_8 (GUI_ID_USER + 0x09)
#define ID_BUTTON_9 (GUI_ID_USER + 0x0A)
#define ID_TEXT_0 (GUI_ID_USER + 0x0B)


// USER START (Optionally insert additional defines)
extern	WM_HWIN hWin_child;
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)

//=============================================================

//////static BUTTON_SKINFLEX_PROPS _aProps[] = {
//////// BUTTON_SKINFLEX_PI_PRESSED
//////  {
//////    {GUI_RED, GUI_RED, GUI_DARKRED},
//////    {GUI_LIGHTRED, GUI_RED },
//////    {GUI_RED, GUI_DARKRED },
//////     3
//////  },
//////// BUTTON_SKINFLEX_PI_FOCUSSED
//////  {
//////    {GUI_DARKRED, GUI_RED, GUI_DARKGRAY},
//////    {GUI_LIGHTGRAY, GUI_GRAY },
//////    {GUI_GRAY, GUI_DARKGRAY },
//////     3
//////  },
//////// BUTTON_SKINFLEX_PI_ENABLED
//////  {
//////    {GUI_DARKRED, GUI_GRAY, GUI_DARKGRAY},
//////    {GUI_LIGHTGRAY, GUI_GRAY },
//////    {GUI_GRAY, GUI_DARKGRAY },
//////     3
//////  },
//////// BUTTON_SKINFLEX_PI_DISABLED
//////  {
//////    {0, 0, 0},
//////    {0, 0 },
//////    {0, 0 },
//////     3
//////  },
//////};

/*********************************************************************
*
*       _CustomSkin
*/
static int _CustomSkin(const WIDGET_ITEM_DRAW_INFO * pDrawItemInfo) {
  int       Id;
//  GUI_POINT aPoints[4];
////  GUI_COLOR Color;
//  BUTTON_SKINFLEX_PROPS aPropsOld[4];
//  int i;

  switch (pDrawItemInfo->Cmd) {
  case WIDGET_ITEM_DRAW_BACKGROUND:
    Id = WM_GetId(pDrawItemInfo->hWin);
    switch (Id) {
    case ID_BUTTON_0:
      //
      // Draw an elliptic button
      //
//      if (BUTTON_IsPressed(pDrawItemInfo->hWin)) {
//        Color = GUI_YELLOW;
//      } else {
//        Color = GUI_RED;
//      }
      GUI_SetColor(0xE5CC00);
      //GUI_FillEllipse(pDrawItemInfo->x1 / 2, pDrawItemInfo->y1 / 2, pDrawItemInfo->x1 / 2 - 1, pDrawItemInfo->y1 / 2 - 1);
      GUI_DrawCircle(pDrawItemInfo->x1 / 2, pDrawItemInfo->y1 / 2, 20);			
      break;
////////////////////    case ID_BUTTON_1:
////////////////////      //
////////////////////      // Draw a triangle button
////////////////////      //
//////////////////////////      aPoints[0].x = pDrawItemInfo->x1 / 2;
//////////////////////////      aPoints[0].y = pDrawItemInfo->y0;
//////////////////////////      aPoints[1].x = pDrawItemInfo->x1;
//////////////////////////      aPoints[1].y = pDrawItemInfo->y1;
//////////////////////////      aPoints[2].x = pDrawItemInfo->x0;
//////////////////////////      aPoints[2].y = pDrawItemInfo->y1;
////////////////////      if (BUTTON_IsPressed(pDrawItemInfo->hWin)) {
////////////////////        Color = GUI_GREEN;
////////////////////      } else {
////////////////////        Color = GUI_CYAN;
////////////////////      }
////////////////////      GUI_SetColor(Color);
//////////////////////////      GUI_FillPolygon(aPoints, GUI_COUNTOF(aPoints), pDrawItemInfo->x0, pDrawItemInfo->y0);
//////////////////////      GUI_FillCircle(pDrawItemInfo->x1 / 2, pDrawItemInfo->y1 / 2, 40);					


////////////////////      aPoints[0].x = pDrawItemInfo->x0;
////////////////////      aPoints[0].y = pDrawItemInfo->y0;
////////////////////      aPoints[1].x = pDrawItemInfo->x1;
////////////////////      aPoints[1].y = pDrawItemInfo->y1;
////////////////////      aPoints[2].x = pDrawItemInfo->x0;
////////////////////      aPoints[2].y = pDrawItemInfo->y1;
////////////////////      aPoints[3].x = pDrawItemInfo->x0;
////////////////////      aPoints[4].y = pDrawItemInfo->y1;				
//////////////////////			GUI_FillRect(aPoints[0].x, aPoints[0].y, aPoints[1].x, aPoints[1].y);			
////////////////////			GUI_DrawRect(aPoints[0].x, aPoints[0].y, aPoints[1].x, aPoints[1].y);				
////////////////////			
////////////////////      break;
////////    case ID_BUTTON_2:
////////      //
////////      // Draw a standard button with different colors
////////      //
////////      for (i = 0; i < 4; i++) {
////////        BUTTON_GetSkinFlexProps(&aPropsOld[i], i);  // Get default properties
////////        BUTTON_SetSkinFlexProps(&_aProps[i], i);    // Set new properties
////////      }
////////      BUTTON_DrawSkinFlex(pDrawItemInfo);           // Draw button with new properties
////////      for (i = 0; i < 4; i++) {
////////        BUTTON_SetSkinFlexProps(&aPropsOld[i], i);  // Restore old properties to avoid other buttons will be drawn with this properties
////////      }
////////      break;
////////    case ID_BUTTON_3:
////////      BUTTON_DrawSkinFlex(pDrawItemInfo);
////////      break;
    }
    return 0;
  default:
    return BUTTON_DrawSkinFlex(pDrawItemInfo);
  }
}
//========================================================================

// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window_child", ID_WINDOW_0, 0, 0, 800, 480, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_0, 704, 3, 95, 88, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "English", ID_BUTTON_1, 55, 120, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Ukr", ID_BUTTON_2, 294, 120, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "russ", ID_BUTTON_3, 530, 120, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "France", ID_BUTTON_4, 55, 200, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Ital", ID_BUTTON_5, 293, 200, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Espan", ID_BUTTON_6, 530, 200, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Deutch", ID_BUTTON_7, 56, 280, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Polski", ID_BUTTON_8, 293, 280, 215, 60, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Portug", ID_BUTTON_9, 530, 280, 215, 60, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_0, 38, 23, 187, 57, 0, 0x0, 0 },
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
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window_child'
    //
    hItem = pMsg->hWin;
    WINDOW_SetBkColor(hItem, 0x00361400);
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetText(hItem, "     X");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetTextColor(hItem, 0x00FF8000);
    // USER START (Optionally insert additional code for further widget initialization)
	
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
		BUTTON_SetTextColor(hItem,0,GUI_WHITE);
		BUTTON_SetTextColor(hItem,1,GUI_WHITE);
		BUTTON_SetTextColor(hItem,2,GUI_WHITE);	
    BUTTON_SetSkin(hItem, _CustomSkin);	
	      WM_SetHasTrans(hItem); 
	
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
			  WM_DeleteWindow(hWin_child);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'English'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_2: // Notifications sent by 'Ukr'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_3: // Notifications sent by 'russ'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_4: // Notifications sent by 'France'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_5: // Notifications sent by 'Ital'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_6: // Notifications sent by 'Espan'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_7: // Notifications sent by 'Deutch'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_8: // Notifications sent by 'Polski'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_9: // Notifications sent by 'Portug'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
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
*       CreateWindow_child
*/
WM_HWIN CreateWindow_child(void);
WM_HWIN CreateWindow_child(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
