/********************************************************************************
** Form generated from reading UI file 'inicializarvalores.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIALIZARVALORES_H
#define UI_INICIALIZARVALORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inicializarvalores
{
public:
    QPushButton *pushButton;
    QSplitter *splitter;
    QLabel *label;
    QLabel *ContadorPlaneta;
    QSplitter *splitter_8;
    QSplitter *splitter_2;
    QLabel *PosX;
    QDoubleSpinBox *VPosX;
    QSplitter *splitter_3;
    QLabel *PosY;
    QDoubleSpinBox *VPosY;
    QSplitter *splitter_5;
    QLabel *VelX;
    QDoubleSpinBox *VVX;
    QSplitter *splitter_4;
    QLabel *VelY;
    QDoubleSpinBox *VVY;
    QSplitter *splitter_6;
    QLabel *Masa;
    QDoubleSpinBox *MP;
    QSplitter *splitter_7;
    QLabel *Radio;
    QDoubleSpinBox *RP;

    void setupUi(QWidget *inicializarvalores)
    {
        if (inicializarvalores->objectName().isEmpty())
            inicializarvalores->setObjectName(QString::fromUtf8("inicializarvalores"));
        inicializarvalores->resize(400, 362);
        pushButton = new QPushButton(inicializarvalores);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 290, 121, 41));
        splitter = new QSplitter(inicializarvalores);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(50, 40, 281, 51));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label->setFont(font);
        splitter->addWidget(label);
        ContadorPlaneta = new QLabel(splitter);
        ContadorPlaneta->setObjectName(QString::fromUtf8("ContadorPlaneta"));
        ContadorPlaneta->setFont(font);
        splitter->addWidget(ContadorPlaneta);
        splitter_8 = new QSplitter(inicializarvalores);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setGeometry(QRect(40, 100, 321, 161));
        splitter_8->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_8);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        PosX = new QLabel(splitter_2);
        PosX->setObjectName(QString::fromUtf8("PosX"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        PosX->setFont(font1);
        splitter_2->addWidget(PosX);
        VPosX = new QDoubleSpinBox(splitter_2);
        VPosX->setObjectName(QString::fromUtf8("VPosX"));
        VPosX->setMinimumSize(QSize(150, 23));
        VPosX->setMinimum(-10000.000000000000000);
        VPosX->setMaximum(10000.000000000000000);
        splitter_2->addWidget(VPosX);
        splitter_8->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_8);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        PosY = new QLabel(splitter_3);
        PosY->setObjectName(QString::fromUtf8("PosY"));
        PosY->setMaximumSize(QSize(167, 16777215));
        PosY->setFont(font1);
        splitter_3->addWidget(PosY);
        VPosY = new QDoubleSpinBox(splitter_3);
        VPosY->setObjectName(QString::fromUtf8("VPosY"));
        VPosY->setMinimum(-10000.000000000000000);
        VPosY->setMaximum(10000.000000000000000);
        splitter_3->addWidget(VPosY);
        splitter_8->addWidget(splitter_3);
        splitter_5 = new QSplitter(splitter_8);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        VelX = new QLabel(splitter_5);
        VelX->setObjectName(QString::fromUtf8("VelX"));
        VelX->setMaximumSize(QSize(167, 16777215));
        VelX->setFont(font1);
        splitter_5->addWidget(VelX);
        VVX = new QDoubleSpinBox(splitter_5);
        VVX->setObjectName(QString::fromUtf8("VVX"));
        VVX->setMinimum(-1000.000000000000000);
        VVX->setMaximum(1000.000000000000000);
        splitter_5->addWidget(VVX);
        splitter_8->addWidget(splitter_5);
        splitter_4 = new QSplitter(splitter_8);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        VelY = new QLabel(splitter_4);
        VelY->setObjectName(QString::fromUtf8("VelY"));
        VelY->setMaximumSize(QSize(167, 16777215));
        VelY->setFont(font1);
        splitter_4->addWidget(VelY);
        VVY = new QDoubleSpinBox(splitter_4);
        VVY->setObjectName(QString::fromUtf8("VVY"));
        VVY->setMinimumSize(QSize(150, 23));
        VVY->setMinimum(-1000.000000000000000);
        VVY->setMaximum(1000.000000000000000);
        splitter_4->addWidget(VVY);
        splitter_8->addWidget(splitter_4);
        splitter_6 = new QSplitter(splitter_8);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        Masa = new QLabel(splitter_6);
        Masa->setObjectName(QString::fromUtf8("Masa"));
        Masa->setMinimumSize(QSize(167, 0));
        Masa->setFont(font1);
        splitter_6->addWidget(Masa);
        MP = new QDoubleSpinBox(splitter_6);
        MP->setObjectName(QString::fromUtf8("MP"));
        MP->setMinimumSize(QSize(150, 23));
        MP->setMaximum(99999999999.000000000000000);
        splitter_6->addWidget(MP);
        splitter_8->addWidget(splitter_6);
        splitter_7 = new QSplitter(splitter_8);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        Radio = new QLabel(splitter_7);
        Radio->setObjectName(QString::fromUtf8("Radio"));
        Radio->setMinimumSize(QSize(167, 0));
        Radio->setFont(font1);
        splitter_7->addWidget(Radio);
        RP = new QDoubleSpinBox(splitter_7);
        RP->setObjectName(QString::fromUtf8("RP"));
        RP->setMinimumSize(QSize(150, 23));
        RP->setMaximum(9999999999.000000000000000);
        splitter_7->addWidget(RP);
        splitter_8->addWidget(splitter_7);

        retranslateUi(inicializarvalores);

        QMetaObject::connectSlotsByName(inicializarvalores);
    } // setupUi

    void retranslateUi(QWidget *inicializarvalores)
    {
        inicializarvalores->setWindowTitle(QCoreApplication::translate("inicializarvalores", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("inicializarvalores", "ACEPTAR", nullptr));
        label->setText(QCoreApplication::translate("inicializarvalores", "Planeta ", nullptr));
        ContadorPlaneta->setText(QCoreApplication::translate("inicializarvalores", "TextLabel", nullptr));
        PosX->setText(QCoreApplication::translate("inicializarvalores", "Posicion en X:", nullptr));
        PosY->setText(QCoreApplication::translate("inicializarvalores", "Posicion en Y: ", nullptr));
        VelX->setText(QCoreApplication::translate("inicializarvalores", "Velocidad en X: ", nullptr));
        VelY->setText(QCoreApplication::translate("inicializarvalores", "Velociodad en Y: ", nullptr));
        Masa->setText(QCoreApplication::translate("inicializarvalores", "Masa planeta: ", nullptr));
        Radio->setText(QCoreApplication::translate("inicializarvalores", "Radio planeta: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inicializarvalores: public Ui_inicializarvalores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIALIZARVALORES_H
