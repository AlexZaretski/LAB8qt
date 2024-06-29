#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QListView>
#include <QComboBox>
#include <QStringListModel>
#include <QFile>
#include <QTextStream>
#include <QDialog>
#include <QString>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_calculateButton_clicked();

    void on_radioButtonYes_clicked();

    void on_radioButtonYes_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    QStringListModel *listModel;
    void readFile(const QString &fileName);
    void writeFile(const QString &fileName, const QString &text);
};

#endif // MAINWINDOW_H
