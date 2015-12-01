#-------------------------------------------------
#
# Project created by QtCreator 2015-12-01T22:04:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rUpa
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

### OPEN CV INCLUDES AND LIBS ###
INCLUDEPATH += /usr/local/Cellar/opencv/2.4.12/include/opencv
INCLUDEPATH += /usr/local/Cellar/opencv/2.4.12/include
LIBS += -L/usr/local/Cellar/opencv/2.4.12/lib -lopencv_calib3d \
    -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann \
    -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml \
    -lopencv_nonfree -lopencv_objdetect -lopencv_ocl -lopencv_photo -lopencv_stitching \
    -lopencv_superres -lopencv_ts -lopencv_video -lopencv_videostab

RESOURCES += \
    icon.qrc
