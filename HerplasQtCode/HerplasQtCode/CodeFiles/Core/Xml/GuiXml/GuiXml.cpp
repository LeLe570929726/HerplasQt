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

/************************************************************
** Includes
************************************************************/
#include "GuiXml.h"

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
QHash<QString, QHash<QString, QString>> XGuiXml::processXml(QString xmlText) {
	// Create something.
	QHash<QString, QHash<QString, QString>> returnValue;
	QDomDocument xmlDocument;
	// Process xml
	if (xmlDocument.setContent(xmlText) == true) {								// Process xml.
		auto rootElement = xmlDocument.documentElement();								// Get root element.
		if (rootElement.isNull() == false) {								// Check null.
			if (rootElement.tagName() == "xmlUI") {								// Check xml ui.
				// Process all node(widght object).
				auto allWidget = rootElement.childNodes();
				for (int tempOne = 0; tempOne < allWidget.length(); ++tempOne) {								// Get all node.
					auto nowNode = allWidget.item(tempOne);
					if (nowNode.isElement() == true) {
						// Process a node.
						auto nowElement = nowNode.toElement();
						QHash<QString, QString> nodeParameter;
						QString nodeId;
						nodeParameter.insert("type", nowElement.tagName());
						auto allParameter = nowElement.childNodes();
						for (int tempTwo = 0; tempTwo < allParameter.length(); ++tempTwo) {
							auto nowParameter = allParameter.item(tempTwo);
							if (nowParameter.isElement() == true) {
								// Process a parameter.
								auto nowParaElement = nowParameter.toElement();
								if (nowParaElement.tagName() == "id") {
									nodeId = nowParaElement.firstChild().nodeValue();
								} else {
									nodeParameter.insert(nowParaElement.tagName(), nowParaElement.firstChild().nodeValue());
								}
							}
						}
						returnValue.insert(nodeId, nodeParameter);
					}
				}
			}
		}
	}
	return returnValue;
}