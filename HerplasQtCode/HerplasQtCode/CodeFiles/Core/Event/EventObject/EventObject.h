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

#pragma once

/*
@Intro: Includes
*/
#include <QString>
#include <QMultiHash>

/*
@Type: Class

@Name: EEventObject
@Intro: Provide a basic event object.
*/
class EEventObject {
public:
	/*
	@Type: Member function

	@Name: EEventObject
	@Parameter: none
	@Return: none
	@Intro: EEventObject class's constructor
	*/
	EEventObject() = default;

	/*
	@Type: Member function

	@Name: ~EEventObject
	@Parameter: none
	@Return: none
	@Intro: EEventObject class's destructor.
	*/
	~EEventObject() = default;

protected:
	/*
	@Type: Member function

	@Name: setReciver
	@Parameter: objectPoint - Object's pointer
	                                functionPointer - Function's pointer
									objectName - Event object's name
									eventName - Event's name
	@Return: bool - Successes return true, failing return false
	@Intro: Set a event revicer to revice event
	*/
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

	/*
	@Type: Member function

	@Name: removeReciver
	@Parameter: objectName - Event object's name
	                                eventName - Event's name
	@Return: bool - Successes return true, failing return false
	@Intro: Delete an event reciver
	*/
	bool removeReciver(QString objectName = "", QString eventName = "");

	/*
	@Type: Member function

	@Name: postEvent
	@Parameter: returnValue - Return value's pointer
	                               parameter - Calling function's parameter
								   objectName - Event object name
								   eventName - Event name
	@Return: bool - Successes return true, failing return false
	@Intro: Post an event
	*/
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
	/*
	@Type: Member struct

	@Name: EEventPointer
	@Intro: Save function pointer's information
	*/
	struct EEventPointer {
	public:
		/*
		@Type: Member object

		@Name: objectPointer
		@Parameter: none
		@Return: none
		@Intro: Save object pointer
		*/
		EEventObject *object = nullptr;

		/*
		@Type: Member object

		@Name: functionPointer
		@Parameter: none
		@Return: none
		@Intro: Save function pointer
		*/
		void(EEventObject::*function)(void *, void *) = nullptr;
	};

private:
	/*
	@Type: Member object

	@Name: objectList
	@Parameter: QString - Object name
	                                EEventPointer - Function pointer
	@Return: none
	@Intro: Save function pointer with object name
	*/
	static QMultiHash<QString, EEventPointer> objectList;

	/*
	@Type: Member Object

	@Name: eventList
	@Parameter: QString - Event name
	                                EEventPointer - Function pointer
	@Return: none
	@Intro: Save function pointer with event name
	*/
	static QMultiHash<QString, EEventPointer> eventList;

	/*
	@Type: Member object

	@Name: totalList
	@Parameter: QString - Total name
	                                EEventPointer - Function pointer
	@Return: none
	@Intro: Save function pointer with total name
	*/
	static QMultiHash<QString, EEventPointer> totalList;
};