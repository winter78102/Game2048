/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUP;
    QAction *actionDOWN;
    QAction *actionRIGHT;
    QAction *actionLEFT;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_2;
    QToolButton *RIGHT;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *Left;
    QToolButton *UP;
    QToolButton *Down;
    QToolButton *Right;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *cell11;
    QLabel *cell10;
    QLabel *cell20;
    QLabel *cell21;
    QLabel *cell31;
    QLabel *cell00;
    QLabel *cell32;
    QLabel *cell30;
    QLabel *cell33;
    QLabel *cell22;
    QLabel *cell12;
    QLabel *cell02;
    QLabel *cell13;
    QLabel *cell23;
    QLabel *cell01;
    QLabel *cell03;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(380, 248);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionUP = new QAction(MainWindow);
        actionUP->setObjectName("actionUP");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/resources/UP.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUP->setIcon(icon);
        actionUP->setMenuRole(QAction::MenuRole::NoRole);
        actionDOWN = new QAction(MainWindow);
        actionDOWN->setObjectName("actionDOWN");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/resources/Down.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDOWN->setIcon(icon1);
        actionDOWN->setMenuRole(QAction::MenuRole::NoRole);
        actionRIGHT = new QAction(MainWindow);
        actionRIGHT->setObjectName("actionRIGHT");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/resources/Right.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRIGHT->setIcon(icon2);
        actionRIGHT->setMenuRole(QAction::MenuRole::NoRole);
        actionLEFT = new QAction(MainWindow);
        actionLEFT->setObjectName("actionLEFT");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/resources/Left.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLEFT->setIcon(icon3);
        actionLEFT->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(300, 460, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(horizontalLayoutWidget);
        toolButton_2->setObjectName("toolButton_2");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("resources/Left.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton_2->setIcon(icon4);

        horizontalLayout->addWidget(toolButton_2);

        RIGHT = new QToolButton(horizontalLayoutWidget);
        RIGHT->setObjectName("RIGHT");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("resources/Right.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        RIGHT->setIcon(icon5);

        horizontalLayout->addWidget(RIGHT);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(110, 130, 160, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Left = new QToolButton(horizontalLayoutWidget_2);
        Left->setObjectName("Left");
        Left->setIcon(icon4);

        horizontalLayout_2->addWidget(Left);

        UP = new QToolButton(horizontalLayoutWidget_2);
        UP->setObjectName("UP");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("resources/UP.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        UP->setIcon(icon6);

        horizontalLayout_2->addWidget(UP);

        Down = new QToolButton(horizontalLayoutWidget_2);
        Down->setObjectName("Down");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("resources/Down.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Down->setIcon(icon7);

        horizontalLayout_2->addWidget(Down);

        Right = new QToolButton(horizontalLayoutWidget_2);
        Right->setObjectName("Right");
        Right->setIcon(icon5);

        horizontalLayout_2->addWidget(Right);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(55, 0, 281, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cell11 = new QLabel(gridLayoutWidget);
        cell11->setObjectName("cell11");

        gridLayout->addWidget(cell11, 1, 1, 1, 1);

        cell10 = new QLabel(gridLayoutWidget);
        cell10->setObjectName("cell10");

        gridLayout->addWidget(cell10, 1, 0, 1, 1);

        cell20 = new QLabel(gridLayoutWidget);
        cell20->setObjectName("cell20");

        gridLayout->addWidget(cell20, 2, 0, 1, 1);

        cell21 = new QLabel(gridLayoutWidget);
        cell21->setObjectName("cell21");

        gridLayout->addWidget(cell21, 2, 1, 1, 1);

        cell31 = new QLabel(gridLayoutWidget);
        cell31->setObjectName("cell31");

        gridLayout->addWidget(cell31, 3, 1, 1, 1);

        cell00 = new QLabel(gridLayoutWidget);
        cell00->setObjectName("cell00");

        gridLayout->addWidget(cell00, 0, 0, 1, 1);

        cell32 = new QLabel(gridLayoutWidget);
        cell32->setObjectName("cell32");

        gridLayout->addWidget(cell32, 3, 2, 1, 1);

        cell30 = new QLabel(gridLayoutWidget);
        cell30->setObjectName("cell30");

        gridLayout->addWidget(cell30, 3, 0, 1, 1);

        cell33 = new QLabel(gridLayoutWidget);
        cell33->setObjectName("cell33");

        gridLayout->addWidget(cell33, 3, 3, 1, 1);

        cell22 = new QLabel(gridLayoutWidget);
        cell22->setObjectName("cell22");

        gridLayout->addWidget(cell22, 2, 2, 1, 1);

        cell12 = new QLabel(gridLayoutWidget);
        cell12->setObjectName("cell12");

        gridLayout->addWidget(cell12, 1, 2, 1, 1);

        cell02 = new QLabel(gridLayoutWidget);
        cell02->setObjectName("cell02");

        gridLayout->addWidget(cell02, 0, 2, 1, 1);

        cell13 = new QLabel(gridLayoutWidget);
        cell13->setObjectName("cell13");

        gridLayout->addWidget(cell13, 1, 3, 1, 1);

        cell23 = new QLabel(gridLayoutWidget);
        cell23->setObjectName("cell23");

        gridLayout->addWidget(cell23, 2, 3, 1, 1);

        cell01 = new QLabel(gridLayoutWidget);
        cell01->setObjectName("cell01");

        gridLayout->addWidget(cell01, 0, 1, 1, 1);

        cell03 = new QLabel(gridLayoutWidget);
        cell03->setObjectName("cell03");

        gridLayout->addWidget(cell03, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 380, 21));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(Right, UP);
        QWidget::setTabOrder(UP, Down);
        QWidget::setTabOrder(Down, toolButton_2);
        QWidget::setTabOrder(toolButton_2, RIGHT);
        QWidget::setTabOrder(RIGHT, Left);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUP->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        actionDOWN->setText(QCoreApplication::translate("MainWindow", "DOWN", nullptr));
        actionRIGHT->setText(QCoreApplication::translate("MainWindow", "RIGHT", nullptr));
        actionLEFT->setText(QCoreApplication::translate("MainWindow", "LEFT", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        RIGHT->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        Left->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        UP->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        Down->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        Right->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        cell11->setText(QCoreApplication::translate("MainWindow", "cell11", nullptr));
        cell10->setText(QCoreApplication::translate("MainWindow", "cell10", nullptr));
        cell20->setText(QCoreApplication::translate("MainWindow", "cell20", nullptr));
        cell21->setText(QCoreApplication::translate("MainWindow", "cell21", nullptr));
        cell31->setText(QCoreApplication::translate("MainWindow", "cell31", nullptr));
        cell00->setText(QCoreApplication::translate("MainWindow", "cell00", nullptr));
        cell32->setText(QCoreApplication::translate("MainWindow", "cell32", nullptr));
        cell30->setText(QCoreApplication::translate("MainWindow", "cell30", nullptr));
        cell33->setText(QCoreApplication::translate("MainWindow", "cell33", nullptr));
        cell22->setText(QCoreApplication::translate("MainWindow", "cell22", nullptr));
        cell12->setText(QCoreApplication::translate("MainWindow", "cell12", nullptr));
        cell02->setText(QCoreApplication::translate("MainWindow", "cell02", nullptr));
        cell13->setText(QCoreApplication::translate("MainWindow", "cell13", nullptr));
        cell23->setText(QCoreApplication::translate("MainWindow", "cell23", nullptr));
        cell01->setText(QCoreApplication::translate("MainWindow", "cell01", nullptr));
        cell03->setText(QCoreApplication::translate("MainWindow", "cell03", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
