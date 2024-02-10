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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *button_submit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *input_name;
    QLineEdit *input_id;
    QPushButton *button_read;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Attendance_QtClass)
    {
        if (Attendance_QtClass->objectName().isEmpty())
            Attendance_QtClass->setObjectName("Attendance_QtClass");
        Attendance_QtClass->resize(589, 450);
        actionFlie = new QAction(Attendance_QtClass);
        actionFlie->setObjectName("actionFlie");
        centralWidget = new QWidget(Attendance_QtClass);
        centralWidget->setObjectName("centralWidget");
        button_submit = new QPushButton(centralWidget);
        button_submit->setObjectName("button_submit");
        button_submit->setGeometry(QRect(80, 150, 75, 24));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 80, 49, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 110, 49, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 370, 75, 24));
        input_name = new QLineEdit(centralWidget);
        input_name->setObjectName("input_name");
        input_name->setGeometry(QRect(80, 80, 113, 21));
        input_id = new QLineEdit(centralWidget);
        input_id->setObjectName("input_id");
        input_id->setGeometry(QRect(80, 110, 113, 21));
        input_id->setClearButtonEnabled(false);
        button_read = new QPushButton(centralWidget);
        button_read->setObjectName("button_read");
        button_read->setGeometry(QRect(500, 340, 75, 24));
        Attendance_QtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Attendance_QtClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 589, 22));
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
        button_submit->setText(QCoreApplication::translate("Attendance_QtClass", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("Attendance_QtClass", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Attendance_QtClass", "ID", nullptr));
        pushButton->setText(QCoreApplication::translate("Attendance_QtClass", "AdminMode", nullptr));
        button_read->setText(QCoreApplication::translate("Attendance_QtClass", "Read Tables", nullptr));
        menu->setTitle(QCoreApplication::translate("Attendance_QtClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attendance_QtClass: public Ui_Attendance_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCE_QT_H
