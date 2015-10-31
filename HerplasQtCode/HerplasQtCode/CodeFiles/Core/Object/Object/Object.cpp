/*
@Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.

@Project: HerplasQt - Code
@Intro: Qt is a powerful and easy framwork. It is also cross-platform. But it's UI editing and coding is not very friendly.
So, this project is present! In IDE utility, you can generate UI easily. Of course, it's visualized editing. Then, IDE
can make an UI file. In coding utility, you can analyze the UI file and make the UI automatically in program. It
includes Event System and Factory System and many other utilities.
@Licence: This project is open-source. And it follow GNU Lesser General Public License v3. You can modify and
distribute freely as long as you follow the license.
*/
/*
@Author: LeLe570929726
@Last Change Time: 2015/10/31 10:52
*/

/*
@Intro: Includes
*/
#include "Object.h"

/*
@Type: Member function

@Name: OObject
@Parameter: none
@Return: none
@Intro: OObject's constructor
*/
OObject::OObject() {
	this->setClassName("OObject");
}

/*
@Type: Member function

@Name: getClassName
@Parameter: none
@Return: QString - Class's name
@Intro: Return class's name
*/
QString OObject::getClassName() {
	return this->className;
}

/*
@Type: Member function

@Name: getClassName
@Parameter: name - Class's name
@Return: none
@Intro: Set class's name
*/
void OObject::setClassName(QString name) {
	this->className = name;
}