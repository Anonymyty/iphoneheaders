/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/RadioController.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface Radio4GController : RadioController {

	void** keys[6];
	BOOL enableLTECounters;
	NSObject*<OS_dispatch_queue> radioQueue;
	unsigned radioBandWitdh;
	unsigned radioStatus;
	unsigned radioTxPower;
	unsigned radioTxSlot;
	unsigned radioRxSlot;
	unsigned rc_2GTransmitLevel;
	unsigned rc_C2KTransmitLevel;
	unsigned rc_UMTSTransmitLevel;
	unsigned rc_LTETransmitLevel;
	BOOL enableLTEDataCollection;

}

@property (nonatomic,readonly) BOOL enableLTEDataCollection; 
-(void)setRadioPowerLimits:(unsigned)arg1 :(unsigned)arg2 :(unsigned)arg3 :(unsigned)arg4 ;
-(BOOL)enableLTEDataCollection;
-(void)updateLTECounters:(CFDictionaryRef)arg1 ;
-(void)getTxCounters:(unsigned*)arg1 :(unsigned*)arg2 :(unsigned*)arg3 :(unsigned*)arg4 :(unsigned*)arg5 ;
-(void)getRadioPower:(unsigned*)arg1 :(int*)arg2 :(unsigned)arg3 :(unsigned)arg4 :(unsigned)arg5 ;
-(void)setMaxTransmitPower;
-(void)doEnableDataCollection:(unsigned*)arg1 ;
-(void)enableDataCollection:(BOOL)arg1 ;
-(void)initDataCollection;
-(void)initializeRadio;
-(void)getTxDutyCycle:(unsigned*)arg1 ;
-(void)registerForLTERadioCounterChange;
-(void)unRegisterForLTERadioCounterChange;
-(void)registerForStatusNotificationChange;
-(id)init:(/*function pointer*/void*)arg1 ;
@end
