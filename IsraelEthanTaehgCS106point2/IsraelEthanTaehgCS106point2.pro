QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    adminbookpage.cpp \
    bookoption.cpp \
    filehandling.cpp \
    loginpage.cpp \
    catalogue.cpp \
    main.cpp \
    mainwindow.cpp \
    userbookpage.cpp

HEADERS += \
    addbook.h \
    adminbookpage.h \
    bookoption.h \
    filehandling.h \
    loginpage.h \
    userbookpage.h \
    catalogue.h \
    mainwindow.h

FORMS += \
    addbook.ui \
    catalogue.ui \
    adminbookpage.ui \
    loginpage.ui \
    userbookpage.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
