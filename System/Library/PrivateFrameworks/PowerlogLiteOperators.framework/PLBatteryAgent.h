/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLIOKitOperatorComposition, PLEntryNotificationOperatorComposition, PLSemaphore, PLTimer, PLMonotonicTimer, NSString, NSNumber, PLXPCResponderOperatorComposition, NSMutableArray;

@interface PLBatteryAgent : PLAgent {

	BOOL _allowGasGaugeRead;
	BOOL _deviceIsPluggedIn;
	BOOL _isEABatteryConnected;
	int _gasGaugeConsecutiveEmptyEntriesCount;
	PLIOKitOperatorComposition* _iokit;
	PLEntryNotificationOperatorComposition* _canSleepEntryNotifications;
	PLSemaphore* _canSleepSemaphore;
	PLEntryNotificationOperatorComposition* _wakeEntryNotifications;
	PLTimer* _gasGaugeTimer;
	ggcontextRef _gasGagueConnection;
	double _batteryLevelPercent;
	double _rawBatteryVoltageVolt;
	PLTimer* _EABatteryTimer;
	PLMonotonicTimer* _significantBatteryChangeTimer;
	NSString* _entryKeyEABattery;
	NSString* _entryKeyEAPencilStats;
	double _EAEnergyDrained;
	NSNumber* _lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
	PLXPCResponderOperatorComposition* _batteryInfoResponder;
	NSMutableArray* _trackedAccessories;

}

@property (readonly) PLIOKitOperatorComposition * iokit;                                               //@synthesize iokit=_iokit - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * canSleepEntryNotifications;              //@synthesize canSleepEntryNotifications=_canSleepEntryNotifications - In the implementation block
@property (retain) PLSemaphore * canSleepSemaphore;                                                    //@synthesize canSleepSemaphore=_canSleepSemaphore - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;                  //@synthesize wakeEntryNotifications=_wakeEntryNotifications - In the implementation block
@property (retain) PLTimer * gasGaugeTimer;                                                            //@synthesize gasGaugeTimer=_gasGaugeTimer - In the implementation block
@property (assign) ggcontextRef gasGagueConnection;                                                    //@synthesize gasGagueConnection=_gasGagueConnection - In the implementation block
@property (assign) int gasGaugeConsecutiveEmptyEntriesCount;                                           //@synthesize gasGaugeConsecutiveEmptyEntriesCount=_gasGaugeConsecutiveEmptyEntriesCount - In the implementation block
@property (assign) BOOL allowGasGaugeRead;                                                             //@synthesize allowGasGaugeRead=_allowGasGaugeRead - In the implementation block
@property (assign) BOOL deviceIsPluggedIn;                                                             //@synthesize deviceIsPluggedIn=_deviceIsPluggedIn - In the implementation block
@property (assign) double batteryLevelPercent;                                                         //@synthesize batteryLevelPercent=_batteryLevelPercent - In the implementation block
@property (assign) double rawBatteryVoltageVolt;                                                       //@synthesize rawBatteryVoltageVolt=_rawBatteryVoltageVolt - In the implementation block
@property (assign) BOOL isEABatteryConnected;                                                          //@synthesize isEABatteryConnected=_isEABatteryConnected - In the implementation block
@property (retain) PLTimer * EABatteryTimer;                                                           //@synthesize EABatteryTimer=_EABatteryTimer - In the implementation block
@property (retain) PLMonotonicTimer * significantBatteryChangeTimer;                                   //@synthesize significantBatteryChangeTimer=_significantBatteryChangeTimer - In the implementation block
@property (readonly) NSString * entryKeyEABattery;                                                     //@synthesize entryKeyEABattery=_entryKeyEABattery - In the implementation block
@property (readonly) NSString * entryKeyEAPencilStats;                                                 //@synthesize entryKeyEAPencilStats=_entryKeyEAPencilStats - In the implementation block
@property (assign) double EAEnergyDrained;                                                             //@synthesize EAEnergyDrained=_EAEnergyDrained - In the implementation block
@property (retain) NSNumber * lastkIOPSAppleBatteryCaseCumulativeCurrentKey;                           //@synthesize lastkIOPSAppleBatteryCaseCumulativeCurrentKey=_lastkIOPSAppleBatteryCaseCumulativeCurrentKey - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * batteryInfoResponder;                           //@synthesize batteryInfoResponder=_batteryInfoResponder - In the implementation block
@property (retain) NSMutableArray * trackedAccessories;                                                //@synthesize trackedAccessories=_trackedAccessories - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventIntervalDefinitionGasGauge;
+(id)entryEventPointDefinitionGasGaugeReconnect;
+(id)entryEventPointDefinitionEAPencil;
+(id)entryEventForwardDefinitionEAPencil;
+(id)entryEventBackwardDefinitionBattery;
+(id)entryEventBackwardDefinitionEABattery;
+(id)entryEventBackwardDefinitionBatteryUI;
+(id)defaults;
-(void)dealloc;
-(id)init;
-(void)log;
-(BOOL)deviceIsPluggedIn;
-(void)setDeviceIsPluggedIn:(BOOL)arg1 ;
-(void)initOperatorDependancies;
-(PLEntryNotificationOperatorComposition *)canSleepEntryNotifications;
-(PLEntryNotificationOperatorComposition *)wakeEntryNotifications;
-(PLSemaphore *)canSleepSemaphore;
-(void)setCanSleepSemaphore:(PLSemaphore *)arg1 ;
-(void)setBatteryLevelPercent:(double)arg1 ;
-(void)setRawBatteryVoltageVolt:(double)arg1 ;
-(double)rawBatteryVoltageVolt;
-(void)setAllowGasGaugeRead:(BOOL)arg1 ;
-(void)logEventIntervalGasGauge;
-(BOOL)gasGaugeOpenAndStartLogging;
-(void)fakeLogEntry:(id)arg1 ;
-(void)accessoryConnected:(id)arg1 ;
-(void)accessoryDisconnected:(id)arg1 ;
-(void)refreshEABatteryStatus;
-(BOOL)gasGaugeStopLoggingAndClose;
-(BOOL)isEABatteryConnectedNow;
-(NSMutableArray *)trackedAccessories;
-(BOOL)isEAPencilConnectedNow;
-(void)setupEALogging;
-(void)cancelEALogging;
-(PLTimer *)EABatteryTimer;
-(void)logEABatteryStatistics;
-(void)setEABatteryTimer:(PLTimer *)arg1 ;
-(void)setSignificantBatteryChangeTimer:(PLMonotonicTimer *)arg1 ;
-(PLMonotonicTimer *)significantBatteryChangeTimer;
-(void)setLastkIOPSAppleBatteryCaseCumulativeCurrentKey:(NSNumber *)arg1 ;
-(void)detectEAPencilConnectionWithNotification:(id)arg1 ;
-(id)getIOPSDevices;
-(id)getBaseIdentifierFromDevice:(id)arg1 ;
-(NSString *)entryKeyEAPencilStats;
-(NSString *)entryKeyEABattery;
-(NSNumber *)lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
-(double)EAEnergyDrained;
-(void)setEAEnergyDrained:(double)arg1 ;
-(void)setBatteryInfoResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)logEventBackwardBattery;
-(BOOL)allowGasGaugeRead;
-(void)gasGaugeRead;
-(PLIOKitOperatorComposition *)iokit;
-(ggcontextRef)gasGagueConnection;
-(void)setGasGagueConnection:(ggcontextRef)arg1 ;
-(double)batteryLevelPercent;
-(BOOL)givePluggedInFreePass;
-(void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg1 ;
-(int)gasGaugeConsecutiveEmptyEntriesCount;
-(PLTimer *)gasGaugeTimer;
-(void)setGasGaugeTimer:(PLTimer *)arg1 ;
-(BOOL)isEABatteryConnected;
-(void)setIsEABatteryConnected:(BOOL)arg1 ;
-(PLXPCResponderOperatorComposition *)batteryInfoResponder;
-(void)setTrackedAccessories:(NSMutableArray *)arg1 ;
@end

