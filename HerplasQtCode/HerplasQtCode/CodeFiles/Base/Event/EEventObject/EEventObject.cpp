/************************************************************
** Copyright ® 2015 LeLe570929726. All rights reserved.
**
** Project: HerplasQt-Code
** Intro: Qt is a powerful and easy framwork. It also can
**              cross-platform. But it's UI edit part is not very
**              friendly. So, this project is appear! In IDE part, you can
**              make UI easily. Of cause, it's visible edit. Then, IDE can
**              make an UI file. In code part, program can analyze the
**              UI file and make the UI automatic in program. It's
**              include Event system and Factory System and so on.
** Licence: This project is open-source. And it's follow
**                     GNU Lesser General Public License v3. You can
**                     modify and distribute freely if you follow the
**                     license.
************************************************************/
/************************************************************
** Author: LeLe570929726
** Time: 2015/09/25 18:29
************************************************************/

/************************************************************
** Include part
************************************************************/
#include "EEventObject.h"

/************************************************************
** Member Object
**
** Name: objectList
** Parameter: QString - Object name
**                            EEventPointer - Function pointer
** Returned Value: none
** Intro: Save function pointer with object name.
************************************************************/
QMultiHash<QString, EEventObject::EEventPointer> EEventObject::objectList;

/************************************************************
** Member Object
**
** Name: eventList
** Parameter: QString - Event name
**                            EEventPointer - Function pointer
** Returned Value: none
** Intro: Save function pointer with event name.
************************************************************/
QMultiHash<QString, EEventObject::EEventPointer> EEventObject::eventList;

/************************************************************
** Member Object
**
** Name: totalList
** Parameter: QString - Total name
**                            EEventPointer - Function pointer
** Returned Value: none
** Intro: Save function pointer with total name.
************************************************************/
QMultiHash<QString, EEventObject::EEventPointer> EEventObject::totalList;

/************************************************************
** Member Function
**
** Name: deleteReciver
** Parameter: objectName - Event object's name
**                            eventName - Event's name
** Returned Value: bool - Successes return true, failing return
**                                                     false
** Intro: Delete an event reciver.
************************************************************/
bool EEventObject::deleteReciver(QString objectName, QString eventName) {
	if (objectName != "" && eventName != "") {
		EEventObject::objectList.remove(objectName);
		EEventObject::eventList.remove(eventName);
		EEventObject::totalList.remove(objectName + "_" + eventName);
		return true;
	} else if (objectName == "" && eventName != "") {
		EEventObject::eventList.remove(eventName);
		return true;
	} else if (objectName != "" && eventName == "") {
		EEventObject::objectList.remove(objectName);
		return true;
	} else {
		return false;
	}
}