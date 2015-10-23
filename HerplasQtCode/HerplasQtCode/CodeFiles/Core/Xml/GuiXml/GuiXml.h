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
** Time: 2015/10/03 08:48
************************************************************/

#pragma once

/************************************************************
** Includes
************************************************************/
#include "..\..\Object\Object.h"
#include <QString>
#include <QHash>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include <QDomNodeList>

class XGuiXml : public OObject {
public:
	/************************************************************
	** Member Function
	**
	** Name: XGuiXml
	** Parameter: none
	** Returned Value: none
	** Intro: XGuiXml class's constructor.
	************************************************************/
	XGuiXml() = default;

	/************************************************************
	** Member Function
	**
	** Name: ~XGuiXml
	** Parameter: none
	** Returned Value: none
	** Intro: XGuiXml class's destructor.
	************************************************************/
	~XGuiXml() = default;

public:
	/************************************************************
	** Member Function
	**
	** Name: processXml
	** Parameter: xmlText - Xml text
	** Returned Value: QHash<QString, > - Widget's id
	**										QHash<QString, > - Widget's attribute
	**																					 name
	**										QHash<, QString> - Widget's attribute
	**																					 value
	** Intro: Process xml.
	************************************************************/
	static QHash<QString, QHash<QString, QString>> processXml(QString xmlText);
};