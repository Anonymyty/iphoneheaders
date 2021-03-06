/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WRM_iRATConfig : NSObject {

	BOOL _handoverAlgorithmSettingDynamic;
	BOOL _rtpMetricsEnabled;
	BOOL _wifiMetricsEnabled;
	BOOL _cellularMetricsEnabled;
	BOOL _symtompsMetricsEnabled;
	BOOL _idsMetricsEnabled;
	BOOL _mobilityStateAwarenessEnabled;
	BOOL _qmiClientEnabled;
	long long _handoverAlgorithmType;
	long long _ctServiceType;
	long long _pingPongAvoidanceThresholdStationary;
	long long _pingPongAvoidanceThresholdWalking;
	long long _pingPongAvoidanceThresholdRunning;
	long long _cellularStickinessThreaholdIdle;
	long long _cellularStickinessThreaholdActive;
	long long _cellularStickinessThreaholdStationary;
	long long _cellularStickinessThreaholdStationaryActive;
	long long _periodicReportInterval;
	long long _handoverRTThreshold;
	long long _handoverRxJitterThreshold;
	long long _handoverRxPktLossThreshold;
	long long _handoverAvgRxPktLossThreshold;
	long long _handoverTxPktLossThreshold;
	long long _handoverNominalJitterBufferThreshold;
	long long _minActiveWiFiSnrTh0;
	long long _minActiveWiFiSnrTh1;
	long long _minActiveWiFiRssiTh0;
	long long _minActiveWiFiRssiTh1;
	long long _minActiveWiFiCcaTh0;
	long long _minActiveWiFiCcaTh1;
	long long _minIdleWiFiSnrTh0;
	long long _minIdleWiFiSnrTh1;
	long long _minIdleWiFiRssiTh0;
	long long _minIdleWiFiRssiTh1;
	long long _minIdleWiFiCcaTh0;
	long long _minIdleWiFiCcaTh1;
	long long _minActiveWiFiTxPktLossRateTh0;
	long long _minActiveWiFiTxPktLossRateTh1;
	long long _minActiveWiFiAvgTxPktLossRateTh;
	long long _minIdleWiFiTxPktLossRateTh0;
	long long _minIdleWiFiTxPktLossRateTh1;
	long long _minIdleWiFiFwTxPktLossRateTh0;
	long long _minIdleWiFiFwTxPktLossRateTh1;
	long long _minWiFiBeaconPerTh0;
	long long _minWiFiBeaconPerTh1;
	long long _snrHysterisisWalking;
	long long _snrHysterisisRunning;
	long long _rssiHysterisisWalking;
	long long _rssiHysterisisRunning;
	long long _idsMinWiFiRssiTh0;
	long long _idsMinWiFiRssiTh1;
	long long _idsMinWiFiSnrTh0;
	long long _idsMinWiFiSnrTh1;
	long long _idsMinAvgWiFiTxPktLossRateTh0;
	long long _idsMinAvgWiFiTxPktLossRateTh1;
	long long _idsMinWiFiThroughputTh0;
	long long _idsMinWiFiThroughputTh1;
	long long _idsMinWiFiEffectivePhyRateTh0;
	long long _idsMinWiFiEffectivePhyRateTh1;
	long long _idsPeriodicReportInterval;
	long long _idsWiFiMinRttTh1;
	long long _idsBTMinRttTh1;
	long long _idsWiFiMinPerTh1;
	long long _idsAvgWiFiMinPerTh1;
	long long _idsMovAvgWiFiMinPerTh1;
	long long _idsBTMinPerTh1;
	long long _minSNRTh0;
	long long _minSNRTh1;
	long long _minRSRPTh0;
	long long _minRSRPTh1;
	long long _minECIO0;
	long long _minECIO1;
	long long _minSigBarTh0;
	long long _minSigBarTh1;
	long long _transportMetricsRateLimitingThreshold;
	long long _tcpJitterThreshold;
	long long _tcpRttThreshold;
	long long _tcpIdleConnSuccessThreshold;
	long long _tcpActiveConnSuccessThreshold;
	long long _historicalAgeOfConnectedLinkInDays;

}

@property (assign,nonatomic) long long handoverAlgorithmType;                                    //@synthesize handoverAlgorithmType=_handoverAlgorithmType - In the implementation block
@property (assign,nonatomic) long long ctServiceType;                                            //@synthesize ctServiceType=_ctServiceType - In the implementation block
@property (assign,nonatomic) BOOL handoverAlgorithmSettingDynamic;                               //@synthesize handoverAlgorithmSettingDynamic=_handoverAlgorithmSettingDynamic - In the implementation block
@property (assign,nonatomic) long long pingPongAvoidanceThresholdStationary;                     //@synthesize pingPongAvoidanceThresholdStationary=_pingPongAvoidanceThresholdStationary - In the implementation block
@property (assign,nonatomic) long long pingPongAvoidanceThresholdWalking;                        //@synthesize pingPongAvoidanceThresholdWalking=_pingPongAvoidanceThresholdWalking - In the implementation block
@property (assign,nonatomic) long long pingPongAvoidanceThresholdRunning;                        //@synthesize pingPongAvoidanceThresholdRunning=_pingPongAvoidanceThresholdRunning - In the implementation block
@property (assign,nonatomic) long long cellularStickinessThreaholdIdle;                          //@synthesize cellularStickinessThreaholdIdle=_cellularStickinessThreaholdIdle - In the implementation block
@property (assign,nonatomic) long long cellularStickinessThreaholdActive;                        //@synthesize cellularStickinessThreaholdActive=_cellularStickinessThreaholdActive - In the implementation block
@property (assign,nonatomic) long long cellularStickinessThreaholdStationary;                    //@synthesize cellularStickinessThreaholdStationary=_cellularStickinessThreaholdStationary - In the implementation block
@property (assign,nonatomic) long long cellularStickinessThreaholdStationaryActive;              //@synthesize cellularStickinessThreaholdStationaryActive=_cellularStickinessThreaholdStationaryActive - In the implementation block
@property (assign,nonatomic) BOOL rtpMetricsEnabled;                                             //@synthesize rtpMetricsEnabled=_rtpMetricsEnabled - In the implementation block
@property (assign,nonatomic) BOOL wifiMetricsEnabled;                                            //@synthesize wifiMetricsEnabled=_wifiMetricsEnabled - In the implementation block
@property (assign,nonatomic) BOOL cellularMetricsEnabled;                                        //@synthesize cellularMetricsEnabled=_cellularMetricsEnabled - In the implementation block
@property (assign,nonatomic) BOOL symtompsMetricsEnabled;                                        //@synthesize symtompsMetricsEnabled=_symtompsMetricsEnabled - In the implementation block
@property (assign,nonatomic) BOOL idsMetricsEnabled;                                             //@synthesize idsMetricsEnabled=_idsMetricsEnabled - In the implementation block
@property (assign,nonatomic) BOOL mobilityStateAwarenessEnabled;                                 //@synthesize mobilityStateAwarenessEnabled=_mobilityStateAwarenessEnabled - In the implementation block
@property (assign,nonatomic) BOOL qmiClientEnabled;                                              //@synthesize qmiClientEnabled=_qmiClientEnabled - In the implementation block
@property (assign,nonatomic) long long periodicReportInterval;                                   //@synthesize periodicReportInterval=_periodicReportInterval - In the implementation block
@property (assign,nonatomic) long long handoverRTThreshold;                                      //@synthesize handoverRTThreshold=_handoverRTThreshold - In the implementation block
@property (assign,nonatomic) long long handoverRxJitterThreshold;                                //@synthesize handoverRxJitterThreshold=_handoverRxJitterThreshold - In the implementation block
@property (assign,nonatomic) long long handoverRxPktLossThreshold;                               //@synthesize handoverRxPktLossThreshold=_handoverRxPktLossThreshold - In the implementation block
@property (assign,nonatomic) long long handoverAvgRxPktLossThreshold;                            //@synthesize handoverAvgRxPktLossThreshold=_handoverAvgRxPktLossThreshold - In the implementation block
@property (assign,nonatomic) long long handoverTxPktLossThreshold;                               //@synthesize handoverTxPktLossThreshold=_handoverTxPktLossThreshold - In the implementation block
@property (assign,nonatomic) long long handoverNominalJitterBufferThreshold;                     //@synthesize handoverNominalJitterBufferThreshold=_handoverNominalJitterBufferThreshold - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiSnrTh0;                                      //@synthesize minActiveWiFiSnrTh0=_minActiveWiFiSnrTh0 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiSnrTh1;                                      //@synthesize minActiveWiFiSnrTh1=_minActiveWiFiSnrTh1 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiRssiTh0;                                     //@synthesize minActiveWiFiRssiTh0=_minActiveWiFiRssiTh0 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiRssiTh1;                                     //@synthesize minActiveWiFiRssiTh1=_minActiveWiFiRssiTh1 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiCcaTh0;                                      //@synthesize minActiveWiFiCcaTh0=_minActiveWiFiCcaTh0 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiCcaTh1;                                      //@synthesize minActiveWiFiCcaTh1=_minActiveWiFiCcaTh1 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiSnrTh0;                                        //@synthesize minIdleWiFiSnrTh0=_minIdleWiFiSnrTh0 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiSnrTh1;                                        //@synthesize minIdleWiFiSnrTh1=_minIdleWiFiSnrTh1 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiRssiTh0;                                       //@synthesize minIdleWiFiRssiTh0=_minIdleWiFiRssiTh0 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiRssiTh1;                                       //@synthesize minIdleWiFiRssiTh1=_minIdleWiFiRssiTh1 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiCcaTh0;                                        //@synthesize minIdleWiFiCcaTh0=_minIdleWiFiCcaTh0 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiCcaTh1;                                        //@synthesize minIdleWiFiCcaTh1=_minIdleWiFiCcaTh1 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiTxPktLossRateTh0;                            //@synthesize minActiveWiFiTxPktLossRateTh0=_minActiveWiFiTxPktLossRateTh0 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiTxPktLossRateTh1;                            //@synthesize minActiveWiFiTxPktLossRateTh1=_minActiveWiFiTxPktLossRateTh1 - In the implementation block
@property (assign,nonatomic) long long minActiveWiFiAvgTxPktLossRateTh;                          //@synthesize minActiveWiFiAvgTxPktLossRateTh=_minActiveWiFiAvgTxPktLossRateTh - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiTxPktLossRateTh0;                              //@synthesize minIdleWiFiTxPktLossRateTh0=_minIdleWiFiTxPktLossRateTh0 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiTxPktLossRateTh1;                              //@synthesize minIdleWiFiTxPktLossRateTh1=_minIdleWiFiTxPktLossRateTh1 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiFwTxPktLossRateTh0;                            //@synthesize minIdleWiFiFwTxPktLossRateTh0=_minIdleWiFiFwTxPktLossRateTh0 - In the implementation block
@property (assign,nonatomic) long long minIdleWiFiFwTxPktLossRateTh1;                            //@synthesize minIdleWiFiFwTxPktLossRateTh1=_minIdleWiFiFwTxPktLossRateTh1 - In the implementation block
@property (assign,nonatomic) long long minWiFiBeaconPerTh0;                                      //@synthesize minWiFiBeaconPerTh0=_minWiFiBeaconPerTh0 - In the implementation block
@property (assign,nonatomic) long long minWiFiBeaconPerTh1;                                      //@synthesize minWiFiBeaconPerTh1=_minWiFiBeaconPerTh1 - In the implementation block
@property (assign,nonatomic) long long snrHysterisisWalking;                                     //@synthesize snrHysterisisWalking=_snrHysterisisWalking - In the implementation block
@property (assign,nonatomic) long long snrHysterisisRunning;                                     //@synthesize snrHysterisisRunning=_snrHysterisisRunning - In the implementation block
@property (assign,nonatomic) long long rssiHysterisisWalking;                                    //@synthesize rssiHysterisisWalking=_rssiHysterisisWalking - In the implementation block
@property (assign,nonatomic) long long rssiHysterisisRunning;                                    //@synthesize rssiHysterisisRunning=_rssiHysterisisRunning - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiRssiTh0;                                        //@synthesize idsMinWiFiRssiTh0=_idsMinWiFiRssiTh0 - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiRssiTh1;                                        //@synthesize idsMinWiFiRssiTh1=_idsMinWiFiRssiTh1 - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiSnrTh0;                                         //@synthesize idsMinWiFiSnrTh0=_idsMinWiFiSnrTh0 - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiSnrTh1;                                         //@synthesize idsMinWiFiSnrTh1=_idsMinWiFiSnrTh1 - In the implementation block
@property (assign,nonatomic) long long idsMinAvgWiFiTxPktLossRateTh0;                            //@synthesize idsMinAvgWiFiTxPktLossRateTh0=_idsMinAvgWiFiTxPktLossRateTh0 - In the implementation block
@property (assign,nonatomic) long long idsMinAvgWiFiTxPktLossRateTh1;                            //@synthesize idsMinAvgWiFiTxPktLossRateTh1=_idsMinAvgWiFiTxPktLossRateTh1 - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiThroughputTh0;                                  //@synthesize idsMinWiFiThroughputTh0=_idsMinWiFiThroughputTh0 - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiThroughputTh1;                                  //@synthesize idsMinWiFiThroughputTh1=_idsMinWiFiThroughputTh1 - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiEffectivePhyRateTh0;                            //@synthesize idsMinWiFiEffectivePhyRateTh0=_idsMinWiFiEffectivePhyRateTh0 - In the implementation block
@property (assign,nonatomic) long long idsMinWiFiEffectivePhyRateTh1;                            //@synthesize idsMinWiFiEffectivePhyRateTh1=_idsMinWiFiEffectivePhyRateTh1 - In the implementation block
@property (assign,nonatomic) long long idsPeriodicReportInterval;                                //@synthesize idsPeriodicReportInterval=_idsPeriodicReportInterval - In the implementation block
@property (assign,nonatomic) long long idsWiFiMinRttTh1;                                         //@synthesize idsWiFiMinRttTh1=_idsWiFiMinRttTh1 - In the implementation block
@property (assign,nonatomic) long long idsBTMinRttTh1;                                           //@synthesize idsBTMinRttTh1=_idsBTMinRttTh1 - In the implementation block
@property (assign,nonatomic) long long idsWiFiMinPerTh1;                                         //@synthesize idsWiFiMinPerTh1=_idsWiFiMinPerTh1 - In the implementation block
@property (assign,nonatomic) long long idsAvgWiFiMinPerTh1;                                      //@synthesize idsAvgWiFiMinPerTh1=_idsAvgWiFiMinPerTh1 - In the implementation block
@property (assign,nonatomic) long long idsMovAvgWiFiMinPerTh1;                                   //@synthesize idsMovAvgWiFiMinPerTh1=_idsMovAvgWiFiMinPerTh1 - In the implementation block
@property (assign,nonatomic) long long idsBTMinPerTh1;                                           //@synthesize idsBTMinPerTh1=_idsBTMinPerTh1 - In the implementation block
@property (assign,nonatomic) long long minSNRTh0;                                                //@synthesize minSNRTh0=_minSNRTh0 - In the implementation block
@property (assign,nonatomic) long long minSNRTh1;                                                //@synthesize minSNRTh1=_minSNRTh1 - In the implementation block
@property (assign,nonatomic) long long minRSRPTh0;                                               //@synthesize minRSRPTh0=_minRSRPTh0 - In the implementation block
@property (assign,nonatomic) long long minRSRPTh1;                                               //@synthesize minRSRPTh1=_minRSRPTh1 - In the implementation block
@property (assign,nonatomic) long long minECIO0;                                                 //@synthesize minECIO0=_minECIO0 - In the implementation block
@property (assign,nonatomic) long long minECIO1;                                                 //@synthesize minECIO1=_minECIO1 - In the implementation block
@property (assign,nonatomic) long long minSigBarTh0;                                             //@synthesize minSigBarTh0=_minSigBarTh0 - In the implementation block
@property (assign,nonatomic) long long minSigBarTh1;                                             //@synthesize minSigBarTh1=_minSigBarTh1 - In the implementation block
@property (assign,nonatomic) long long transportMetricsRateLimitingThreshold;                    //@synthesize transportMetricsRateLimitingThreshold=_transportMetricsRateLimitingThreshold - In the implementation block
@property (assign,nonatomic) long long tcpJitterThreshold;                                       //@synthesize tcpJitterThreshold=_tcpJitterThreshold - In the implementation block
@property (assign,nonatomic) long long tcpRttThreshold;                                          //@synthesize tcpRttThreshold=_tcpRttThreshold - In the implementation block
@property (assign,nonatomic) long long tcpIdleConnSuccessThreshold;                              //@synthesize tcpIdleConnSuccessThreshold=_tcpIdleConnSuccessThreshold - In the implementation block
@property (assign,nonatomic) long long tcpActiveConnSuccessThreshold;                            //@synthesize tcpActiveConnSuccessThreshold=_tcpActiveConnSuccessThreshold - In the implementation block
@property (assign,nonatomic) long long historicalAgeOfConnectedLinkInDays;                       //@synthesize historicalAgeOfConnectedLinkInDays=_historicalAgeOfConnectedLinkInDays - In the implementation block
-(long long)idsPeriodicReportInterval;
-(long long)idsMinWiFiSnrTh1;
-(long long)idsMinWiFiRssiTh1;
-(long long)idsMinWiFiSnrTh0;
-(long long)idsMinWiFiRssiTh0;
-(long long)idsMinAvgWiFiTxPktLossRateTh1;
-(long long)idsMinAvgWiFiTxPktLossRateTh0;
-(long long)idsMinWiFiThroughputTh1;
-(long long)idsMinWiFiThroughputTh0;
-(long long)idsMinWiFiEffectivePhyRateTh1;
-(long long)idsMinWiFiEffectivePhyRateTh0;
-(long long)idsWiFiMinRttTh1;
-(long long)idsWiFiMinPerTh1;
-(long long)idsMovAvgWiFiMinPerTh1;
-(long long)idsAvgWiFiMinPerTh1;
-(long long)idsBTMinRttTh1;
-(long long)idsBTMinPerTh1;
-(void)loadDefaultsParam;
-(void)loadiRATConfigurablePolicy;
-(void)setHandoverAlgorithmType:(long long)arg1 ;
-(void)setCtServiceType:(long long)arg1 ;
-(void)setHandoverAlgorithmSettingDynamic:(BOOL)arg1 ;
-(void)setPingPongAvoidanceThresholdStationary:(long long)arg1 ;
-(void)setPingPongAvoidanceThresholdWalking:(long long)arg1 ;
-(void)setPingPongAvoidanceThresholdRunning:(long long)arg1 ;
-(void)setCellularStickinessThreaholdIdle:(long long)arg1 ;
-(void)setCellularStickinessThreaholdActive:(long long)arg1 ;
-(void)setCellularStickinessThreaholdStationary:(long long)arg1 ;
-(void)setCellularStickinessThreaholdStationaryActive:(long long)arg1 ;
-(void)setRtpMetricsEnabled:(BOOL)arg1 ;
-(void)setWifiMetricsEnabled:(BOOL)arg1 ;
-(void)setCellularMetricsEnabled:(BOOL)arg1 ;
-(void)setSymtompsMetricsEnabled:(BOOL)arg1 ;
-(void)setIdsMetricsEnabled:(BOOL)arg1 ;
-(void)setMobilityStateAwarenessEnabled:(BOOL)arg1 ;
-(void)setQmiClientEnabled:(BOOL)arg1 ;
-(void)setPeriodicReportInterval:(long long)arg1 ;
-(void)setHandoverRTThreshold:(long long)arg1 ;
-(void)setHandoverRxJitterThreshold:(long long)arg1 ;
-(void)setHandoverRxPktLossThreshold:(long long)arg1 ;
-(void)setHandoverAvgRxPktLossThreshold:(long long)arg1 ;
-(void)setHandoverTxPktLossThreshold:(long long)arg1 ;
-(void)setHandoverNominalJitterBufferThreshold:(long long)arg1 ;
-(void)setMinActiveWiFiSnrTh0:(long long)arg1 ;
-(void)setMinActiveWiFiSnrTh1:(long long)arg1 ;
-(void)setMinActiveWiFiRssiTh0:(long long)arg1 ;
-(void)setMinActiveWiFiRssiTh1:(long long)arg1 ;
-(void)setMinActiveWiFiCcaTh0:(long long)arg1 ;
-(void)setMinActiveWiFiCcaTh1:(long long)arg1 ;
-(void)setMinIdleWiFiSnrTh0:(long long)arg1 ;
-(void)setMinIdleWiFiSnrTh1:(long long)arg1 ;
-(void)setMinIdleWiFiRssiTh0:(long long)arg1 ;
-(void)setMinIdleWiFiRssiTh1:(long long)arg1 ;
-(void)setMinIdleWiFiCcaTh0:(long long)arg1 ;
-(void)setMinIdleWiFiCcaTh1:(long long)arg1 ;
-(void)setIdsMinWiFiRssiTh0:(long long)arg1 ;
-(void)setIdsMinWiFiRssiTh1:(long long)arg1 ;
-(void)setIdsMinWiFiSnrTh0:(long long)arg1 ;
-(void)setIdsMinWiFiSnrTh1:(long long)arg1 ;
-(void)setIdsMinAvgWiFiTxPktLossRateTh0:(long long)arg1 ;
-(void)setIdsMinAvgWiFiTxPktLossRateTh1:(long long)arg1 ;
-(void)setIdsMinWiFiThroughputTh0:(long long)arg1 ;
-(void)setIdsMinWiFiThroughputTh1:(long long)arg1 ;
-(void)setIdsMinWiFiEffectivePhyRateTh0:(long long)arg1 ;
-(void)setIdsMinWiFiEffectivePhyRateTh1:(long long)arg1 ;
-(void)setIdsPeriodicReportInterval:(long long)arg1 ;
-(void)setIdsWiFiMinRttTh1:(long long)arg1 ;
-(void)setIdsBTMinRttTh1:(long long)arg1 ;
-(void)setIdsWiFiMinPerTh1:(long long)arg1 ;
-(void)setIdsAvgWiFiMinPerTh1:(long long)arg1 ;
-(void)setIdsMovAvgWiFiMinPerTh1:(long long)arg1 ;
-(void)setIdsBTMinPerTh1:(long long)arg1 ;
-(void)setMinActiveWiFiTxPktLossRateTh0:(long long)arg1 ;
-(void)setMinActiveWiFiTxPktLossRateTh1:(long long)arg1 ;
-(void)setMinActiveWiFiAvgTxPktLossRateTh:(long long)arg1 ;
-(void)setMinIdleWiFiTxPktLossRateTh0:(long long)arg1 ;
-(void)setMinIdleWiFiTxPktLossRateTh1:(long long)arg1 ;
-(void)setMinIdleWiFiFwTxPktLossRateTh0:(long long)arg1 ;
-(void)setMinIdleWiFiFwTxPktLossRateTh1:(long long)arg1 ;
-(void)setMinWiFiBeaconPerTh0:(long long)arg1 ;
-(void)setMinWiFiBeaconPerTh1:(long long)arg1 ;
-(void)setSnrHysterisisWalking:(long long)arg1 ;
-(void)setSnrHysterisisRunning:(long long)arg1 ;
-(void)setRssiHysterisisWalking:(long long)arg1 ;
-(void)setRssiHysterisisRunning:(long long)arg1 ;
-(void)setMinSNRTh0:(long long)arg1 ;
-(void)setMinSNRTh1:(long long)arg1 ;
-(void)setMinRSRPTh0:(long long)arg1 ;
-(void)setMinRSRPTh1:(long long)arg1 ;
-(void)setMinECIO0:(long long)arg1 ;
-(void)setMinECIO1:(long long)arg1 ;
-(void)setMinSigBarTh0:(long long)arg1 ;
-(void)setMinSigBarTh1:(long long)arg1 ;
-(void)setTransportMetricsRateLimitingThreshold:(long long)arg1 ;
-(void)setTcpJitterThreshold:(long long)arg1 ;
-(void)setTcpRttThreshold:(long long)arg1 ;
-(void)setTcpIdleConnSuccessThreshold:(long long)arg1 ;
-(void)setTcpActiveConnSuccessThreshold:(long long)arg1 ;
-(void)setHistoricalAgeOfConnectedLinkInDays:(long long)arg1 ;
-(long long)handoverAlgorithmType;
-(BOOL)handoverAlgorithmSettingDynamic;
-(long long)pingPongAvoidanceThresholdStationary;
-(long long)pingPongAvoidanceThresholdWalking;
-(long long)pingPongAvoidanceThresholdRunning;
-(long long)cellularStickinessThreaholdIdle;
-(long long)cellularStickinessThreaholdActive;
-(long long)cellularStickinessThreaholdStationary;
-(long long)cellularStickinessThreaholdStationaryActive;
-(BOOL)rtpMetricsEnabled;
-(BOOL)wifiMetricsEnabled;
-(BOOL)cellularMetricsEnabled;
-(BOOL)symtompsMetricsEnabled;
-(BOOL)idsMetricsEnabled;
-(BOOL)mobilityStateAwarenessEnabled;
-(BOOL)qmiClientEnabled;
-(long long)periodicReportInterval;
-(long long)handoverRTThreshold;
-(long long)handoverRxJitterThreshold;
-(long long)handoverRxPktLossThreshold;
-(long long)handoverAvgRxPktLossThreshold;
-(long long)handoverTxPktLossThreshold;
-(long long)handoverNominalJitterBufferThreshold;
-(long long)minActiveWiFiSnrTh0;
-(long long)minActiveWiFiSnrTh1;
-(long long)minActiveWiFiRssiTh0;
-(long long)minActiveWiFiRssiTh1;
-(long long)minActiveWiFiCcaTh0;
-(long long)minActiveWiFiCcaTh1;
-(long long)minIdleWiFiSnrTh0;
-(long long)minIdleWiFiSnrTh1;
-(long long)minIdleWiFiRssiTh0;
-(long long)minIdleWiFiRssiTh1;
-(long long)minIdleWiFiCcaTh0;
-(long long)minIdleWiFiCcaTh1;
-(long long)minActiveWiFiTxPktLossRateTh0;
-(long long)minActiveWiFiTxPktLossRateTh1;
-(long long)minActiveWiFiAvgTxPktLossRateTh;
-(long long)minIdleWiFiTxPktLossRateTh0;
-(long long)minIdleWiFiTxPktLossRateTh1;
-(long long)minIdleWiFiFwTxPktLossRateTh0;
-(long long)minIdleWiFiFwTxPktLossRateTh1;
-(long long)minWiFiBeaconPerTh0;
-(long long)minWiFiBeaconPerTh1;
-(long long)snrHysterisisWalking;
-(long long)snrHysterisisRunning;
-(long long)rssiHysterisisWalking;
-(long long)rssiHysterisisRunning;
-(long long)minSNRTh0;
-(long long)minRSRPTh0;
-(long long)minSNRTh1;
-(long long)minRSRPTh1;
-(long long)minECIO0;
-(long long)minECIO1;
-(long long)minSigBarTh0;
-(long long)minSigBarTh1;
-(long long)transportMetricsRateLimitingThreshold;
-(long long)tcpJitterThreshold;
-(long long)tcpRttThreshold;
-(long long)tcpIdleConnSuccessThreshold;
-(long long)tcpActiveConnSuccessThreshold;
-(long long)historicalAgeOfConnectedLinkInDays;
-(void)printiRATConfig;
-(long long)ctServiceType;
-(void)dealloc;
-(id)init;
@end

