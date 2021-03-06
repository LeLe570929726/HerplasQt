﻿/************************************************************
** Copyright ® 2015 LeLe570929726. All rights reserved.
** 
** Project: HerplasQt-IDE
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
** Time: 2015/09/19 17:17
************************************************************/

/************************************************************
** Include part
************************************************************/
#include <QApplication>								// Include QApplication class.
#include "Base\Base.h"

/************************************************************
** Function
**
** Name: main
** Parameter: int argc - parameter size
**                            char *[] - parameter text
** Returned Value: int - none
** Intro: Program's entry.
************************************************************/
int main(int argc, char *argv[]) {
	QApplication a(argc, argv);								// Create app object.
	return a.exec();								// Into message loop.
}