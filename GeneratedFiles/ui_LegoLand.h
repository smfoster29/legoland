/********************************************************************************
** Form generated from reading UI file 'LegoLand.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGOLAND_H
#define UI_LEGOLAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LegoLandClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LegoLandClass)
    {
        if (LegoLandClass->objectName().isEmpty())
            LegoLandClass->setObjectName(QStringLiteral("LegoLandClass"));
        LegoLandClass->resize(600, 400);
        menuBar = new QMenuBar(LegoLandClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LegoLandClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LegoLandClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LegoLandClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LegoLandClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LegoLandClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LegoLandClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LegoLandClass->setStatusBar(statusBar);

        retranslateUi(LegoLandClass);

        QMetaObject::connectSlotsByName(LegoLandClass);
    } // setupUi

    void retranslateUi(QMainWindow *LegoLandClass)
    {
        LegoLandClass->setWindowTitle(QApplication::translate("LegoLandClass", "LegoLand", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LegoLandClass: public Ui_LegoLandClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGOLAND_H
