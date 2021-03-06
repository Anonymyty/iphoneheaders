/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@interface PAMicrostackshotData : NSObject {

	unsigned _cpuNumber;
	unsigned long long _timeInUsUnix;
	unsigned char _microSnapshotFlags;
	unsigned short _systemStatsFlags;

}

@property (readonly) unsigned cpuNumber;                                  //@synthesize cpuNumber=_cpuNumber - In the implementation block
@property (readonly) unsigned long long timestampInUsUnix;                //@synthesize timeInUsUnix=_timeInUsUnix - In the implementation block
@property (readonly) unsigned char microSnapshotFlags;                    //@synthesize microSnapshotFlags=_microSnapshotFlags - In the implementation block
@property (readonly) BOOL didInterruptUserMode; 
@property (readonly) BOOL isInterruptRecord; 
@property (readonly) BOOL isTimerArmingRecord; 
@property (readonly) unsigned short systemStatsFlags;                     //@synthesize systemStatsFlags=_systemStatsFlags - In the implementation block
@property (readonly) BOOL isUserIdle; 
@property (readonly) BOOL isOnBattery; 
@property (readonly) BOOL hasValidOnBatteryAndUserIdleFlags; 
@property (readonly) BOOL didInterruptKernelMode; 
-(unsigned)powerstatsFlags;
-(unsigned long long)bytesUsedInBuffer;
-(BOOL)isUserIdle;
-(BOOL)isOnBattery;
-(BOOL)didInterruptKernelMode;
-(BOOL)hasValidOnBatteryAndUserIdleFlags;
-(BOOL)didInterruptUserMode;
-(BOOL)isInterruptRecord;
-(BOOL)isTimerArmingRecord;
-(id)initWithMicrosnapshot:(const micro_snapshot*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned)cpuNumber;
-(unsigned long long)timestampInUsUnix;
-(unsigned char)microSnapshotFlags;
-(unsigned short)systemStatsFlags;
@end

