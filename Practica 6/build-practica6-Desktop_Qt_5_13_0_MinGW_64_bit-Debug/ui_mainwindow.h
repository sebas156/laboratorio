/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QSplitter *splitter_9;
    QPushButton *start;
    QPushButton *senal;
    QSplitter *splitter_8;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_4;
    QLabel *label_7;
    QLabel *VXA;
    QSplitter *splitter_2;
    QLabel *label_3;
    QLabel *PXA;
    QLCDNumber *lcdNumber;
    QSplitter *splitter;
    QLabel *label;
    QLabel *PA;
    QSplitter *splitter_7;
    QLabel *label_13;
    QLabel *AYA;
    QSplitter *splitter_3;
    QLabel *label_5;
    QLabel *PYA;
    QSplitter *splitter_5;
    QLabel *label_8;
    QLabel *VYA;
    QSplitter *splitter_6;
    QLabel *label_11;
    QLabel *AXA;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(555, 398);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter_9 = new QSplitter(centralWidget);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setOrientation(Qt::Vertical);
        start = new QPushButton(splitter_9);
        start->setObjectName(QString::fromUtf8("start"));
        sizePolicy.setHeightForWidth(start->sizePolicy().hasHeightForWidth());
        start->setSizePolicy(sizePolicy);
        start->setMaximumSize(QSize(16777215, 26));
        splitter_9->addWidget(start);
        senal = new QPushButton(splitter_9);
        senal->setObjectName(QString::fromUtf8("senal"));
        senal->setMaximumSize(QSize(16777215, 26));
        splitter_9->addWidget(senal);

        gridLayout_2->addWidget(splitter_9, 1, 0, 1, 2);

        splitter_8 = new QSplitter(centralWidget);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        sizePolicy.setHeightForWidth(splitter_8->sizePolicy().hasHeightForWidth());
        splitter_8->setSizePolicy(sizePolicy);
        splitter_8->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_8);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(layoutWidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(120, 23));
        splitter_4->addWidget(label_7);
        VXA = new QLabel(splitter_4);
        VXA->setObjectName(QString::fromUtf8("VXA"));
        VXA->setMinimumSize(QSize(68, 23));
        VXA->setMaximumSize(QSize(120, 16777215));
        splitter_4->addWidget(VXA);

        gridLayout->addWidget(splitter_4, 3, 0, 1, 1);

        splitter_2 = new QSplitter(layoutWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(120, 23));
        splitter_2->addWidget(label_3);
        PXA = new QLabel(splitter_2);
        PXA->setObjectName(QString::fromUtf8("PXA"));
        PXA->setMinimumSize(QSize(68, 23));
        PXA->setMaximumSize(QSize(120, 16777215));
        splitter_2->addWidget(PXA);

        gridLayout->addWidget(splitter_2, 1, 0, 1, 1);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 7, 0, 1, 1);

        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(120, 23));
        splitter->addWidget(label);
        PA = new QLabel(splitter);
        PA->setObjectName(QString::fromUtf8("PA"));
        PA->setMinimumSize(QSize(63, 23));
        PA->setMaximumSize(QSize(120, 23));
        splitter->addWidget(PA);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        splitter_7 = new QSplitter(layoutWidget);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(splitter_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(120, 23));
        splitter_7->addWidget(label_13);
        AYA = new QLabel(splitter_7);
        AYA->setObjectName(QString::fromUtf8("AYA"));
        AYA->setMinimumSize(QSize(68, 23));
        AYA->setMaximumSize(QSize(120, 16777215));
        splitter_7->addWidget(AYA);

        gridLayout->addWidget(splitter_7, 6, 0, 1, 1);

        splitter_3 = new QSplitter(layoutWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(120, 23));
        splitter_3->addWidget(label_5);
        PYA = new QLabel(splitter_3);
        PYA->setObjectName(QString::fromUtf8("PYA"));
        PYA->setMinimumSize(QSize(68, 23));
        PYA->setMaximumSize(QSize(120, 16777215));
        splitter_3->addWidget(PYA);

        gridLayout->addWidget(splitter_3, 2, 0, 1, 1);

        splitter_5 = new QSplitter(layoutWidget);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(splitter_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(120, 23));
        splitter_5->addWidget(label_8);
        VYA = new QLabel(splitter_5);
        VYA->setObjectName(QString::fromUtf8("VYA"));
        VYA->setMinimumSize(QSize(68, 23));
        VYA->setMaximumSize(QSize(120, 16777215));
        splitter_5->addWidget(VYA);

        gridLayout->addWidget(splitter_5, 4, 0, 1, 1);

        splitter_6 = new QSplitter(layoutWidget);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(splitter_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(120, 23));
        splitter_6->addWidget(label_11);
        AXA = new QLabel(splitter_6);
        AXA->setObjectName(QString::fromUtf8("AXA"));
        AXA->setMinimumSize(QSize(68, 23));
        AXA->setMaximumSize(QSize(120, 16777215));
        splitter_6->addWidget(AXA);

        gridLayout->addWidget(splitter_6, 5, 0, 1, 1);

        splitter_8->addWidget(layoutWidget);

        gridLayout_2->addWidget(splitter_8, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(graphicsView, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 555, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        senal->setText(QCoreApplication::translate("MainWindow", "PLANETAS", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "VELX:              ", nullptr));
        VXA->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "POSX:             ", nullptr));
        PXA->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "PLANETA:", nullptr));
        PA->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "AY:                 ", nullptr));
        AYA->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "POSY:             ", nullptr));
        PYA->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "VELY:             ", nullptr));
        VYA->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "AX:                   ", nullptr));
        AXA->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
