/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <locationd/locationd-Structs.h>
@class PCPersistentTimer, CLSilo, NSString;

@interface CLPersistentTimerInternal : NSObject {

	PCPersistentTimer* _pcTimer;
	CLPersistentTimer* _clTimer;
	CLSilo* _silo;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _strIdentifier;
	NSString* _serviceIdentifier;
	BOOL _wakeDevice;
	double _timeInterval;
	double _minimumEarlyFireProportion;

}
-(void)setTimerWithInterval:(double)arg1 ;
-(void)bounce_timerFired:(id)arg1 ;
-(id)initWithFireDate:(double)arg1 timeInterval:(double)arg2 serviceIdentifier:(const char*)arg3 wakeDevice:(BOOL)arg4 clTimer:(CLPersistentTimer*)arg5 silo:(id)arg6 minimumEarlyFireProportion:(double)arg7 ;
-(void)setNextFireDate:(double)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)timerFired:(id)arg1 ;
@end

