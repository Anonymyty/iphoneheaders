/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPURemoteApplicationActivityDelegate;
@class MPURemoteApplicationActivity, NSLock;

@interface MPURemoteApplicationActivityController : NSObject {

	MPURemoteApplicationActivity* _currentActivity;
	NSLock* _currentActivityFetchLock;
	BOOL _isObservingActivityStatusChanges;
	id<MPURemoteApplicationActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPURemoteApplicationActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MPURemoteApplicationActivity * currentActivity; 
-(void)setDelegate:(id<MPURemoteApplicationActivityDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MPURemoteApplicationActivityDelegate>)delegate;
-(void)_reloadCurrentActivity;
-(void)endObservingActivityStatusChanges;
-(void)_activityHasBegunNotification:(id)arg1 ;
-(void)_activityHasEndedNotification:(id)arg1 ;
-(void)_activityStatusDidChangeNotification:(id)arg1 ;
-(MPURemoteApplicationActivity *)currentActivity;
-(void)beginObservingActivityStatusChanges;
@end
