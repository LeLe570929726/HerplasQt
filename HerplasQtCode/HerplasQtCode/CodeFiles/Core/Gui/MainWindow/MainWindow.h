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
** Time: 2015/09/20 7:38
************************************************************/

#pragma once

/************************************************************
** Includes
************************************************************/
#include <QMainWindow>
#include <QContextMenuEvent>
#include <QActionEvent>
#include <QEvent>
#include <QCloseEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QTabletEvent>
#include <QWheelEvent>
#include <QChildEvent>
#include <QTimerEvent>
#include "..\..\Object\Object.h"

/************************************************************
** Class
**
** Name: GMainWindow
** Intro: Window module, has some basic action.
************************************************************/
class GMainWindow : public QMainWindow, public OObjectEvent {
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

private:
	/************************************************************
	** Member Function
	**
	** Name: contextMenuEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void contextMenuEvent(QContextMenuEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: actionEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void actionEvent(QActionEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: changeEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void changeEvent(QEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: closeEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void closeEvent(QCloseEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dragEnterEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void dragEnterEvent(QDragEnterEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dragLeaveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void dragLeaveEvent(QDragLeaveEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dragMoveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void dragMoveEvent(QDragMoveEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dropEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void dropEvent(QDropEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: enterEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void enterEvent(QEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: focusInEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void focusInEvent(QFocusEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: focusOutEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void focusOutEvent(QFocusEvent *eventParameter);							// Qt event

	/************************************************************
	** Member Function
	**
	** Name: hideEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void hideEvent(QHideEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: inputMethodEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void inputMethodEvent(QInputMethodEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: keyPressEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void keyPressEvent(QKeyEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: keyReleaseEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void keyReleaseEvent(QKeyEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: leaveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void leaveEvent(QEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mouseDoubleClickEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void mouseDoubleClickEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mouseMoveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void mouseMoveEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mousePressEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void mousePressEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mouseReleaseEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void mouseReleaseEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: moveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void moveEvent(QMoveEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: paintEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void paintEvent(QPaintEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: resizeEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void resizeEvent(QResizeEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: showEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void showEvent(QShowEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: tabletEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void tabletEvent(QTabletEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: wheelEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void wheelEvent(QWheelEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: childEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void childEvent(QChildEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: customEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void customEvent(QEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: timerEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QMainWindow's event.
	************************************************************/
	void timerEvent(QTimerEvent *eventParameter);									// Qt event
};