include(../../common.pri)

TARGET = QtAwsMobile
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createprojectrequest.h \
    createprojectrequest_p.h \
    createprojectresponse.h \
    createprojectresponse_p.h \
    deleteprojectrequest.h \
    deleteprojectrequest_p.h \
    deleteprojectresponse.h \
    deleteprojectresponse_p.h \
    describebundlerequest.h \
    describebundlerequest_p.h \
    describebundleresponse.h \
    describebundleresponse_p.h \
    describeprojectrequest.h \
    describeprojectrequest_p.h \
    describeprojectresponse.h \
    describeprojectresponse_p.h \
    exportbundlerequest.h \
    exportbundlerequest_p.h \
    exportbundleresponse.h \
    exportbundleresponse_p.h \
    exportprojectrequest.h \
    exportprojectrequest_p.h \
    exportprojectresponse.h \
    exportprojectresponse_p.h \
    listbundlesrequest.h \
    listbundlesrequest_p.h \
    listbundlesresponse.h \
    listbundlesresponse_p.h \
    listprojectsrequest.h \
    listprojectsrequest_p.h \
    listprojectsresponse.h \
    listprojectsresponse_p.h \
    mobileclient.h \
    mobileclient_p.h \
    mobilerequest.h \
    mobilerequest_p.h \
    mobileresponse.h \
    mobileresponse_p.h \
    updateprojectrequest.h \
    updateprojectrequest_p.h \
    updateprojectresponse.h \
    updateprojectresponse_p.h \

SOURCES += \
    createprojectrequest.cpp \
    createprojectresponse.cpp \
    deleteprojectrequest.cpp \
    deleteprojectresponse.cpp \
    describebundlerequest.cpp \
    describebundleresponse.cpp \
    describeprojectrequest.cpp \
    describeprojectresponse.cpp \
    exportbundlerequest.cpp \
    exportbundleresponse.cpp \
    exportprojectrequest.cpp \
    exportprojectresponse.cpp \
    listbundlesrequest.cpp \
    listbundlesresponse.cpp \
    listprojectsrequest.cpp \
    listprojectsresponse.cpp \
    mobileclient.cpp \
    mobilerequest.cpp \
    mobileresponse.cpp \
    updateprojectrequest.cpp \
    updateprojectresponse.cpp \

win32:CONFIG += skip_target_version_ext
