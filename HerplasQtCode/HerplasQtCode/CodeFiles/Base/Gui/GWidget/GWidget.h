﻿/************************************************************
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
** Time: 2015/10/02 07:51
************************************************************/

#pragma once

/************************************************************
** Include part
************************************************************/
#include <QWidget>
#include "..\GGuiObject\GGuiObject.h"

class GWidget : public QWidget, public GGuiObject {
Q_OBJECT								// State this class is a QObject, it can use Qt's Slot/Signal System.

public:
	/************************************************************
	** Member Function
	**
	** Name: GWidget
	** Parameter: none
	** Returned Value: none
	** Intro: GWidget class's constructor.
	************************************************************/
	GWidget();

	/************************************************************
	** Member Function
	**
	** Name: ~GWidget
	** Parameter: none
	** Returned Value: none
	** Intro: GWidget class's destructor.
	************************************************************/
	~GWidget();

private:
	/************************************************************
	** Member Function
	**
	** Name: actionEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void actionEvent(QActionEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: changeEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void changeEvent(QEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: closeEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void closeEvent(QCloseEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dragEnterEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void dragEnterEvent(QDragEnterEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dragLeaveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void dragLeaveEvent(QDragLeaveEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dragMoveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void dragMoveEvent(QDragMoveEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: dropEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void dropEvent(QDropEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: enterEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void enterEvent(QEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: focusInEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void focusInEvent(QFocusEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: focusOutEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void focusOutEvent(QFocusEvent *eventParameter);							// Qt event

	/************************************************************
	** Member Function
	**
	** Name: hideEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void hideEvent(QHideEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: inputMethodEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void inputMethodEvent(QInputMethodEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: keyPressEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void keyPressEvent(QKeyEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: keyReleaseEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void keyReleaseEvent(QKeyEvent *eventParameter);								// Qt event

	/************************************************************
	** Member Function
	**
	** Name: leaveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void leaveEvent(QEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mouseDoubleClickEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void mouseDoubleClickEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mouseMoveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void mouseMoveEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mousePressEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void mousePressEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: mouseReleaseEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void mouseReleaseEvent(QMouseEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: moveEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void moveEvent(QMoveEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: paintEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void paintEvent(QPaintEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: resizeEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void resizeEvent(QResizeEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: showEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void showEvent(QShowEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: tabletEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void tabletEvent(QTabletEvent *eventParameter);									// Qt event

	/************************************************************
	** Member Function
	**
	** Name: wheelEvent
	** Parameter: eventParameter - Event parameter
	** Returned Value: none
	** Intro: QWidget's event.
	************************************************************/
	void wheelEvent(QWheelEvent *eventParameter);									// Qt event
};