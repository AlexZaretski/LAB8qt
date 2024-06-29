/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *labelA;
    QLineEdit *lineEditA;
    QLabel *labelB;
    QLineEdit *lineEditB;
    QLabel *labelC;
    QLineEdit *lineEditC;
    QLabel *labelD;
    QLineEdit *lineEditD;
    QPushButton *calculateButton;
    QLabel *resultLabel;
    QListView *listView;
    QRadioButton *radioButtonYes;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        labelA = new QLabel(centralwidget);
        labelA->setObjectName("labelA");

        verticalLayout_2->addWidget(labelA);

        lineEditA = new QLineEdit(centralwidget);
        lineEditA->setObjectName("lineEditA");

        verticalLayout_2->addWidget(lineEditA);

        labelB = new QLabel(centralwidget);
        labelB->setObjectName("labelB");

        verticalLayout_2->addWidget(labelB);

        lineEditB = new QLineEdit(centralwidget);
        lineEditB->setObjectName("lineEditB");

        verticalLayout_2->addWidget(lineEditB);

        labelC = new QLabel(centralwidget);
        labelC->setObjectName("labelC");

        verticalLayout_2->addWidget(labelC);

        lineEditC = new QLineEdit(centralwidget);
        lineEditC->setObjectName("lineEditC");

        verticalLayout_2->addWidget(lineEditC);

        labelD = new QLabel(centralwidget);
        labelD->setObjectName("labelD");

        verticalLayout_2->addWidget(labelD);

        lineEditD = new QLineEdit(centralwidget);
        lineEditD->setObjectName("lineEditD");

        verticalLayout_2->addWidget(lineEditD);

        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");

        verticalLayout_2->addWidget(calculateButton);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");

        verticalLayout_2->addWidget(resultLabel);

        listView = new QListView(centralwidget);
        listView->setObjectName("listView");

        verticalLayout_2->addWidget(listView);

        radioButtonYes = new QRadioButton(centralwidget);
        radioButtonYes->setObjectName("radioButtonYes");

        verticalLayout_2->addWidget(radioButtonYes);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217 \320\262\321\213\321\207\320\270\321\201\320\273\321\217\321\216\321\202\321\201\321\217 \321\201\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265\320\274 x \321\200\320\260\320\262\320\275\321\213\320\274 1!!!", nullptr));
        labelA->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">a:</span></p></body></html>", nullptr));
        labelB->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">b:</span></p></body></html>", nullptr));
        labelC->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">c:</span></p></body></html>", nullptr));
        labelD->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">d:</span></p></body></html>", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Result:</span></p></body></html>", nullptr));
        radioButtonYes->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\265\320\263\320\276 \321\201\320\277\320\276\321\201\320\276\320\261\320\275\320\276\321\201\321\202\320\270?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
