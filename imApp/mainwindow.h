#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

#include "WorkerThread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void configureWorkerThreadControls(WorkerThread &p_wtr);
    void initOpenFileDialog();

public slots:
    void rcvDisplayImage();

private:
    Ui::MainWindow *ui;
    QFileDialog *_dialog;
};
#endif // MAINWINDOW_H
