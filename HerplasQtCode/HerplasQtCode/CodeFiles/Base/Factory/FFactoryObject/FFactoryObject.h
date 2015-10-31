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
** Time: 2015/10/02 11:17
************************************************************/

#pragma once

/************************************************************
** Include part
************************************************************/
#include <QHash>
#include <QString>
#include "..\..\Gui\Gui.h"

/************************************************************
** Class
**
** Name: FFactoryObject
** Intro: Provide a basic factory.
************************************************************/
class FFactoryObject {
public:
	/************************************************************
	** Member Function
	**
	** Name: FFactoryObject
	** Parameter: none
	** Returned Value: none
	** Intro: FFactoryObject class's constructor.
	************************************************************/
	FFactoryObject() = default;

	/************************************************************
	** Member Function
	**
	** Name: ~FFactoryObject
	** Parameter: none
	** Returned Value: none
	** Intro: FFactoryObject class's destructor.
	************************************************************/
	~FFactoryObject() = default;

public:
	/************************************************************
	** Member Function
	**
	** Name: create
	** Parameter: id - Widget's id
	** Returned Value: GGuiObject * - Widget's pointer
	** Intro: Create a widget.
	************************************************************/
	virtual GGuiObject *create(QString id);

	/************************************************************
	** Member Function
	**
	** Name: create
	** Parameter: id - Widget's id
	**							createParameter - Create parameter
	** Returned Value: GGuiObject * - Widget's pointer
	** Intro: Create a widget.
	************************************************************/
	virtual GGuiObject *create(QString id, QHash<QString, QString> createParameter);

	/************************************************************
	** Member Function
	**
	** Name: get
	** Parameter: id - Widget's id
	** Returned Value: GGuiObject * - Widget's pointer
	** Intro: Get a widget.
	************************************************************/
	virtual GGuiObject *get(QString id);

	/************************************************************
	** Member Function
	**
	** Name: remove
	** Parameter: id - Widget's id
	** Returned Value: bool - Successed return true, failed return
	**													  false
	** Intro: Delete a widget.
	************************************************************/
	virtual bool remove(QString id);
};