#ifndef QTSCRIPTSHELL_QHBOXLAYOUT_H
#define QTSCRIPTSHELL_QHBOXLAYOUT_H

#include <qboxlayout.h>

#include <QtScript/qscriptvalue.h>

class QtScriptShell_QHBoxLayout : public QHBoxLayout
{
public:
    QtScriptShell_QHBoxLayout();
    QtScriptShell_QHBoxLayout(QWidget*  parent);
    ~QtScriptShell_QHBoxLayout();

    void addItem(QLayoutItem*  arg__1);
    void childEvent(QChildEvent*  e);
    int  count() const;
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    Qt::Orientations  expandingDirections() const;
    QRect  geometry() const;
    bool  hasHeightForWidth() const;
    int  heightForWidth(int  arg__1) const;
    int  indexOf(QWidget*  arg__1) const;
    void invalidate();
    bool  isEmpty() const;
    QLayoutItem*  itemAt(int  arg__1) const;
    QLayout*  layout();
    QSize  maximumSize() const;
    int  minimumHeightForWidth(int  arg__1) const;
    QSize  minimumSize() const;
    void setGeometry(const QRect&  arg__1);
    QSize  sizeHint() const;
    QSpacerItem*  spacerItem();
    QLayoutItem*  takeAt(int  arg__1);
    void timerEvent(QTimerEvent*  arg__1);
    QWidget*  widget();

    QScriptValue __qtscript_self;
};

#endif // QTSCRIPTSHELL_QHBOXLAYOUT_H
