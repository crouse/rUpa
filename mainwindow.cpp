#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cameradevice.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    camera(new CameraDevice(this))

{
    ui->setupUi(this);
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent*) {
    /*
    IplImage *image=cvQueryFrame(camera);
    cvwidget->putImage(image);
    */
}

void MainWindow::on_actionOpen_camera_triggered()
{
    camera->start();
}

void MainWindow::on_actionClose_camera_triggered()
{
    camera->stop();
}
