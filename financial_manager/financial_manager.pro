QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_record.cpp \
    crecord.cpp \
    delete_record.cpp \
    edit_record.cpp \
    generate_report.cpp \
    get_help.cpp \
    language.cpp \
    load_from_file.cpp \
    main.cpp \
    menu.cpp \
    save_to_file.cpp \
    sin_record.cpp \
    view_record.cpp \
    widget.cpp

HEADERS += \
    add_record.h \
    crecord.h \
    delete_record.h \
    edit_record.h \
    generate_report.h \
    get_help.h \
    language.h \
    load_from_file.h \
    menu.h \
    save_to_file.h \
    sin_record.h \
    view_record.h \
    widget.h

FORMS += \
    add_record.ui \
    delete_record.ui \
    edit_record.ui \
    generate_report.ui \
    get_help.ui \
    language.ui \
    load_from_file.ui \
    menu.ui \
    save_to_file.ui \
    view_record.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
