/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class CLLocation, AOSMonitoredFence, NSURL, NSDate;

@interface AOSFMRequestFenceTrigger : AOSFMRequest {

	CLLocation* _triggeredLocation;
	AOSMonitoredFence* _fence;
	NSURL* _triggerURL;
	NSDate* _triggerTimestamp;
	long long _triggerType;
	double _validityDuration;

}

@property (nonatomic,retain) CLLocation * triggeredLocation;              //@synthesize triggeredLocation=_triggeredLocation - In the implementation block
@property (nonatomic,retain) AOSMonitoredFence * fence;                   //@synthesize fence=_fence - In the implementation block
@property (nonatomic,retain) NSURL * triggerURL;                          //@synthesize triggerURL=_triggerURL - In the implementation block
@property (nonatomic,retain) NSDate * triggerTimestamp;                   //@synthesize triggerTimestamp=_triggerTimestamp - In the implementation block
@property (assign,nonatomic) long long triggerType;                       //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) double validityDuration;                     //@synthesize validityDuration=_validityDuration - In the implementation block
-(NSURL *)triggerURL;
-(id)initWithProvider:(id)arg1 triggeredLocation:(id)arg2 fence:(id)arg3 validityDuration:(double)arg4 triggerURL:(id)arg5 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(void)setTriggerURL:(NSURL *)arg1 ;
-(id)requestUrl;
-(long long)maxNonNetworkRelatedRetries;
-(long long)maxConsecutiveNetworkNotificationRetries;
-(BOOL)canRequestBeRetriedNow;
-(long long)maxTimerBasedNetworkRetries;
-(void)setTriggeredLocation:(CLLocation *)arg1 ;
-(void)setFence:(AOSMonitoredFence *)arg1 ;
-(CLLocation *)triggeredLocation;
-(AOSMonitoredFence *)fence;
-(double)validityDuration;
-(void)setValidityDuration:(double)arg1 ;
-(id)requestBody;
-(NSDate *)triggerTimestamp;
-(void)setTriggerType:(long long)arg1 ;
-(long long)triggerType;
-(void)setTriggerTimestamp:(NSDate *)arg1 ;
@end

