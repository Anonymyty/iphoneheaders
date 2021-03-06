/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (nonatomic,copy) id handler; 
@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(void)startObservingStateChangesForBundleID:(id)arg1 ;
-(BOOL)observingStateChangesForBundleID:(id)arg1 ;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

