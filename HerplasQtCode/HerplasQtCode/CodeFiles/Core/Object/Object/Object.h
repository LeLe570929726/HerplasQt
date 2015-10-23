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
** Time: 2015/10/23 22:16
************************************************************/

#pragma once

/************************************************************
** Includes
************************************************************/
#include <QString>
#include <typeinfo>

/************************************************************
** Class
**
** Name: OObject
** Intro: Provide a basic object.
************************************************************/
class OObject {
public:
	/************************************************************
	** Member Function
	**
	** Name: OObject
	** Parameter: none
	** Returned Value: none
	** Intro: OObject class's constructor.
	************************************************************/
	OObject();

	/************************************************************
	** Member Function
	**
	** Name: ~OObject
	** Parameter: none
	** Returned Value: none
	** Intro: OObject class's destructor.
	************************************************************/
	~OObject() = default;

public:
	/************************************************************
	** Member Function
	**
	** Name: setTypeName
	** Parameter: typeName - Object's type name
	** Returned Value: none
	** Intro: Set object's type name
	************************************************************/
	inline void setTypeName(QString typeName) {
		this->typeName = typeName;
	}

	/************************************************************
	** Member Function
	**
	** Name: setTypeName
	** Parameter: none
	** Returned Value: QString - Object's type name
	** Intro: Get object's type name
	************************************************************/
	inline QString getTypeName() {
		return this->typeName;
	}

private:
	/************************************************************
	** Member Object
	**
	** Name: typeName
	** Parameter: typeName - Object's type name
	** Returned Value: none
	** Intro: Save object's type name
	************************************************************/
	QString typeName;
};