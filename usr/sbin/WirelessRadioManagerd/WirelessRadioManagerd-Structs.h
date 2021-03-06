/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_WR1;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct NSFRange {
	double location;
	double length;
} NSFRange;

typedef struct WRMMetricCallStatus {
	unsigned nCallIdle;
	unsigned nCallActive;
} WRMMetricCallStatus;

typedef struct WRMMetricsAppType {
	unsigned nData;
	unsigned nIMSVoIP;
} WRMMetricsAppType;

typedef struct WRMMetricsMobilityStatus {
	unsigned nStationary;
	unsigned nWalking;
	unsigned nRunning;
	unsigned nVehicular;
} WRMMetricsMobilityStatus;

typedef struct WRMMetricsWiFiToCellReason {
	unsigned nWiFiNotInit;
	unsigned nWiFiNotReady;
	unsigned nWiFiBadSNR;
	unsigned nWiFiBadRSSI;
	unsigned nWiFiBadARQ;
	unsigned nWiFiBadLoad;
	unsigned nWiFiBadBcn;
	unsigned nWiFiBadSymptom;
	unsigned nWiFiBadRTP;
	unsigned nWiFiCellularGood;
} WRMMetricsWiFiToCellReason;

typedef struct WRMMetricsHandover {
	unsigned nHandoverPerformed;
	unsigned nHandoverNotPerformed;
	unsigned nHandoverUnknown;
	unsigned nStatusUpdateDelayBin[6];
} WRMMetricsHandover;

typedef struct WRMMetriciRATLinkPrefChangeWiFiToCellular {
	unsigned count;
	WRMMetricCallStatus callStatus;
	WRMMetricsAppType appType;
	WRMMetricsMobilityStatus mobStatus;
	WRMMetricsWiFiToCellReason reason;
	WRMMetricsHandover handover;
} WRMMetriciRATLinkPrefChangeWiFiToCellular;

typedef struct WRMMetricsCellToWiFiReason {
	unsigned nWiFiGood;
	unsigned nCellularNotReady;
	unsigned nCelluarBadSigBar;
	unsigned nCelluarBadLQM;
	unsigned nCelluarBadRsrp;
	unsigned nCelluarBadEcio;
} WRMMetricsCellToWiFiReason;

typedef struct WRMMetriciRATLinkPrefChangeCellularToWiFi {
	unsigned count;
	WRMMetricCallStatus callStatus;
	WRMMetricsAppType appType;
	WRMMetricsMobilityStatus mobStatus;
	WRMMetricsCellToWiFiReason reason;
	WRMMetricsHandover handover;
} WRMMetriciRATLinkPrefChangeCellularToWiFi;

typedef struct WRMMetriciRATLinkPrefInit {
	unsigned countWiFi;
	unsigned countCellular;
} WRMMetriciRATLinkPrefInit;

typedef struct WRMWiFiCallingEnd {
	int WiFi_RSSI;
	int LTE_RSRP;
	unsigned WiFi_TxPER;
	unsigned WiFi_SINR;
	BOOL WiFi_BSSID_Change;
	unsigned Beacon_Rate;
	BOOL Captive_Network;
	BOOL WOW_Enabled;
	unsigned WiFi_RxRetry;
	unsigned LTE_Tx_Power;
	BOOL LTE_QoS_Available;
	unsigned BSS_Load;
	unsigned LTE_Voice_LQM;
	unsigned LTE_Data_LQM;
	unsigned LTE_SINR;
	unsigned LTE_Signal_bar;
	unsigned Latte_Nominal_Jitter_Buffer_Size;
	unsigned Latte_Dejitter_Buffer_Underflow;
	unsigned Latte_RTP_Packet_Loss;
	unsigned Latte_Erasures;
	BOOL HO_Capability;
	unsigned HO_Bool;
	NSString* WRM_Recommended_RAT;
	BOOL iWLAN_Status;
	NSString* call_id;
	unsigned session_id;
	BOOL IPSec_Tunnel_status;
	char* Call_End_Reason;
	BOOL ATM_Registration_State;
	unsigned BB_Audio_Packet_Loss;
	unsigned BB_Audio_Erasures;
} WRMWiFiCallingEnd;

typedef struct WRMMetricsiRATStreaming {
	unsigned long long timestamp;
	unsigned counter;
	unsigned actualHighBandwidth;
	unsigned actualLowBandwidth;
	unsigned maxOfActualLowBandwidth;
	int deviation;
	unsigned estimatedHighBandwidth;
	unsigned estimatedLowBandwidth;
	unsigned movingAvgHighBandwidth;
	unsigned movingAvgLowBandwidth;
	long long wifiRssi;
	unsigned phyRate;
	unsigned cca;
	unsigned StationCount;
	BOOL metricsUpdate;
} WRMMetricsiRATStreaming;

