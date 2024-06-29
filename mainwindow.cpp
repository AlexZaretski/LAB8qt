#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , listModel(new QStringListModel(this))
{
    ui->setupUi(this);
    QStringList list;
    list<<"(◕‿◕)-я неплохо умею прятаться";
    listModel->setStringList(list);
    ui->listView->setModel(listModel);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calculateButton_clicked()
{
    qint64 x = 1;
    bool ok = false;
    bool ok1= false;
    bool ok2 = false;
    bool ok3 = false;
    qint64 a = ui->lineEditA->text().toLongLong(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Ошибка", "Введите коэффициент a");
        return;
    }
    qint64 c = ui->lineEditC->text().toLongLong(&ok2);
    if (!ok2) {
        QMessageBox::warning(this, "Ошибка", "Введите коэффициент c");
        return;
    }
    qint64 b = ui->lineEditB->text().toLongLong(&ok1);
    if (!ok1) {
        if(ok2 && !ok3){
            qint64 result = a * x + c;
            ui->resultLabel->setText(QString("Result: %1").arg(result));
        }
        else{
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid integer for b");
        return;
        }
    }
    qint64 d = ui->lineEditD->text().toLongLong(&ok3);
    if(ok && ok1 && ok2) {
        if(ok3){
            qint64 result = a * x * x * x + b * x * x + c * x + d;
            ui->resultLabel->setText(QString("Result: %1").arg(result));
        }
        else{
            qint64 result = a * x * x + b * x + c;
            ui->resultLabel->setText(QString("Result: %1").arg(result));
}
    }}




void MainWindow::on_radioButtonYes_clicked(bool checked)
{
    if(!checked) {
        ui->listView->show();
    }
    else {
        ui->listView->hide();
    }
}

void MainWindow::readFile(const QString &fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QStringList list;
        while (!in.atEnd()) {
            QString line = in.readLine();
            list << line;
        }
        listModel->setStringList(list);
        file.close();
    }
}

void MainWindow::writeFile(const QString &fileName, const QString &text)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << text;
        file.close();
    }
}

