QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    formbaptis.cpp \
    formjemaat.cpp \
    formnikah.cpp \
    formpelayan.cpp \
    formsuratbaptis.cpp \
    formsuratnikah.cpp \
    main.cpp \
    formutama.cpp

HEADERS += \
    formbaptis.h \
    formjemaat.h \
    formnikah.h \
    formpelayan.h \
    formsuratbaptis.h \
    formsuratnikah.h \
    formutama.h

FORMS += \
    formbaptis.ui \
    formjemaat.ui \
    formnikah.ui \
    formpelayan.ui \
    formsuratbaptis.ui \
    formsuratnikah.ui \
    formutama.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
