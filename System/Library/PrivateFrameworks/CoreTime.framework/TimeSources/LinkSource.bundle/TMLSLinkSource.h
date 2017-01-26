/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/TimeSources/LinkSource.bundle/LinkSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkSource/LinkSource-Structs.h>
#import <LinkSource/TMLSLinkDelegate.h>

@protocol TMMonotonicClock;
@class NSDictionary, TMLSLink, NSString;

@interface TMLSLinkSource : NSObject <TMLSLinkDelegate> {

	NSDictionary* _lastCompanionTimeUpdate;
	BOOL _coalescingUpdates;
	BOOL _gizmo;
	id<TMMonotonicClock> _clock;
	id _daemonCore;
	TMLSLink* _link;
	NSString* _companionTimeZone;
	SCD_Struct_TM0 _lastRTCSample;

}

@property (nonatomic,retain) id<TMMonotonicClock> clock;                                       //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic,__weak) id daemonCore;                                             //@synthesize daemonCore=_daemonCore - In the implementation block
@property (nonatomic,retain) TMLSLink * link;                                                  //@synthesize link=_link - In the implementation block
@property (assign,nonatomic) SCD_Struct_TM0 lastRTCSample;                                     //@synthesize lastRTCSample=_lastRTCSample - In the implementation block
@property (nonatomic,copy) NSString * companionTimeZone;                                       //@synthesize companionTimeZone=_companionTimeZone - In the implementation block
@property (assign,getter=isLastRTCSampleValid,nonatomic) BOOL lastRTCSampleValid; 
@property (assign,getter=isGizmo,nonatomic) BOOL gizmo;                                        //@synthesize gizmo=_gizmo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)rtcWhenBeyondUncertainty:(double)arg1 ;
-(id)timeAtRtc:(double)arg1 ;
-(id)dictionary;
-(void)systemTimeZoneChanged;
-(void)linkDidReceiveReset:(id)arg1 ;
-(id)initWithClock:(id)arg1 ;
-(void)setLastRTCSample:(SCD_Struct_TM0)arg1 ;
-(void)setDaemonCore:(id)arg1 ;
-(BOOL)isLastRTCSampleValid;
-(void)setLastRTCSampleValid:(BOOL)arg1 ;
-(void)link:(id)arg1 didReceiveTime:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 source:(id)arg5 ;
-(void)syncTimeZone;
-(void)link:(id)arg1 didReceiveAutomaticTimeEnabled:(BOOL)arg2 ;
-(void)link:(id)arg1 didSyncLocalRTC:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 ;
-(id)initWithClock:(id)arg1 daemonCore:(id)arg2 ;
-(NSString *)companionTimeZone;
-(void)syncAutomaticTimeEnabled;
-(void)publishCommand:(id)arg1 ;
-(id)daemonCore;
-(void)setCompanionTimeZone:(NSString *)arg1 ;
-(void)link:(id)arg1 didReceiveTimeZone:(id)arg2 forSource:(id)arg3 ;
-(void)link:(id)arg1 didReceiveDrift:(double)arg2 ;
-(SCD_Struct_TM0)lastRTCSample;
-(void)dealloc;
-(id)init;
-(void)significantTimeChange;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TMLSLink *)link;
-(void)setLink:(TMLSLink *)arg1 ;
-(id<TMMonotonicClock>)clock;
-(void)setClock:(id<TMMonotonicClock>)arg1 ;
-(void)setGizmo:(BOOL)arg1 ;
-(BOOL)isGizmo;
-(void)systemTimeChanged:(id)arg1 ;
@end
