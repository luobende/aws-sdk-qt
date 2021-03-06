include(../../common.pri)

TARGET = QtAwsSes
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    clonereceiptrulesetrequest.h \
    clonereceiptrulesetrequest_p.h \
    clonereceiptrulesetresponse.h \
    clonereceiptrulesetresponse_p.h \
    createconfigurationseteventdestinationrequest.h \
    createconfigurationseteventdestinationrequest_p.h \
    createconfigurationseteventdestinationresponse.h \
    createconfigurationseteventdestinationresponse_p.h \
    createconfigurationsetrequest.h \
    createconfigurationsetrequest_p.h \
    createconfigurationsetresponse.h \
    createconfigurationsetresponse_p.h \
    createconfigurationsettrackingoptionsrequest.h \
    createconfigurationsettrackingoptionsrequest_p.h \
    createconfigurationsettrackingoptionsresponse.h \
    createconfigurationsettrackingoptionsresponse_p.h \
    createcustomverificationemailtemplaterequest.h \
    createcustomverificationemailtemplaterequest_p.h \
    createcustomverificationemailtemplateresponse.h \
    createcustomverificationemailtemplateresponse_p.h \
    createreceiptfilterrequest.h \
    createreceiptfilterrequest_p.h \
    createreceiptfilterresponse.h \
    createreceiptfilterresponse_p.h \
    createreceiptrulerequest.h \
    createreceiptrulerequest_p.h \
    createreceiptruleresponse.h \
    createreceiptruleresponse_p.h \
    createreceiptrulesetrequest.h \
    createreceiptrulesetrequest_p.h \
    createreceiptrulesetresponse.h \
    createreceiptrulesetresponse_p.h \
    createtemplaterequest.h \
    createtemplaterequest_p.h \
    createtemplateresponse.h \
    createtemplateresponse_p.h \
    deleteconfigurationseteventdestinationrequest.h \
    deleteconfigurationseteventdestinationrequest_p.h \
    deleteconfigurationseteventdestinationresponse.h \
    deleteconfigurationseteventdestinationresponse_p.h \
    deleteconfigurationsetrequest.h \
    deleteconfigurationsetrequest_p.h \
    deleteconfigurationsetresponse.h \
    deleteconfigurationsetresponse_p.h \
    deleteconfigurationsettrackingoptionsrequest.h \
    deleteconfigurationsettrackingoptionsrequest_p.h \
    deleteconfigurationsettrackingoptionsresponse.h \
    deleteconfigurationsettrackingoptionsresponse_p.h \
    deletecustomverificationemailtemplaterequest.h \
    deletecustomverificationemailtemplaterequest_p.h \
    deletecustomverificationemailtemplateresponse.h \
    deletecustomverificationemailtemplateresponse_p.h \
    deleteidentitypolicyrequest.h \
    deleteidentitypolicyrequest_p.h \
    deleteidentitypolicyresponse.h \
    deleteidentitypolicyresponse_p.h \
    deleteidentityrequest.h \
    deleteidentityrequest_p.h \
    deleteidentityresponse.h \
    deleteidentityresponse_p.h \
    deletereceiptfilterrequest.h \
    deletereceiptfilterrequest_p.h \
    deletereceiptfilterresponse.h \
    deletereceiptfilterresponse_p.h \
    deletereceiptrulerequest.h \
    deletereceiptrulerequest_p.h \
    deletereceiptruleresponse.h \
    deletereceiptruleresponse_p.h \
    deletereceiptrulesetrequest.h \
    deletereceiptrulesetrequest_p.h \
    deletereceiptrulesetresponse.h \
    deletereceiptrulesetresponse_p.h \
    deletetemplaterequest.h \
    deletetemplaterequest_p.h \
    deletetemplateresponse.h \
    deletetemplateresponse_p.h \
    deleteverifiedemailaddressrequest.h \
    deleteverifiedemailaddressrequest_p.h \
    deleteverifiedemailaddressresponse.h \
    deleteverifiedemailaddressresponse_p.h \
    describeactivereceiptrulesetrequest.h \
    describeactivereceiptrulesetrequest_p.h \
    describeactivereceiptrulesetresponse.h \
    describeactivereceiptrulesetresponse_p.h \
    describeconfigurationsetrequest.h \
    describeconfigurationsetrequest_p.h \
    describeconfigurationsetresponse.h \
    describeconfigurationsetresponse_p.h \
    describereceiptrulerequest.h \
    describereceiptrulerequest_p.h \
    describereceiptruleresponse.h \
    describereceiptruleresponse_p.h \
    describereceiptrulesetrequest.h \
    describereceiptrulesetrequest_p.h \
    describereceiptrulesetresponse.h \
    describereceiptrulesetresponse_p.h \
    getaccountsendingenabledrequest.h \
    getaccountsendingenabledrequest_p.h \
    getaccountsendingenabledresponse.h \
    getaccountsendingenabledresponse_p.h \
    getcustomverificationemailtemplaterequest.h \
    getcustomverificationemailtemplaterequest_p.h \
    getcustomverificationemailtemplateresponse.h \
    getcustomverificationemailtemplateresponse_p.h \
    getidentitydkimattributesrequest.h \
    getidentitydkimattributesrequest_p.h \
    getidentitydkimattributesresponse.h \
    getidentitydkimattributesresponse_p.h \
    getidentitymailfromdomainattributesrequest.h \
    getidentitymailfromdomainattributesrequest_p.h \
    getidentitymailfromdomainattributesresponse.h \
    getidentitymailfromdomainattributesresponse_p.h \
    getidentitynotificationattributesrequest.h \
    getidentitynotificationattributesrequest_p.h \
    getidentitynotificationattributesresponse.h \
    getidentitynotificationattributesresponse_p.h \
    getidentitypoliciesrequest.h \
    getidentitypoliciesrequest_p.h \
    getidentitypoliciesresponse.h \
    getidentitypoliciesresponse_p.h \
    getidentityverificationattributesrequest.h \
    getidentityverificationattributesrequest_p.h \
    getidentityverificationattributesresponse.h \
    getidentityverificationattributesresponse_p.h \
    getsendquotarequest.h \
    getsendquotarequest_p.h \
    getsendquotaresponse.h \
    getsendquotaresponse_p.h \
    getsendstatisticsrequest.h \
    getsendstatisticsrequest_p.h \
    getsendstatisticsresponse.h \
    getsendstatisticsresponse_p.h \
    gettemplaterequest.h \
    gettemplaterequest_p.h \
    gettemplateresponse.h \
    gettemplateresponse_p.h \
    listconfigurationsetsrequest.h \
    listconfigurationsetsrequest_p.h \
    listconfigurationsetsresponse.h \
    listconfigurationsetsresponse_p.h \
    listcustomverificationemailtemplatesrequest.h \
    listcustomverificationemailtemplatesrequest_p.h \
    listcustomverificationemailtemplatesresponse.h \
    listcustomverificationemailtemplatesresponse_p.h \
    listidentitiesrequest.h \
    listidentitiesrequest_p.h \
    listidentitiesresponse.h \
    listidentitiesresponse_p.h \
    listidentitypoliciesrequest.h \
    listidentitypoliciesrequest_p.h \
    listidentitypoliciesresponse.h \
    listidentitypoliciesresponse_p.h \
    listreceiptfiltersrequest.h \
    listreceiptfiltersrequest_p.h \
    listreceiptfiltersresponse.h \
    listreceiptfiltersresponse_p.h \
    listreceiptrulesetsrequest.h \
    listreceiptrulesetsrequest_p.h \
    listreceiptrulesetsresponse.h \
    listreceiptrulesetsresponse_p.h \
    listtemplatesrequest.h \
    listtemplatesrequest_p.h \
    listtemplatesresponse.h \
    listtemplatesresponse_p.h \
    listverifiedemailaddressesrequest.h \
    listverifiedemailaddressesrequest_p.h \
    listverifiedemailaddressesresponse.h \
    listverifiedemailaddressesresponse_p.h \
    putidentitypolicyrequest.h \
    putidentitypolicyrequest_p.h \
    putidentitypolicyresponse.h \
    putidentitypolicyresponse_p.h \
    reorderreceiptrulesetrequest.h \
    reorderreceiptrulesetrequest_p.h \
    reorderreceiptrulesetresponse.h \
    reorderreceiptrulesetresponse_p.h \
    sendbouncerequest.h \
    sendbouncerequest_p.h \
    sendbounceresponse.h \
    sendbounceresponse_p.h \
    sendbulktemplatedemailrequest.h \
    sendbulktemplatedemailrequest_p.h \
    sendbulktemplatedemailresponse.h \
    sendbulktemplatedemailresponse_p.h \
    sendcustomverificationemailrequest.h \
    sendcustomverificationemailrequest_p.h \
    sendcustomverificationemailresponse.h \
    sendcustomverificationemailresponse_p.h \
    sendemailrequest.h \
    sendemailrequest_p.h \
    sendemailresponse.h \
    sendemailresponse_p.h \
    sendrawemailrequest.h \
    sendrawemailrequest_p.h \
    sendrawemailresponse.h \
    sendrawemailresponse_p.h \
    sendtemplatedemailrequest.h \
    sendtemplatedemailrequest_p.h \
    sendtemplatedemailresponse.h \
    sendtemplatedemailresponse_p.h \
    sesclient.h \
    sesclient_p.h \
    sesrequest.h \
    sesrequest_p.h \
    sesresponse.h \
    sesresponse_p.h \
    setactivereceiptrulesetrequest.h \
    setactivereceiptrulesetrequest_p.h \
    setactivereceiptrulesetresponse.h \
    setactivereceiptrulesetresponse_p.h \
    setidentitydkimenabledrequest.h \
    setidentitydkimenabledrequest_p.h \
    setidentitydkimenabledresponse.h \
    setidentitydkimenabledresponse_p.h \
    setidentityfeedbackforwardingenabledrequest.h \
    setidentityfeedbackforwardingenabledrequest_p.h \
    setidentityfeedbackforwardingenabledresponse.h \
    setidentityfeedbackforwardingenabledresponse_p.h \
    setidentityheadersinnotificationsenabledrequest.h \
    setidentityheadersinnotificationsenabledrequest_p.h \
    setidentityheadersinnotificationsenabledresponse.h \
    setidentityheadersinnotificationsenabledresponse_p.h \
    setidentitymailfromdomainrequest.h \
    setidentitymailfromdomainrequest_p.h \
    setidentitymailfromdomainresponse.h \
    setidentitymailfromdomainresponse_p.h \
    setidentitynotificationtopicrequest.h \
    setidentitynotificationtopicrequest_p.h \
    setidentitynotificationtopicresponse.h \
    setidentitynotificationtopicresponse_p.h \
    setreceiptrulepositionrequest.h \
    setreceiptrulepositionrequest_p.h \
    setreceiptrulepositionresponse.h \
    setreceiptrulepositionresponse_p.h \
    testrendertemplaterequest.h \
    testrendertemplaterequest_p.h \
    testrendertemplateresponse.h \
    testrendertemplateresponse_p.h \
    updateaccountsendingenabledrequest.h \
    updateaccountsendingenabledrequest_p.h \
    updateaccountsendingenabledresponse.h \
    updateaccountsendingenabledresponse_p.h \
    updateconfigurationseteventdestinationrequest.h \
    updateconfigurationseteventdestinationrequest_p.h \
    updateconfigurationseteventdestinationresponse.h \
    updateconfigurationseteventdestinationresponse_p.h \
    updateconfigurationsetreputationmetricsenabledrequest.h \
    updateconfigurationsetreputationmetricsenabledrequest_p.h \
    updateconfigurationsetreputationmetricsenabledresponse.h \
    updateconfigurationsetreputationmetricsenabledresponse_p.h \
    updateconfigurationsetsendingenabledrequest.h \
    updateconfigurationsetsendingenabledrequest_p.h \
    updateconfigurationsetsendingenabledresponse.h \
    updateconfigurationsetsendingenabledresponse_p.h \
    updateconfigurationsettrackingoptionsrequest.h \
    updateconfigurationsettrackingoptionsrequest_p.h \
    updateconfigurationsettrackingoptionsresponse.h \
    updateconfigurationsettrackingoptionsresponse_p.h \
    updatecustomverificationemailtemplaterequest.h \
    updatecustomverificationemailtemplaterequest_p.h \
    updatecustomverificationemailtemplateresponse.h \
    updatecustomverificationemailtemplateresponse_p.h \
    updatereceiptrulerequest.h \
    updatereceiptrulerequest_p.h \
    updatereceiptruleresponse.h \
    updatereceiptruleresponse_p.h \
    updatetemplaterequest.h \
    updatetemplaterequest_p.h \
    updatetemplateresponse.h \
    updatetemplateresponse_p.h \
    verifydomaindkimrequest.h \
    verifydomaindkimrequest_p.h \
    verifydomaindkimresponse.h \
    verifydomaindkimresponse_p.h \
    verifydomainidentityrequest.h \
    verifydomainidentityrequest_p.h \
    verifydomainidentityresponse.h \
    verifydomainidentityresponse_p.h \
    verifyemailaddressrequest.h \
    verifyemailaddressrequest_p.h \
    verifyemailaddressresponse.h \
    verifyemailaddressresponse_p.h \
    verifyemailidentityrequest.h \
    verifyemailidentityrequest_p.h \
    verifyemailidentityresponse.h \
    verifyemailidentityresponse_p.h \

SOURCES += \
    clonereceiptrulesetrequest.cpp \
    clonereceiptrulesetresponse.cpp \
    createconfigurationseteventdestinationrequest.cpp \
    createconfigurationseteventdestinationresponse.cpp \
    createconfigurationsetrequest.cpp \
    createconfigurationsetresponse.cpp \
    createconfigurationsettrackingoptionsrequest.cpp \
    createconfigurationsettrackingoptionsresponse.cpp \
    createcustomverificationemailtemplaterequest.cpp \
    createcustomverificationemailtemplateresponse.cpp \
    createreceiptfilterrequest.cpp \
    createreceiptfilterresponse.cpp \
    createreceiptrulerequest.cpp \
    createreceiptruleresponse.cpp \
    createreceiptrulesetrequest.cpp \
    createreceiptrulesetresponse.cpp \
    createtemplaterequest.cpp \
    createtemplateresponse.cpp \
    deleteconfigurationseteventdestinationrequest.cpp \
    deleteconfigurationseteventdestinationresponse.cpp \
    deleteconfigurationsetrequest.cpp \
    deleteconfigurationsetresponse.cpp \
    deleteconfigurationsettrackingoptionsrequest.cpp \
    deleteconfigurationsettrackingoptionsresponse.cpp \
    deletecustomverificationemailtemplaterequest.cpp \
    deletecustomverificationemailtemplateresponse.cpp \
    deleteidentitypolicyrequest.cpp \
    deleteidentitypolicyresponse.cpp \
    deleteidentityrequest.cpp \
    deleteidentityresponse.cpp \
    deletereceiptfilterrequest.cpp \
    deletereceiptfilterresponse.cpp \
    deletereceiptrulerequest.cpp \
    deletereceiptruleresponse.cpp \
    deletereceiptrulesetrequest.cpp \
    deletereceiptrulesetresponse.cpp \
    deletetemplaterequest.cpp \
    deletetemplateresponse.cpp \
    deleteverifiedemailaddressrequest.cpp \
    deleteverifiedemailaddressresponse.cpp \
    describeactivereceiptrulesetrequest.cpp \
    describeactivereceiptrulesetresponse.cpp \
    describeconfigurationsetrequest.cpp \
    describeconfigurationsetresponse.cpp \
    describereceiptrulerequest.cpp \
    describereceiptruleresponse.cpp \
    describereceiptrulesetrequest.cpp \
    describereceiptrulesetresponse.cpp \
    getaccountsendingenabledrequest.cpp \
    getaccountsendingenabledresponse.cpp \
    getcustomverificationemailtemplaterequest.cpp \
    getcustomverificationemailtemplateresponse.cpp \
    getidentitydkimattributesrequest.cpp \
    getidentitydkimattributesresponse.cpp \
    getidentitymailfromdomainattributesrequest.cpp \
    getidentitymailfromdomainattributesresponse.cpp \
    getidentitynotificationattributesrequest.cpp \
    getidentitynotificationattributesresponse.cpp \
    getidentitypoliciesrequest.cpp \
    getidentitypoliciesresponse.cpp \
    getidentityverificationattributesrequest.cpp \
    getidentityverificationattributesresponse.cpp \
    getsendquotarequest.cpp \
    getsendquotaresponse.cpp \
    getsendstatisticsrequest.cpp \
    getsendstatisticsresponse.cpp \
    gettemplaterequest.cpp \
    gettemplateresponse.cpp \
    listconfigurationsetsrequest.cpp \
    listconfigurationsetsresponse.cpp \
    listcustomverificationemailtemplatesrequest.cpp \
    listcustomverificationemailtemplatesresponse.cpp \
    listidentitiesrequest.cpp \
    listidentitiesresponse.cpp \
    listidentitypoliciesrequest.cpp \
    listidentitypoliciesresponse.cpp \
    listreceiptfiltersrequest.cpp \
    listreceiptfiltersresponse.cpp \
    listreceiptrulesetsrequest.cpp \
    listreceiptrulesetsresponse.cpp \
    listtemplatesrequest.cpp \
    listtemplatesresponse.cpp \
    listverifiedemailaddressesrequest.cpp \
    listverifiedemailaddressesresponse.cpp \
    putidentitypolicyrequest.cpp \
    putidentitypolicyresponse.cpp \
    reorderreceiptrulesetrequest.cpp \
    reorderreceiptrulesetresponse.cpp \
    sendbouncerequest.cpp \
    sendbounceresponse.cpp \
    sendbulktemplatedemailrequest.cpp \
    sendbulktemplatedemailresponse.cpp \
    sendcustomverificationemailrequest.cpp \
    sendcustomverificationemailresponse.cpp \
    sendemailrequest.cpp \
    sendemailresponse.cpp \
    sendrawemailrequest.cpp \
    sendrawemailresponse.cpp \
    sendtemplatedemailrequest.cpp \
    sendtemplatedemailresponse.cpp \
    sesclient.cpp \
    sesrequest.cpp \
    sesresponse.cpp \
    setactivereceiptrulesetrequest.cpp \
    setactivereceiptrulesetresponse.cpp \
    setidentitydkimenabledrequest.cpp \
    setidentitydkimenabledresponse.cpp \
    setidentityfeedbackforwardingenabledrequest.cpp \
    setidentityfeedbackforwardingenabledresponse.cpp \
    setidentityheadersinnotificationsenabledrequest.cpp \
    setidentityheadersinnotificationsenabledresponse.cpp \
    setidentitymailfromdomainrequest.cpp \
    setidentitymailfromdomainresponse.cpp \
    setidentitynotificationtopicrequest.cpp \
    setidentitynotificationtopicresponse.cpp \
    setreceiptrulepositionrequest.cpp \
    setreceiptrulepositionresponse.cpp \
    testrendertemplaterequest.cpp \
    testrendertemplateresponse.cpp \
    updateaccountsendingenabledrequest.cpp \
    updateaccountsendingenabledresponse.cpp \
    updateconfigurationseteventdestinationrequest.cpp \
    updateconfigurationseteventdestinationresponse.cpp \
    updateconfigurationsetreputationmetricsenabledrequest.cpp \
    updateconfigurationsetreputationmetricsenabledresponse.cpp \
    updateconfigurationsetsendingenabledrequest.cpp \
    updateconfigurationsetsendingenabledresponse.cpp \
    updateconfigurationsettrackingoptionsrequest.cpp \
    updateconfigurationsettrackingoptionsresponse.cpp \
    updatecustomverificationemailtemplaterequest.cpp \
    updatecustomverificationemailtemplateresponse.cpp \
    updatereceiptrulerequest.cpp \
    updatereceiptruleresponse.cpp \
    updatetemplaterequest.cpp \
    updatetemplateresponse.cpp \
    verifydomaindkimrequest.cpp \
    verifydomaindkimresponse.cpp \
    verifydomainidentityrequest.cpp \
    verifydomainidentityresponse.cpp \
    verifyemailaddressrequest.cpp \
    verifyemailaddressresponse.cpp \
    verifyemailidentityrequest.cpp \
    verifyemailidentityresponse.cpp \

win32:CONFIG += skip_target_version_ext
