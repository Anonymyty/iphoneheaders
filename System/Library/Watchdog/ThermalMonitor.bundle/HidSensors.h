/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@interface HidSensors : NSObject {

	CFDictionaryRef _infoOnlyHIDSensors;
	CFArrayRef hidSensorKeys;
	CFArrayRef sensorFourCharCode;
	CFArrayRef synthSensorKeys;
	iir_filter_t filterParams[40];
	unsigned long long sensorWatchdogMask;
	BOOL _infoOnlySensorsActive;

}

@property (nonatomic,readonly) CFArrayRef hidSensorKeys; 
@property (nonatomic,readonly) CFArrayRef sensorFourCharCode; 
@property (nonatomic,readonly) CFArrayRef synthSensorKeys; 
+(id)sharedInstance;
-(void)loadProductParameters:(CFArrayRef)arg1 ;
-(void)declareCLTMv1HIDSensors:(CFArrayRef)arg1 ;
-(unsigned)getSensorIndexFrom4CC:(CFStringRef)arg1 ;
-(void)setInfoOnlySensorsActive:(BOOL)arg1 ;
-(iir_filter_t*)getFilterTable;
-(BOOL)shouldRetrieveSensor:(CFStringRef)arg1 ;
-(CFArrayRef)sensorFourCharCode;
-(unsigned long long)getWatchDogMask;
-(CFArrayRef)synthSensorKeys;
-(CFArrayRef)hidSensorKeys;
-(void)dealloc;
-(id)init;
@end
