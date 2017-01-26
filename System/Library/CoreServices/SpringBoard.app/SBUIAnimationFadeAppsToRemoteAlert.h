/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBMainAlertManager, SBRemoteAlertAdapter, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, UIView, NSArray;

@interface SBUIAnimationFadeAppsToRemoteAlert : SBUIMainScreenAnimationController {

	SBMainAlertManager* _alertManager;
	SBRemoteAlertAdapter* _alert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBWindowSelfHostWrapper* _appContextHostWrapper;
	UIView* _alertContextHostView;
	NSArray* _accessoryHostViews;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_animationFinished;
-(void)dealloc;
-(double)animationDuration;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end
