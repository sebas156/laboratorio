/********************************************************************************
** Form generated from reading UI file 'numeroplanetas.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMEROPLANETAS_H
#define UI_NUMEROPLANETAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumeroPlanetas
{
public:
    QPushButton *NextNP;
    QSplitter *splitter;
    QLabel *label;
    QSpinBox *spinBox;

    void setupUi(QWidget *NumeroPlanetas)
    {
        if (NumeroPlanetas->objectName().isEmpty())
            NumeroPlanetas->setObjectName(QString::fromUtf8("NumeroPlanetas"));
        NumeroPlanetas->resize(400, 300);
        NextNP = new QPushButton(NumeroPlanetas);
        NextNP->setObjectName(QString::fromUtf8("NextNP"));
        NextNP->setGeometry(QRect(140, 210, 111, 41));
        splitter = new QSplitter(NumeroPlanetas);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(40, 90, 271, 61));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label->setFont(font);
        splitter->addWidget(label);
        spinBox = new QSpinBox(splitter);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Goudy Stout"));
        spinBox->setFont(font1);
        splitter->addWidget(spinBox);

        retranslateUi(NumeroPlanetas);

        QMetaObject::connectSlotsByName(NumeroPlanetas);
    } // setupUi

    void retranslateUi(QWidget *NumeroPlanetas)
    {
        NumeroPlanetas->setWindowTitle(QCoreApplication::translate("NumeroPlanetas", "Form", nullptr));
        NextNP->setText(QCoreApplication::translate("NumeroPlanetas", "ACEPTAR", nullptr));
        label->setText(QCoreApplication::translate("NumeroPlanetas", "Numero de planetas: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumeroPlanetas: public Ui_NumeroPlanetas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMEROPLANETAS_H
