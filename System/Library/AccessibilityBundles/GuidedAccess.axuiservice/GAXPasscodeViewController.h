/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <Preferences/DevicePINController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol GAXPasscodeViewControllerDelegate;
@class NSString, UIViewController, UIPopoverController, UINavigationController, UIStatusBar, UIView;

@interface GAXPasscodeViewController : DevicePINController <UINavigationControllerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {

	BOOL _passcodeViewVisible;
	BOOL _pincodeDismissalAllowed;
	BOOL _asynchronouslyCheckedPinWasValid;
	int _pinLength;
	int _presentationStyle;
	id<GAXPasscodeViewControllerDelegate> _delegate;
	NSString* _passcode;
	UIViewController* _presentorViewController;
	UIPopoverController* _hostingPopoverController;
	UINavigationController* _hostingNavigationController;
	UIStatusBar* _statusBar;
	UIView* _statusBarContainerView;

}

@property (assign,nonatomic) id<GAXPasscodeViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPasscodeViewVisible,nonatomic) BOOL passcodeViewVisible;              //@synthesize passcodeViewVisible=_passcodeViewVisible - In the implementation block
@property (nonatomic,retain) UIPopoverController * hostingPopoverController;                     //@synthesize hostingPopoverController=_hostingPopoverController - In the implementation block
@property (nonatomic,copy) NSString * passcode;                                                  //@synthesize passcode=_passcode - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIViewController * presentorViewController;                         //@synthesize presentorViewController=_presentorViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * hostingNavigationController;               //@synthesize hostingNavigationController=_hostingNavigationController - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                            //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) UIView * statusBarContainerView;                                    //@synthesize statusBarContainerView=_statusBarContainerView - In the implementation block
@property (assign,nonatomic) BOOL pincodeDismissalAllowed;                                       //@synthesize pincodeDismissalAllowed=_pincodeDismissalAllowed - In the implementation block
@property (assign,nonatomic) BOOL asynchronouslyCheckedPinWasValid;                              //@synthesize asynchronouslyCheckedPinWasValid=_asynchronouslyCheckedPinWasValid - In the implementation block
@property (assign,nonatomic) int pinLength;                                                      //@synthesize pinLength=_pinLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)switchFromKeypadToKeyboard;
-(void)_slidePasscodeField;
-(UIViewController *)presentorViewController;
-(UIView *)statusBarContainerView;
-(void)_didFinishDismissingPasscodeViewWithReason:(int)arg1 ;
-(void)_notifyDelegateOfPasscodeViewDismissalWithReason:(int)arg1 ;
-(void)setAsynchronouslyCheckedPinWasValid:(BOOL)arg1 ;
-(BOOL)asynchronouslyCheckedPinWasValid;
-(BOOL)pincodeDismissalAllowed;
-(BOOL)isPasscodeViewVisible;
-(id)initWithPresentationStyle:(int)arg1 forSetup:(BOOL)arg2 pinLength:(unsigned long long)arg3 ;
-(UIPopoverController *)hostingPopoverController;
-(void)presentPasscodeViewWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPasscodeViewAnimated:(BOOL)arg1 reason:(int)arg2 ;
-(void)_dismissPasscodeViewAnimated:(BOOL)arg1 withReason:(int)arg2 ;
-(void)setHostingNavigationController:(UINavigationController *)arg1 ;
-(void)setHostingPopoverController:(UIPopoverController *)arg1 ;
-(void)setPresentorViewController:(UIViewController *)arg1 ;
-(void)setStatusBarContainerView:(UIView *)arg1 ;
-(UINavigationController *)hostingNavigationController;
-(void)_presentPasscodeViewWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPincodeDismissalAllowed:(BOOL)arg1 ;
-(void)setPasscodeViewVisible:(BOOL)arg1 ;
-(void)_notifyDelegateOfPasscodeViewVisibilityChange;
-(BOOL)_shouldShowCancelButton;
-(void)_updateStatusBar:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GAXPasscodeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXPasscodeViewControllerDelegate>)delegate;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(int)presentationStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(BOOL)requiresKeyboard;
-(BOOL)useProgressiveDelays;
-(BOOL)validatePIN:(id)arg1 ;
-(BOOL)isNumericPIN;
-(id)stringsBundle;
-(void)_updateErrorTextAndFailureCount:(BOOL)arg1 ;
-(void)cancelButtonTapped;
-(BOOL)simplePIN;
-(int)pinLength;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)didAcceptSetPIN;
-(void)setPIN:(id)arg1 ;
-(void)didAcceptEnteredPIN;
-(void)setPinLength:(int)arg1 ;
-(void)pinEntered:(id)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setPane:(id)arg1 ;
@end

