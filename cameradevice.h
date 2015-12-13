#ifndef CAMERADEVICE_H
#define CAMERADEVICE_H

#include <QObject>
#include <opencv/cv.h>
#include <opencv/highgui.h>

class CameraDevice : public QObject
{
    Q_OBJECT
public:
    explicit CameraDevice(QObject *parent = 0);
    ~CameraDevice();

signals:
    void imageReady(const QImage& image);

public slots:
    bool start();
    bool stop();

private:
    cv::VideoCapture *capture;
};

#endif // CAMERADEVICE_H
