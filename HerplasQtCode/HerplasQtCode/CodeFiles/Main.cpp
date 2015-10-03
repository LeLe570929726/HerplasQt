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
** Time: 2015/09/19 19:47
************************************************************/

/************************************************************
** Include part
************************************************************/
#include <QApplication>
#include <QFile>
#include <QDebug>
#include "Base\Base.h"

/************************************************************
** Function
**
** Name: main
** Parameter: argc - parameter size
**                            argv - parameter text
** Returned Value: none
** Intro: Program's entry.
************************************************************/
int main(int argc, char *argv[]) {
	QApplication a(argc, argv);								// Create app object.

	QFile xmlFile(":/HerplasQtCode/Xml/TestXml.xml");
	xmlFile.open(QFile::ReadOnly);
	auto returnValue  = XGuiXml::processXml(xmlFile.readAll());
	qDebug() << "===Main Function===";
	for (auto itOne = returnValue.begin(); itOne != returnValue.end(); ++itOne) {
		qDebug() << "==========";
		qDebug() << "\"id\"" << ":" << itOne.key();
		for (auto itTwo = itOne.value().begin(); itTwo != itOne.value().end(); ++itTwo) {
			qDebug() << itTwo.key() << ":" << itTwo.value();
		}
	}
	xmlFile.close();

	return a.exec();								// Into message loop.
}