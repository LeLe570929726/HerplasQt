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

#pragma once

/************************************************************
** Include part
************************************************************/
#include <QString>
#include <QHash>
#include <QFile>
#include "..\FFactoryObject\FFactoryObject.h"
#include "..\..\Gui\Gui.h"

/************************************************************
** Class
**
** Name: FFactory
** Intro: Factory!
************************************************************/
class FFactory {
public:
	/************************************************************
	** Member Function
	**
	** Name: FFactory
	** Parameter: none
	** Returned Value: none
	** Intro: FFactory class's constructor.
	************************************************************/
	FFactory() = default;

	/************************************************************
	** Member Function
	**
	** Name: ~FFactory
	** Parameter: none
	** Returned Value: none
	** Intro: FFactory class's destructor.
	************************************************************/
	~FFactory() = default;

public:
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
	static GGuiObject *create(QString type, QString id);

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
	static GGuiObject *create(QString type, QString id, QHash<QString, QString> createParameter);

	/************************************************************
	** Member Function
	**
	** Name: create
	** Parameter: xmlUI - XML UI's string
	** Returned Value: bool - Successed return true, failed return
	**													  false
	** Intro: Create a widget by xml string.
	************************************************************/
	static bool create(QString xmlUI);

	/************************************************************
	** Member Function
	**
	** Name: create
	** Parameter: xmlUI - XML UI's file
	** Returned Value: bool - Successed return true, failed return
	**													  false
	** Intro: Create a widget by xml string.
	************************************************************/
	static bool create(QFile xmlUI);

	/************************************************************
	** Member Function
	**
	** Name: get
	** Parameter: id - Widget's id
	** Returned Value: GGuiObject * - Widget's pointer
	** Intro: Get a widget.
	************************************************************/
	static GGuiObject *get(QString id);

	/************************************************************
	** Member Function
	**
	** Name: remove
	** Parameter: id - Widget's id
	** Returned Value: bool - Successed return true, failed return
	**												      false
	** Intro: Delete a widget.
	************************************************************/
	static bool remove(QString id);

public:
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
	static bool registerFactory(QString id, FFactoryObject *factoryPointer);

	/************************************************************
	** Member Function
	**
	** Name: removeFactory
	** Parameter: id - Factroy's id
	** Returned Value: bool - Successed return true, failed return
	**												      false
	** Intro: Delete a factory.
	************************************************************/
	static bool removeFactory(QString id);

private:
	/************************************************************
	** Member Object
	**
	** Name: widgetList
	** Parameter: QString - Widget id
	**                            QString - Factory id
	** Returned Value: none
	** Intro: Save the widget factory.
	************************************************************/
	static QHash<QString, QString> widgetList;

	/************************************************************
	** Member Object
	**
	** Name: factoryList
	** Parameter: QString - Widget's id
	**                            FFactoryObject * - Factory's pointer
	** Returned Value: none
	** Intro: Save the factory pointer.
	************************************************************/
	static QHash<QString, FFactoryObject *> factoryList;
};