/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/IOSAbstractInertialSensor.h>

@interface IOSDeviceMotion : IOSAbstractInertialSensor {

	int _mode;

}
-(BOOL)sensorPresent;
-(id)initWithMotionManager:(id)arg1 andHandler:(id)arg2 usingMode:(int)arg3 ;
-(id)description;
-(void)stop;
-(void)start;
@end
