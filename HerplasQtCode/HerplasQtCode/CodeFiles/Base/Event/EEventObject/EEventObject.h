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

#pragma once

/************************************************************
** Include part
************************************************************/
#include <QString>
#include <QMultiHash>

/************************************************************
** Class
**
** Name: EEventObject
** Intro: Provide a basic object.
************************************************************/
class EEventObject {
public:
	/************************************************************
	** Member Function
	**
	** Name: EEventObject
	** Parameter: none
	** Returned Value: none
	** Intro: EEventObject class's constructor.
	************************************************************/
	EEventObject() = default;

	/************************************************************
	** Member Function
	**
	** Name: ~EEventObject
	** Parameter: none
	** Returned Value: none
	** Intro: EEventObject class's destructor.
	************************************************************/
	~EEventObject() = default;

protected:
	/************************************************************
	** Member Function
	**
	** Name: setReciver
	** Parameter: objectPoint - Object's pointer
	**                            functionPointer - Function's pointer
	**                            objectName - Event object's name
	**                            eventName - Event's name
	** Returned Value: bool - Successes return true, failing return
	**                                                     false
	** Intro: Set a event revicer to revice event.
	************************************************************/
	template <typename T>
	bool setReciver(T *object, void(T::*function)(void *, void *), QString objectName = "", QString eventName = "") {
		if (objectName != "" && eventName != "") {
			EEventPointer tempEventPointer;
			tempEventPointer.object = (EEventObject *)object;
			tempEventPointer.function = (void(EEventObject::*)(void *, void *))function;
			EEventObject::totalList.insert(objectName + "_" + eventName, tempEventPointer);
			return true;
		} else if (objectName == "" && eventName != "") {
			EEventPointer tempEventPointer;
			tempEventPointer.object = (EEventObject *)object;
			tempEventPointer.function = (void(EEventObject::*)(void *, void *))function;
			EEventObject::eventList.insert(eventName, tempEventPointer);
			return true;
		} else if (objectName != "" && eventName == "") {
			EEventPointer tempEventPointer;
			tempEventPointer.object = (EEventObject *)object;
			tempEventPointer.function = (void(EEventObject::*)(void *, void *))function;
			EEventObject::objectList.insert(objectName, tempEventPointer);
			return true;
		} else {
			return false;
		}
	}

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
	bool deleteReciver(QString objectName = "", QString eventName = "");

	/************************************************************
	** Member Function
	**
	** Name: postEvent
	** Parameter: returnValue - Return value's pointer 
	**							parameter - Calling function's parameter
	**							objectName - Event object name
	**							eventName - Event name
	** Returned Value: bool - Successes return true, failing return
	**                                                     false
	** Intro: Post an event!
	************************************************************/
	template <typename TOne, typename TTwo>
	bool postEvent(TOne *returnValue, TTwo *parameter, QString objectName = "", QString eventName = "") {
		if (objectName != "" && eventName != "") {
			for (auto nowItem : EEventObject::objectList.values(objectName)) {								// Post event to object
				(nowItem.object->*nowItem.function)(returnValue, parameter);
			}
			for (auto nowItem : EEventObject::eventList.values(eventName)) {								// Post event to event name
				(nowItem.object->*nowItem.function)(returnValue, parameter);
			}
			for (auto nowItem : EEventObject::totalList.values(objectName + "_" + eventName)) {								// Post event to event name
				(nowItem.object->*nowItem.function)(returnValue, parameter);
			}
			return true;
		} else if (objectName == "" && eventName != "") {
			for (auto nowItem : EEventObject::eventList.values(eventName)) {								// Post event to event name
				(nowItem.object->*nowItem.function)(returnValue, parameter);
			}
			return true;
		} else if (objectName != "" && eventName == "") {
			for (auto nowItem : EEventObject::objectList.values(objectName)) {								// Post event to object
				(nowItem.object->*nowItem.function)(returnValue, parameter);
			}
			return true;
		} else {
			return false;
		}
	}

private:
	/************************************************************
	** Member Struct
	**
	** Name: EEventPointer
	** Intro: Save function pointer's information.
	************************************************************/
	struct EEventPointer {
	public:
		/************************************************************
		** Member Object
		**
		** Name: objectPointer
		** Parameter: none
		** Returned Value: none
		** Intro: Save object pointer.
		************************************************************/
		EEventObject *object = nullptr;

		/************************************************************
		** Member Object
		**
		** Name: functionPointer
		** Parameter: none
		** Returned Value: none
		** Intro: Save function pointer.
		************************************************************/
		void(EEventObject::*function)(void *, void *) = nullptr;
	};

private:
	/************************************************************
	** Member Object
	**
	** Name: objectList
	** Parameter: QString - Object name
	**                            EEventPointer - Function pointer
	** Returned Value: none
	** Intro: Save function pointer with object name.
	************************************************************/
	static QMultiHash<QString, EEventPointer> objectList;

	/************************************************************
	** Member Object
	**
	** Name: eventList
	** Parameter: QString - Event name
	**                            EEventPointer - Function pointer
	** Returned Value: none
	** Intro: Save function pointer with event name.
	************************************************************/
	static QMultiHash<QString, EEventPointer> eventList;

	/************************************************************
	** Member Object
	**
	** Name: totalList
	** Parameter: QString - Total name
	**                            EEventPointer - Function pointer
	** Returned Value: none
	** Intro: Save function pointer with total name.
	************************************************************/
	static QMultiHash<QString, EEventPointer> totalList;
};