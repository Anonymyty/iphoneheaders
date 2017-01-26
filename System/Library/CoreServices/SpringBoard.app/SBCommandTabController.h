/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCommandTabViewControllerDelegate.h>

@class SBCommandTabViewController, NSTimer, FBUIApplicationSceneDeactivationAssertion, SBWindow, NSString;

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate> {

	SBCommandTabViewController* _commandTabViewController;
	NSTimer* _timer;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBWindow* _window;

}

@property (nonatomic,readonly) SBWindow * window;                          //@synthesize window=_window - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)keyCommands;
-(void)launchCurrentSelectedApplication;
-(void)activateWithKeyCommand:(id)arg1 ;
-(void)_activateWithForwardDirection:(BOOL)arg1 ;
-(void)_showWindow:(BOOL)arg1 ;
-(void)viewController:(id)arg1 selectedApplicationWithBundleID:(id)arg2 ;
-(void)_showCommandTabBarAfterTimer:(id)arg1 ;
-(void)viewControllerWantsDismissal:(id)arg1 ;
-(void)next;
-(void)previous;
-(void)dealloc;
-(SBWindow *)window;
-(id)init;
-(BOOL)isVisible;
-(void)dismiss;
-(void)_clearTimer;
@end
