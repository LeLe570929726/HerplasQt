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
** Time: 2015/10/04 07:48
************************************************************/

#pragma once

/************************************************************
** Include part
************************************************************/
#include "..\FFactoryObject\FFactoryObject.h"
#include "..\..\Gui\Gui.h"

class FMainWindowFactory : public FFactoryObject {
public:
	/************************************************************
	** Member Function
	**
	** Name: FMainWindowFactory
	** Parameter: none
	** Returned Value: none
	** Intro: FMainWindowFactory class's constructor.
	************************************************************/
	FMainWindowFactory() = default;

	/************************************************************
	** Member Function
	**
	** Name: ~FMainWindowFactory
	** Parameter: none
	** Returned Value: none
	** Intro: FMainWindowFactory class's destructor.
	************************************************************/
	~FMainWindowFactory() = default;

public:
	/************************************************************
	** Member Function
	**
	** Name: create
	** Parameter: id - MainWindow's id
	** Returned Value: GGuiObject * - MainWindow's pointer
	** Intro: Create a MainWindow.
	************************************************************/
	GGuiObject *create(QString id) override;

	/************************************************************
	** Member Function
	**
	** Name: create
	** Parameter: id - MainWindow's id
	**                           createParameter - Create parameter
	** Returned Value: GGuiObject * - MainWindow's pointer
	** Intro: Create a MainWindow.
	************************************************************/
	GGuiObject *create(QString id, QHash<QString, QString> createParameter) override;

	/************************************************************
	** Member Function
	**
	** Name: get
	** Parameter: id - MainWindow's id
	** Returned Value: GGuiObject * - MainWindow's pointer
	** Intro: Get a MainWindow.
	************************************************************/
	GGuiObject *get(QString id) override;

	/************************************************************
	** Member Function
	**
	** Name: remove
	** Parameter: id - MainWindow's id
	** Returned Value: bool - Successed return true, failed return
	**													  false
	** Intro: Delete a MainWindow.
	************************************************************/
	bool remove(QString id) override;

private:
	bool processParameter(GMainWindow *pointer, QHash<QString, QString> parameter);

private:
	QHash<QString, GMainWindow *> mainWindowList;
};