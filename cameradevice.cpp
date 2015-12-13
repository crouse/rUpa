#include "cameradevice.h"
#include <QDebug>

CameraDevice::CameraDevice(QObject *parent) : QObject(parent)
{
    capture = new cv::VideoCapture;
}

CameraDevice::~CameraDevice()
{
    delete capture;
    capture = NULL;
}

bool CameraDevice::start()
{
    if (capture->isOpened())
        return true;

    capture->open(CV_CAP_ANY);
    if (capture->isOpened()) {
        qDebug() << "Opened";
    }

    return capture->isOpened();
}

bool CameraDevice::stop()
{
    if (capture->isOpened())
        capture->release();

    return true;
}
