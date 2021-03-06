/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <UIKit/UIAccelerometerDelegate.h>

@class CMMotionManager, NSOperationQueue, NSString;

@interface IOSAbstractInertialSensor : NSObject <UIAccelerometerDelegate> {

	unique_ptr<IOSInertialSensorBridge, std::__1::default_delete<IOSInertialSensorBridge> >* _sensorBridge;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionEventProcessor;
	double _updateInterval;

}

@property (nonatomic,readonly) IOSInertialSensorBridge* sensorBridge; 
@property (nonatomic,retain,readonly) CMMotionManager * motionManager;                      //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain,readonly) NSOperationQueue * motionEventProcessor;              //@synthesize motionEventProcessor=_motionEventProcessor - In the implementation block
@property (nonatomic,readonly) double updateInterval;                                       //@synthesize updateInterval=_updateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)sensorPresent;
-(id)initWithMotionManager:(id)arg1 andHandler:(id)arg2 andType:(int)arg3 andRate:(double)arg4 ;
-(NSOperationQueue *)motionEventProcessor;
-(IOSInertialSensorBridge*)sensorBridge;
-(Sensor*)getSensor;
-(id)init;
-(void)stop;
-(void)start;
-(double)updateInterval;
-(CMMotionManager *)motionManager;
@end

