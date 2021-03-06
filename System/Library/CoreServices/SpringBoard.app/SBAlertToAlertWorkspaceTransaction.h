/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class SBWorkspaceAlert, SBUIAnimationController, FBDisplayLayoutTransition, NSString;

@interface SBAlertToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBWorkspaceAlert* _activatingAlert;
	SBWorkspaceAlert* _deactivatingAlert;
	BOOL _activation;
	SBUIAnimationController* _animation;
	BOOL _animatingAlertDeactivation;
	FBDisplayLayoutTransition* _layoutTransition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(BOOL)_isFromMainSwitcher;
-(void)_updateSceneLayout;
-(void)_deactivateAlertIfNecessary;
-(void)_alertAnimationComplete:(id)arg1 ;
-(void)_doAlertTransition;
-(void)_cleanUpAnimation;
-(void)_willBegin;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)_didComplete;
-(void)_begin;
@end

