#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class CameraDevice;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CameraDevice *camera;

protected:
    void timerEvent(QTimerEvent*);

private slots:
    void on_actionOpen_camera_triggered();
    void on_actionClose_camera_triggered();
};

#endif // MAINWINDOW_H
