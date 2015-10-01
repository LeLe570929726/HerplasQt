/************************************************************
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
** Time: 2015/09/19 18:52
************************************************************/

/************************************************************
** Include part
************************************************************/
#include <QMainWindow>								// QMainWindow class's head file.

/************************************************************
** Class
**
** Name: GMainWindow
** Intro: Window module, has some basic action.
************************************************************/
class GMainWindow : public QMainWindow {
Q_OBJECT								// State this class is a QObject, it can use Qt's Slot/Signal System.

public:
	/************************************************************
	** Member Function
	**
	** Name: GMainWindow
	** Parameter: none
	** Returned Value: none
	** Intro: GMainWindow class's constructor.
	************************************************************/
	GMainWindow();

	/************************************************************
	** Member Function
	**
	** Name: ~GMainWindow
	** Parameter: none
	** Returned Value: none
	** Intro: GMainWindow class's destructor.
	************************************************************/
	~GMainWindow();
};