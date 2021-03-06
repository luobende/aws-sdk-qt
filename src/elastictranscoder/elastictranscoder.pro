include(../../common.pri)

TARGET = QtAwsElasticTranscoder
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    canceljobrequest.h \
    canceljobrequest_p.h \
    canceljobresponse.h \
    canceljobresponse_p.h \
    createjobrequest.h \
    createjobrequest_p.h \
    createjobresponse.h \
    createjobresponse_p.h \
    createpipelinerequest.h \
    createpipelinerequest_p.h \
    createpipelineresponse.h \
    createpipelineresponse_p.h \
    createpresetrequest.h \
    createpresetrequest_p.h \
    createpresetresponse.h \
    createpresetresponse_p.h \
    deletepipelinerequest.h \
    deletepipelinerequest_p.h \
    deletepipelineresponse.h \
    deletepipelineresponse_p.h \
    deletepresetrequest.h \
    deletepresetrequest_p.h \
    deletepresetresponse.h \
    deletepresetresponse_p.h \
    elastictranscoderclient.h \
    elastictranscoderclient_p.h \
    elastictranscoderrequest.h \
    elastictranscoderrequest_p.h \
    elastictranscoderresponse.h \
    elastictranscoderresponse_p.h \
    listjobsbypipelinerequest.h \
    listjobsbypipelinerequest_p.h \
    listjobsbypipelineresponse.h \
    listjobsbypipelineresponse_p.h \
    listjobsbystatusrequest.h \
    listjobsbystatusrequest_p.h \
    listjobsbystatusresponse.h \
    listjobsbystatusresponse_p.h \
    listpipelinesrequest.h \
    listpipelinesrequest_p.h \
    listpipelinesresponse.h \
    listpipelinesresponse_p.h \
    listpresetsrequest.h \
    listpresetsrequest_p.h \
    listpresetsresponse.h \
    listpresetsresponse_p.h \
    readjobrequest.h \
    readjobrequest_p.h \
    readjobresponse.h \
    readjobresponse_p.h \
    readpipelinerequest.h \
    readpipelinerequest_p.h \
    readpipelineresponse.h \
    readpipelineresponse_p.h \
    readpresetrequest.h \
    readpresetrequest_p.h \
    readpresetresponse.h \
    readpresetresponse_p.h \
    testrolerequest.h \
    testrolerequest_p.h \
    testroleresponse.h \
    testroleresponse_p.h \
    updatepipelinenotificationsrequest.h \
    updatepipelinenotificationsrequest_p.h \
    updatepipelinenotificationsresponse.h \
    updatepipelinenotificationsresponse_p.h \
    updatepipelinerequest.h \
    updatepipelinerequest_p.h \
    updatepipelineresponse.h \
    updatepipelineresponse_p.h \
    updatepipelinestatusrequest.h \
    updatepipelinestatusrequest_p.h \
    updatepipelinestatusresponse.h \
    updatepipelinestatusresponse_p.h \

SOURCES += \
    canceljobrequest.cpp \
    canceljobresponse.cpp \
    createjobrequest.cpp \
    createjobresponse.cpp \
    createpipelinerequest.cpp \
    createpipelineresponse.cpp \
    createpresetrequest.cpp \
    createpresetresponse.cpp \
    deletepipelinerequest.cpp \
    deletepipelineresponse.cpp \
    deletepresetrequest.cpp \
    deletepresetresponse.cpp \
    elastictranscoderclient.cpp \
    elastictranscoderrequest.cpp \
    elastictranscoderresponse.cpp \
    listjobsbypipelinerequest.cpp \
    listjobsbypipelineresponse.cpp \
    listjobsbystatusrequest.cpp \
    listjobsbystatusresponse.cpp \
    listpipelinesrequest.cpp \
    listpipelinesresponse.cpp \
    listpresetsrequest.cpp \
    listpresetsresponse.cpp \
    readjobrequest.cpp \
    readjobresponse.cpp \
    readpipelinerequest.cpp \
    readpipelineresponse.cpp \
    readpresetrequest.cpp \
    readpresetresponse.cpp \
    testrolerequest.cpp \
    testroleresponse.cpp \
    updatepipelinenotificationsrequest.cpp \
    updatepipelinenotificationsresponse.cpp \
    updatepipelinerequest.cpp \
    updatepipelineresponse.cpp \
    updatepipelinestatusrequest.cpp \
    updatepipelinestatusresponse.cpp \

win32:CONFIG += skip_target_version_ext
