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
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_8;
    QLabel *cell03;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(393, 251);
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
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 3, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 3, 3, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 2, 2, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 0, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 1, 3, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 2, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        cell03 = new QLabel(gridLayoutWidget);
        cell03->setObjectName("cell03");

        gridLayout->addWidget(cell03, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 393, 21));
        MainWindow->setMenuBar(menuBar);

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
        label_3->setText(QCoreApplication::translate("MainWindow", "cell11", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "cell10", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "cell20", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "cell21", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "cell31", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "cell00", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "cell32", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "cell30", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "cell33", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "cell22", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "cell12", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "cell02", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "cell13", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "cell23", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "cell01", nullptr));
        cell03->setText(QCoreApplication::translate("MainWindow", "cell03", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
