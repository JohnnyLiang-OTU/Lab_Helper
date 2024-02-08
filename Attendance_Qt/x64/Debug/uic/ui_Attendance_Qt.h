/********************************************************************************
** Form generated from reading UI file 'Attendance_Qt.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCE_QT_H
#define UI_ATTENDANCE_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attendance_QtClass
{
public:
    QAction *actionFlie;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Attendance_QtClass)
    {
        if (Attendance_QtClass->objectName().isEmpty())
            Attendance_QtClass->setObjectName("Attendance_QtClass");
        Attendance_QtClass->resize(644, 438);
        actionFlie = new QAction(Attendance_QtClass);
        actionFlie->setObjectName("actionFlie");
        centralWidget = new QWidget(Attendance_QtClass);
        centralWidget->setObjectName("centralWidget");
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 170, 91, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 100, 75, 24));
        Attendance_QtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Attendance_QtClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 644, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        Attendance_QtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Attendance_QtClass);
        mainToolBar->setObjectName("mainToolBar");
        Attendance_QtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Attendance_QtClass);
        statusBar->setObjectName("statusBar");
        Attendance_QtClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(Attendance_QtClass);

        QMetaObject::connectSlotsByName(Attendance_QtClass);
    } // setupUi

    void retranslateUi(QMainWindow *Attendance_QtClass)
    {
        Attendance_QtClass->setWindowTitle(QCoreApplication::translate("Attendance_QtClass", "Attendance_Qt", nullptr));
        actionFlie->setText(QCoreApplication::translate("Attendance_QtClass", "Flie", nullptr));
        pushButton->setText(QCoreApplication::translate("Attendance_QtClass", "Read Students", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Attendance_QtClass", "PushButton", nullptr));
        menu->setTitle(QCoreApplication::translate("Attendance_QtClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attendance_QtClass: public Ui_Attendance_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCE_QT_H
