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
** Time: 2015/10/02 07:51
************************************************************/

/************************************************************
** Includes
************************************************************/
#include "Widget.h"

/************************************************************
** Member Function
**
** Name: GWidget
** Parameter: none
** Returned Value: none
** Intro: GWidget class's constructor.
************************************************************/
GWidget::GWidget() {
	this->setTypeName("GWidget");
}

/************************************************************
** Member Function
**
** Name: ~GWidget
** Parameter: none
** Returned Value: none
** Intro: GWidget class's destructor.
************************************************************/
GWidget::~GWidget() {

}

/************************************************************
** Member Function
**
** Name: actionEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::actionEvent(QActionEvent * eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "actionEvent");
}

/************************************************************
** Member Function
**
** Name: changeEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::changeEvent(QEvent * eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "changeEvent");
}

/************************************************************
** Member Function
**
** Name: closeEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::closeEvent(QCloseEvent * eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "closeEvent");
}

/************************************************************
** Member Function
**
** Name: dragEnterEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::dragEnterEvent(QDragEnterEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "dragEnterEvent");
}

/************************************************************
** Member Function
**
** Name: dragLeaveEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::dragLeaveEvent(QDragLeaveEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "dragLeaveEvent");
}

/************************************************************
** Member Function
**
** Name: dragMoveEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::dragMoveEvent(QDragMoveEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "dragMoveEvent");
}

/************************************************************
** Member Function
**
** Name: dropEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::dropEvent(QDropEvent * eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "dropEvent");
}

/************************************************************
** Member Function
**
** Name: enterEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::enterEvent(QEvent * eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "enterEvent");
}

/************************************************************
** Member Function
**
** Name: focusInEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::focusInEvent(QFocusEvent * eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "focusInEvent");
}

/************************************************************
** Member Function
**
** Name: focusOutEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::focusOutEvent(QFocusEvent * eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "focusOutEvent");
}

/************************************************************
** Member Function
**
** Name: hideEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::hideEvent(QHideEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "hideEvent");
}

/************************************************************
** Member Function
**
** Name: inputMethodEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::inputMethodEvent(QInputMethodEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "inputMethodEvent");
}

/************************************************************
** Member Function
**
** Name: keyPressEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::keyPressEvent(QKeyEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "keyPressEvent");
}

/************************************************************
** Member Function
**
** Name: keyReleaseEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::keyReleaseEvent(QKeyEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "keyReleaseEvent");
}

/************************************************************
** Member Function
**
** Name: leaveEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::leaveEvent(QEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "leaveEvent");
}

/************************************************************
** Member Function
**
** Name: mouseDoubleClickEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::mouseDoubleClickEvent(QMouseEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "mouseDoubleClickEvent");
}

/************************************************************
** Member Function
**
** Name: mouseMoveEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::mouseMoveEvent(QMouseEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "mouseMoveEvent");
}

/************************************************************
** Member Function
**
** Name: mousePressEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::mousePressEvent(QMouseEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "mousePressEvent");
}

/************************************************************
** Member Function
**
** Name: mouseReleaseEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::mouseReleaseEvent(QMouseEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "mouseReleaseEvent");
}

/************************************************************
** Member Function
**
** Name: moveEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::moveEvent(QMoveEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "moveEvent");
}

/************************************************************
** Member Function
**
** Name: paintEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::paintEvent(QPaintEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "paintEvent");
}

/************************************************************
** Member Function
**
** Name: resizeEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::resizeEvent(QResizeEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "resizeEvent");
}

/************************************************************
** Member Function
**
** Name: showEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::showEvent(QShowEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "showEvent");
}

/************************************************************
** Member Function
**
** Name: tabletEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::tabletEvent(QTabletEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "tabletEvent");
}

/************************************************************
** Member Function
**
** Name: wheelEvent
** Parameter: eventParameter - Event parameter
** Returned Value: none
** Intro: QWidget's event.
************************************************************/
void GWidget::wheelEvent(QWheelEvent *eventParameter) {
	postEvent((void *)nullptr, eventParameter, objectName(), "wheelEvent");
}