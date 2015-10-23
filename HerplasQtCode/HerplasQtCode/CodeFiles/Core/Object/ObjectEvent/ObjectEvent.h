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
** Time: 2015/10/23 22:39
************************************************************/

#pragma once

/************************************************************
** Includes
************************************************************/
#include "..\Object\Object.h"
#include "..\..\Event\Event.h"

/************************************************************
** Class
**
** Name: OObjectEvent
** Intro: Provide a basic object with event.
************************************************************/
class OObjectEvent : public EEventObject, public OObject {
public:
	/************************************************************
	** Member Function
	**
	** Name: OObjectEvent
	** Parameter: none
	** Returned Value: none
	** Intro: OObjectEvent class's constructor.
	************************************************************/
	OObjectEvent();

	/************************************************************
	** Member Function
	**
	** Name: ~OObjectEvent
	** Parameter: none
	** Returned Value: none
	** Intro: OObjectEvent class's destructor.
	************************************************************/
	~OObjectEvent() = default;
};