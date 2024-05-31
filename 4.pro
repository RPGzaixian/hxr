QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buy_false.cpp \
    buy_true.cpp \
    character.cpp \
    game.cpp \
    jiemian.cpp \
    keyswitch.cpp \
    main.cpp \
    menu.cpp \
    npc.cpp \
    package.cpp \
    reallyquit.cpp \
    saving.cpp \
    store.cpp \
    trade.cpp \
    widget.cpp

HEADERS += \
    buy_false.h \
    buy_true.h \
    character.h \
    game.h \
    hero.h \
    init.h \
    jiemian.h \
    keyswitch.h \
    menu.h \
    npc.h \
    package.h \
    reallyquit.h \
    saving.h \
    store.h \
    the_init_for_game.h \
    the_init_for_store.h \
    trade.h \
    w.h \
    widget.h

FORMS += \
    buy_false.ui \
    buy_true.ui \
    jiemian.ui \
    keyswitch.ui \
    menu.ui \
    package.ui \
    reallyquit.ui \
    saving.ui \
    store.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc \
    存档.qrc
