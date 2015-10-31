/*
@Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.

@Project: HerplasQt - Code
@Intro: Qt is a powerful and easy framwork. It is also cross-platform. But it's UI editing and coding is not very friendly.
So, this project is present! In IDE utility, you can generate UI easily. Of course, it's visualized editing. Then, IDE
can make an UI file. In coding utility, you can analyze the UI file and make the UI automatically in program. It
includes Event System and Factory System and many other utilities.
@Licence: This project is open-source. And it follow GNU Lesser General Public License v3. You can modify and
distribute freely as long as you follow the license.
*/
/*
@Author: LeLe570929726
@Last Change Time: 2015/10/31 11:43
*/

/*
@Intro: Includes
*/
#include "EventObject.h"

/*
@Type: Member object

@Name: objectList
@Parameter: QString - Object name
EEventPointer - Function pointer
@Return: none
@Intro: Save function pointer with object name
*/
QMultiHash<QString, EEventObject::EEventPointer> EEventObject::objectList;

/*
@Type: Member Object

@Name: eventList
@Parameter: QString - Event name
EEventPointer - Function pointer
@Return: none
@Intro: Save function pointer with event name
*/
QMultiHash<QString, EEventObject::EEventPointer> EEventObject::eventList;

/*
@Type: Member object

@Name: totalList
@Parameter: QString - Total name
EEventPointer - Function pointer
@Return: none
@Intro: Save function pointer with total name
*/
QMultiHash<QString, EEventObject::EEventPointer> EEventObject::totalList;

/*
@Type: Member function

@Name: removeReciver
@Parameter: objectName - Event object's name
eventName - Event's name
@Return: bool - Successes return true, failing return false
@Intro: Delete an event reciver
*/
bool EEventObject::removeReciver(QString objectName, QString eventName) {
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