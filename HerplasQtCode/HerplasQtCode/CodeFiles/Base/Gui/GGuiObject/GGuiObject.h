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
** Time: 2015/10/01 10:45
************************************************************/

#pragma once

#include "..\..\Event\Event.h"

/************************************************************
** Class
**
** Name: GGuiObject
** Intro: A basic class for GUI.
************************************************************/
class GGuiObject : public EEventObject {
public:
	/************************************************************
	** Member Function
	**
	** Name: GGuiObject
	** Parameter: none
	** Returned Value: none
	** Intro: GGuiObject class's constructor.
	************************************************************/
	GGuiObject() = default;

	/************************************************************
	** Member Function
	**
	** Name: ~GGuiObject
	** Parameter: none
	** Returned Value: none
	** Intro: GGuiObject class's destructor.
	************************************************************/
	~GGuiObject() = default;
};