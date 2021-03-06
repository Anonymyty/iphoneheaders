/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSHashTable;

@interface MKAmbientLightMonitor : NSObject {

	NSHashTable* _observers;
	BOOL _monitoring;
	long long _ambientLightLevel;
	BOOL _debugLogLux;
	IOHIDEventSystemClientRef _client;
	deque<double, std::__1::allocator<double> >* _runningStatBuffer;
	double _runningStatSum;
	double _lightLevelNoneThreshold;
	double _lightLevelLowThreshold;
	double _lightLevelMediumThreshold;
	unsigned _runningStatSize;

}

@property (getter=isMonitoring,nonatomic,readonly) BOOL monitoring;              //@synthesize monitoring=_monitoring - In the implementation block
@property (nonatomic,readonly) long long ambientLightLevel;                      //@synthesize ambientLightLevel=_ambientLightLevel - In the implementation block
@property (assign,nonatomic) BOOL debugLogLux;                                   //@synthesize debugLogLux=_debugLogLux - In the implementation block
+(id)sharedAmbientLightMonitor;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_startMonitoring;
-(void)startMonitoringWithObserver:(id)arg1 ;
-(void)setDebugLogLux:(BOOL)arg1 ;
-(void)handleIOHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)isMonitoring;
-(void)_updateThresholds;
-(BOOL)debugLogLux;
-(void)_stopMonitoring;
-(long long)ambientLightLevel;
-(void)stopMonitoringWithObserver:(id)arg1 ;
-(double)_addSampleAndComputeMean:(const double*)arg1 ;
@end

