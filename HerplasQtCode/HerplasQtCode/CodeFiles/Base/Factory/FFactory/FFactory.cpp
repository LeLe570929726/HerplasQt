/************************************************************
** Copyright ® 2015 LeLe570929726. All rights reserved.
**
** Project: HerplasQt-Code
** Intro: Qt is a powerful and easy framework. It is also
**              cross-platform. But it's UI editing part is not very
**              friendly. So, this project is present! In IDE part, you can
**              generate UI easily. Of course, it's visualized edit. Then,
**              IDE can make an UI file. In coding part, program can
**              analyze the UI file and make the UI automatically in
**              program. It includes Event system and Factory System
**              and many other utililities.
** Licence: This project is open-source. And it follow
**                     GNU Lesser General Public License v3. You can
**                     modify and distribute freely as long as you follow
**                     the  license.
************************************************************/
/************************************************************
** Author: LeLe570929726
** Time: 2015/10/02 11:12
************************************************************/

/************************************************************
** Include part
************************************************************/
#include "FFactory.h"

/************************************************************
** Member Object
**
** Name: widgetList
** Parameter: QString - Widget id
**                            QString - Factory id
** Returned Value: none
** Intro: Save the widget factory.
************************************************************/
QHash<QString, QString> FFactory::widgetList;

/************************************************************
** Member Object
**
** Name: factoryList
** Parameter: QString - Widget's id
**                            FFactoryObject * - Factory's pointer
** Returned Value: none
** Intro: Save the factory pointer.
************************************************************/
QHash<QString, FFactoryObject *> FFactory::factoryList;

/************************************************************
** Member Function
**
** Name: create
** Parameter: type - Widget's type
**                            id - Widget's id
** Returned Value: GGuiObject * - Return Creating widget's
**																		 pointer.
** Intro: Create a widget.
************************************************************/
GGuiObject *FFactory::create(QString type, QString id) {
	if (FFactory::widgetList.find(id) == FFactory::widgetList.end()) {
		auto find = FFactory::factoryList.find(type);
		if (find != FFactory::factoryList.end()) {
			FFactory::widgetList.insert(id, type);
			return find.value()->create(id);
		} else {
			return (GGuiObject *)nullptr;
		}
	} else {
		return (GGuiObject *)nullptr;
	}
}

/************************************************************
** Member Function
**
** Name: create
** Parameter: type - Widget's type
**                            id - Widget's id
**							createParameter - Widget's parameter
** Returned Value: GGuiObject * - Return Creating widget's
**																		 pointer.
** Intro: Create a widget.
************************************************************/
GGuiObject *FFactory::create(QString type, QString id, QHash<QString, QString> createParameter) {
	if (FFactory::widgetList.find(id) == FFactory::widgetList.end()) {
		auto find = FFactory::factoryList.find(type);
		if (find == FFactory::factoryList.end()) {
			FFactory::widgetList.insert(id, type);
			return find.value()->create(id, createParameter);
		} else {
			return (GGuiObject *)nullptr;
		}
	} else {
		return (GGuiObject *)nullptr;
	}
}

/************************************************************
** Member Function
**
** Name: create
** Parameter: xmlUI - XML UI's string
** Returned Value: bool - Successed return true, failed return
**													  false
** Intro: Create a widget by xml string.
************************************************************/
bool FFactory::create(QString xmlUI) {
	// TODO
	return false;
}

/************************************************************
** Member Function
**
** Name: create
** Parameter: xmlUI - XML UI's file
** Returned Value: bool - Successed return true, failed return
**													  false
** Intro: Create a widget by xml string.
************************************************************/
bool FFactory::create(QFile xmlUI) {
	QString xmlText = xmlUI.readAll();
	return create(xmlText);
}

/************************************************************
** Member Function
**
** Name: get
** Parameter: id - Widget's id
** Returned Value: GGuiObject * - Widget's pointer
** Intro: Get a widget.
************************************************************/
GGuiObject *FFactory::get(QString id) {
	auto findOne = FFactory::widgetList.find(id);
	if (findOne != FFactory::widgetList.end()) {
		auto findTwo = FFactory::factoryList.find(findOne.value());
		if (findTwo != FFactory::factoryList.end()) {
			return findTwo.value()->get(id);
		} else {
			return (GGuiObject *)nullptr;
		}
	} else {
		return (GGuiObject *)nullptr;
	}
}

/************************************************************
** Member Function
**
** Name: remove
** Parameter: id - Widget's id
** Returned Value: bool - Successed return true, failed return
**												      false
** Intro: Delete a widget.
************************************************************/
bool FFactory::remove(QString id) {
	auto findOne = FFactory::widgetList.find(id);
	if (findOne != FFactory::widgetList.end()) {
		auto findTwo = FFactory::factoryList.find(findOne.value());
		if (findTwo != FFactory::factoryList.end()) {
			return findTwo.value()->remove(id);
		} else {
			return false;
		}
	} else {
		return false;
	}
}

/************************************************************
** Member Function
**
** Name: registerFactory
** Parameter: id - Factroy's id
**							factoryPointer - Factory's pointer
** Returned Value: bool - Successed return true, failed return
**												      false
** Intro: Register a factory.
************************************************************/
bool FFactory::registerFactory(QString id, FFactoryObject *factoryPointer) {
	if (FFactory::factoryList.find(id) == FFactory::factoryList.end()) {
		FFactory::factoryList.insert(id, factoryPointer);
		return true;
	} else {
		return false;
	}
}

/************************************************************
** Member Function
**
** Name: removeFactory
** Parameter: id - Factroy's id
** Returned Value: bool - Successed return true, failed return
**												      false
** Intro: Delete a factory.
************************************************************/
bool FFactory::removeFactory(QString id) {
	if (FFactory::factoryList.find(id) != FFactory::factoryList.end()) {
		FFactory::factoryList.remove(id);
		return true;
	} else {
		return false;
	}
}