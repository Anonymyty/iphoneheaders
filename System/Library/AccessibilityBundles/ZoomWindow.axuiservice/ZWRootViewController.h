/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIViewController.h>
#import <ZoomWindow/ZWTouchTrapViewDelegate.h>
#import <ZoomWindow/ZWMenuViewControllerDelegate.h>
#import <ZoomWindow/ZWZoomSlugViewControllerDelegate.h>
#import <ZoomWindow/ZOTFullscreenZoomHandlerDelegate.h>
#import <ZoomWindow/ZWEventProcessorDelegate.h>
#import <ZoomWindow/ZWZoomPIPLensViewControllerDelegate.h>
#import <ZoomWindow/ZWLensAutopannerDelegate.h>
#import <ZoomWindow/ZWSmartZoomDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <ZoomWindow/AXUIViewControllerReachabilityHandler.h>

@protocol OS_dispatch_queue, AXUIService;
@class CADisplayLink, NSMutableSet, NSObject, AXDispatchTimer, UIView, ZWTouchTrapView, ZWUIMinimapView, ZWAlertManager, ZWSmartZoomManager, ZWKeyboardContext, AXAssertion, ZWZoomLensViewController, ZWLensAutopanner, ZWZoomPIPLensViewController, NSLayoutConstraint, ZWZoomFullscreenLensViewController, ZWZoomSlugViewController, ZWMenuViewController, AXAccessQueueTimer, ZWEventProcessor, NSString;

@interface ZWRootViewController : UIViewController <ZWTouchTrapViewDelegate, ZWMenuViewControllerDelegate, ZWZoomSlugViewControllerDelegate, ZOTFullscreenZoomHandlerDelegate, ZWEventProcessorDelegate, ZWZoomPIPLensViewControllerDelegate, ZWLensAutopannerDelegate, ZWSmartZoomDelegate, UIPopoverPresentationControllerDelegate, AXUIViewControllerReachabilityHandler> {

	CGPoint _lensDeltaSinceInitialMove;
	double _lastMenuDismissalTime;
	double _lastTypingFocusChangeTime;
	double _lastDeviceUnlockTime;
	double _lastKeyboardDismissal;
	double _lastEdgePanHapticTime;
	BOOL _cachedIsVoiceOverRunning;
	id _voiceOverStatusChangedNotificationObserverToken;
	SCD_Struct_ZW7 _eventUIContext;
	BOOL _validatePanOffsetWithFullscreen;
	BOOL _usingRelativePushPanning;
	CGPoint _fullScreenZoomStartPosition;
	CGPoint _fullScreenZoomStartOffset;
	double _fullScreenZoomVelocity;
	CGPoint _distanceAvailable;
	BOOL _careBorderX;
	BOOL _careBorderY;
	double _lastUpdateVelocityTime;
	CADisplayLink* _movementTimer;
	NSMutableSet* _zoomListeners;
	NSObject*<OS_dispatch_queue> _zoomListenersUpdateQueue;
	AXDispatchTimer* _zoomListenerUpdateTimer;
	AXDispatchTimer* _zoomServicesUpdate;
	double _zoomFactorBeforeUserAdjustingGesture;
	BOOL _brailleInputUIIsShowing;
	BOOL _zoomWasUnzoomedDueToAppTransition;
	BOOL _isSweepingToNextZoomRow;
	BOOL _snarfingWheelEventsForPan;
	BOOL _snarfingWheelEventsForZoom;
	BOOL _activeLensTransitioning;
	id<AXUIService> _axuiService;
	UIView* _containerView;
	ZWTouchTrapView* _touchTrapView;
	ZWUIMinimapView* _minimapView;
	ZWAlertManager* _zoomAlertManager;
	double _reachabilityOffset;
	ZWSmartZoomManager* _smartZoom;
	double _lastWheelDelta;
	double _accruedOvershoot;
	double _lastEventTime;
	ZWKeyboardContext* _kbContext;
	AXAssertion* _disableNotificationCenterAssertionPIPLensOnTop;
	AXAssertion* _disableControlCenterAssertionPIPLensOnBottom;
	AXAssertion* _disableNotificationCenterAssertionFullscreenLensNotOnTop;
	AXAssertion* _disableControlCenterAssertionFullscreenLensNotOnBottom;
	ZWZoomLensViewController* _activeLensViewController;
	ZWLensAutopanner* _lensAutopanner;
	ZWZoomPIPLensViewController* _pipLensViewController;
	NSLayoutConstraint* _lensDragXConstraint;
	NSLayoutConstraint* _lensDragYConstraint;
	NSLayoutConstraint* _lensWidthConstraint;
	NSLayoutConstraint* _lensHeightConstraint;
	unsigned long long _pipLensEdgeMask;
	ZWZoomFullscreenLensViewController* _fullscreenLensViewController;
	ZWZoomSlugViewController* _slugViewController;
	NSLayoutConstraint* _slugRingDragXConstraint;
	NSLayoutConstraint* _slugRingDragYConstraint;
	unsigned long long _slugEdgeMask;
	ZWMenuViewController* _menuViewController;
	AXAccessQueueTimer* _idleTouchTimer;
	ZWEventProcessor* _eventManager;
	NSObject*<OS_dispatch_queue> _cachedValuesSerialQueue;
	UIView* _debugFocusView;
	NSMutableSet* _deactivatedAppIDs;

}

@property (assign,nonatomic,__weak) id<AXUIService> axuiService;                                                  //@synthesize axuiService=_axuiService - In the implementation block
@property (getter=isZoomLensVisible,nonatomic,readonly) BOOL zoomLensVisible; 
@property (getter=isZoomSlugVisible,nonatomic,readonly) BOOL zoomSlugVisible; 
@property (assign,nonatomic) BOOL brailleInputUIIsShowing;                                                        //@synthesize brailleInputUIIsShowing=_brailleInputUIIsShowing - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) ZWTouchTrapView * touchTrapView;                                                     //@synthesize touchTrapView=_touchTrapView - In the implementation block
@property (nonatomic,retain) ZWUIMinimapView * minimapView;                                                       //@synthesize minimapView=_minimapView - In the implementation block
@property (nonatomic,retain) ZWAlertManager * zoomAlertManager;                                                   //@synthesize zoomAlertManager=_zoomAlertManager - In the implementation block
@property (assign,nonatomic) BOOL zoomWasUnzoomedDueToAppTransition;                                              //@synthesize zoomWasUnzoomedDueToAppTransition=_zoomWasUnzoomedDueToAppTransition - In the implementation block
@property (assign,nonatomic) double reachabilityOffset;                                                           //@synthesize reachabilityOffset=_reachabilityOffset - In the implementation block
@property (nonatomic,retain) ZWSmartZoomManager * smartZoom;                                                      //@synthesize smartZoom=_smartZoom - In the implementation block
@property (assign,nonatomic) double lastWheelDelta;                                                               //@synthesize lastWheelDelta=_lastWheelDelta - In the implementation block
@property (assign,nonatomic) double accruedOvershoot;                                                             //@synthesize accruedOvershoot=_accruedOvershoot - In the implementation block
@property (assign,nonatomic) BOOL isSweepingToNextZoomRow;                                                        //@synthesize isSweepingToNextZoomRow=_isSweepingToNextZoomRow - In the implementation block
@property (assign,nonatomic) double lastEventTime;                                                                //@synthesize lastEventTime=_lastEventTime - In the implementation block
@property (assign,nonatomic) BOOL snarfingWheelEventsForPan;                                                      //@synthesize snarfingWheelEventsForPan=_snarfingWheelEventsForPan - In the implementation block
@property (assign,nonatomic) BOOL snarfingWheelEventsForZoom;                                                     //@synthesize snarfingWheelEventsForZoom=_snarfingWheelEventsForZoom - In the implementation block
@property (nonatomic,retain) ZWKeyboardContext * kbContext;                                                       //@synthesize kbContext=_kbContext - In the implementation block
@property (nonatomic,retain) AXAssertion * disableNotificationCenterAssertionPIPLensOnTop;                        //@synthesize disableNotificationCenterAssertionPIPLensOnTop=_disableNotificationCenterAssertionPIPLensOnTop - In the implementation block
@property (nonatomic,retain) AXAssertion * disableControlCenterAssertionPIPLensOnBottom;                          //@synthesize disableControlCenterAssertionPIPLensOnBottom=_disableControlCenterAssertionPIPLensOnBottom - In the implementation block
@property (nonatomic,retain) AXAssertion * disableNotificationCenterAssertionFullscreenLensNotOnTop;              //@synthesize disableNotificationCenterAssertionFullscreenLensNotOnTop=_disableNotificationCenterAssertionFullscreenLensNotOnTop - In the implementation block
@property (nonatomic,retain) AXAssertion * disableControlCenterAssertionFullscreenLensNotOnBottom;                //@synthesize disableControlCenterAssertionFullscreenLensNotOnBottom=_disableControlCenterAssertionFullscreenLensNotOnBottom - In the implementation block
@property (nonatomic,retain) ZWZoomLensViewController * activeLensViewController;                                 //@synthesize activeLensViewController=_activeLensViewController - In the implementation block
@property (assign,getter=isActiveLensTransitioning,nonatomic) BOOL activeLensTransitioning;                       //@synthesize activeLensTransitioning=_activeLensTransitioning - In the implementation block
@property (nonatomic,retain) ZWLensAutopanner * lensAutopanner;                                                   //@synthesize lensAutopanner=_lensAutopanner - In the implementation block
@property (nonatomic,retain) ZWZoomPIPLensViewController * pipLensViewController;                                 //@synthesize pipLensViewController=_pipLensViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensDragXConstraint;                                            //@synthesize lensDragXConstraint=_lensDragXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensDragYConstraint;                                            //@synthesize lensDragYConstraint=_lensDragYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensWidthConstraint;                                            //@synthesize lensWidthConstraint=_lensWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensHeightConstraint;                                           //@synthesize lensHeightConstraint=_lensHeightConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long pipLensEdgeMask;                                                  //@synthesize pipLensEdgeMask=_pipLensEdgeMask - In the implementation block
@property (nonatomic,retain) ZWZoomFullscreenLensViewController * fullscreenLensViewController;                   //@synthesize fullscreenLensViewController=_fullscreenLensViewController - In the implementation block
@property (nonatomic,retain) ZWZoomSlugViewController * slugViewController;                                       //@synthesize slugViewController=_slugViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * slugRingDragXConstraint;                                        //@synthesize slugRingDragXConstraint=_slugRingDragXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * slugRingDragYConstraint;                                        //@synthesize slugRingDragYConstraint=_slugRingDragYConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long slugEdgeMask;                                                     //@synthesize slugEdgeMask=_slugEdgeMask - In the implementation block
@property (nonatomic,retain) ZWMenuViewController * menuViewController;                                           //@synthesize menuViewController=_menuViewController - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * idleTouchTimer;                                                 //@synthesize idleTouchTimer=_idleTouchTimer - In the implementation block
@property (nonatomic,retain) ZWEventProcessor * eventManager;                                                     //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedValuesSerialQueue;                                //@synthesize cachedValuesSerialQueue=_cachedValuesSerialQueue - In the implementation block
@property (nonatomic,retain) UIView * debugFocusView;                                                             //@synthesize debugFocusView=_debugFocusView - In the implementation block
@property (nonatomic,retain) NSMutableSet * deactivatedAppIDs;                                                    //@synthesize deactivatedAppIDs=_deactivatedAppIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIdleTouchTimer:(AXAccessQueueTimer *)arg1 ;
-(ZWSmartZoomManager *)smartZoom;
-(void)showZoomSlugAndLens:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSmartZoom:(ZWSmartZoomManager *)arg1 ;
-(ZWLensAutopanner *)lensAutopanner;
-(unsigned long long)slugEdgeMask;
-(void)setKbContext:(ZWKeyboardContext *)arg1 ;
-(void)setZoomAlertManager:(ZWAlertManager *)arg1 ;
-(unsigned long long)pipLensEdgeMask;
-(ZWTouchTrapView *)touchTrapView;
-(void)setEventManager:(ZWEventProcessor *)arg1 ;
-(void)updateFocusWithSmartZoom:(id)arg1 ;
-(void)touchTrapViewActivated:(id)arg1 ;
-(ZWUIMinimapView *)minimapView;
-(void)willBeginAdjustingZoomLevelWithATVEventProcessor:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 didThreeFingerOrbAtLocation:(CGPoint)arg2 ;
-(double)_calculateDurationForVelocity:(double)arg1 ;
-(void)setIsSweepingToNextZoomRow:(BOOL)arg1 ;
-(BOOL)snarfingWheelEventsForZoom;
-(void)setCachedValuesSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSlugViewController:(ZWZoomSlugViewController *)arg1 ;
-(void)_initializeZoomSettingsIfNeeded;
-(void)_initializeEventUIContext;
-(void)_loadZoomTouchExtras;
-(void)menuDidDisappear:(id)arg1 ;
-(void)autopanner:(id)arg1 didAutopanByDelta:(CGPoint)arg2 ;
-(void)handleDeviceWasUnlocked;
-(void)setBrailleInputUIIsShowing:(BOOL)arg1 ;
-(void)handleLockButtonWasPressed;
-(BOOL)isZoomLensVisible;
-(void)handleHomeButtonWasPressed;
-(UIView *)debugFocusView;
-(ZWKeyboardContext *)kbContext;
-(BOOL)inStandByForMenuViewController:(id)arg1 ;
-(void)hideZoomSlugAndLens:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(ZWEventProcessor *)eventManager;
-(void)handleSubstantialAppTransition;
-(AXAccessQueueTimer *)idleTouchTimer;
-(void)menuDidAppear:(id)arg1 ;
-(BOOL)shouldHideGrabbersWithZoomLensViewController:(id)arg1 ;
-(void)zoomLensViewController:(id)arg1 grabberDidReceiveTap:(id)arg2 ;
-(BOOL)eventProcessor:(id)arg1 didGetWheelEventWithDelta:(long long)arg2 ;
-(void)eventProcessor:(id)arg1 didGetFirstTouchAtLocation:(CGPoint)arg2 ;
-(void)lastFingerWasLiftedWithEventProcessor:(id)arg1 ;
-(BOOL)isBrailleInputUIShowingWithEventProcessor:(id)arg1 ;
-(SCD_Struct_ZW8)currentUIContextForEventProcessor:(id)arg1 ;
-(void)disableZoomWindowHitTestingWithEventProcessor:(id)arg1 ;
-(long long)currentInterfaceOrientationForEventProcessor:(id)arg1 ;
-(double)zoomLevelWithFullscreenEventHandler:(id)arg1 ;
-(BOOL)isZoomMovingWithVelocityWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 didStartOrbAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didEndOrbAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 updateOrbMovementAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerDownAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerUpAtLocation:(CGPoint)arg2 ;
-(void)stopZoomMovementWithVelocityWithFullscreenEventHandler:(id)arg1 ;
-(void)endZoomMovementWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 updateZoomMovementWithPoint:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 continueZoomMovementWithVelocity:(double)arg2 angle:(double)arg3 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerSingleTapAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerDoubleTapAtLocation:(CGPoint)arg2 ;
-(void)blockNotificationCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1 ;
-(void)blockControlCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerTripleTapAtLocation:(CGPoint)arg2 ;
-(void)updateStoredZoomedLevelWithFullscreenEventHandler:(id)arg1 ;
-(double)storedZoomLevelWithFullscreenEventHandler:(id)arg1 ;
-(CGPoint)zoomLocationWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 storeZoomLevel:(double)arg2 location:(CGPoint)arg3 zoomed:(BOOL)arg4 forKey:(id)arg5 ;
-(void)fullscreenEventHandler:(id)arg1 setUsingRelativePushPanning:(BOOL)arg2 ;
-(BOOL)fullscreenEventHandler:(id)arg1 autopanShouldStartWithEvent:(id)arg2 speedFactor:(double*)arg3 initialSingleFingerLocation:(CGPoint)arg4 ;
-(int)interfaceOrientationWithFullscreenEventHandler:(id)arg1 ;
-(BOOL)fullscreenEventHandler:(id)arg1 autopanWithLocation:(CGPoint)arg2 initialSingleFingerLocation:(CGPoint)arg3 distance:(double)arg4 animationDuration:(double)arg5 ;
-(BOOL)usingRelativePushPanningWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 setZoomLevel:(double)arg2 duration:(double)arg3 ;
-(BOOL)inFullscreenModeForMenuViewController:(id)arg1 ;
-(double)zoomFactorForMenuViewController:(id)arg1 ;
-(void)toggleLensVisibilityWithMenuViewController:(id)arg1 ;
-(void)menuViewController:(id)arg1 applyNextLensModeWithCompletion:(/*^block*/id)arg2 ;
-(void)toggleLensResizeModeWithMenuViewController:(id)arg1 ;
-(BOOL)toggleSlugVisibilityWithMenuViewController:(id)arg1 ;
-(BOOL)togglePeekZoomWithMenuViewController:(id)arg1 ;
-(void)menuViewController:(id)arg1 didChooseLensEffect:(id)arg2 ;
-(void)menuViewController:(id)arg1 adjustZoomFactor:(double)arg2 ;
-(void)menuViewController:(id)arg1 finishedAdjustingZoomFactor:(double)arg2 ;
-(void)handleKeyboardWillAppearWithFrame:(CGRect)arg1 inAppWithBundleID:(id)arg2 ;
-(void)handleKeyboardWillHideInAppWithBundleID:(id)arg1 ;
-(void)zoomListenerRegistered:(BOOL)arg1 clientIdentifier:(id)arg2 ;
-(void)handleFocusChangedWithType:(long long)arg1 rect:(CGRect)arg2 keyboardFrame:(CGRect)arg3 contextId:(unsigned)arg4 ;
-(void)handleSettingsAppDidUpdatePreferredLensMode:(id)arg1 ;
-(void)handleSettingsAppDidUpdateIdleSlugOpacity:(double)arg1 ;
-(void)handleAppActivationAnimationWillBegin;
-(void)handleAppDeactivationAnimationWillBegin;
-(void)handleAppSwitcherRevealAnimationWillBegin;
-(void)handleAppActivationAnimationDidFinish;
-(void)handleDeviceReturnedToClockAtIdle;
-(void)handleAppDidBecomeActiveWithID:(id)arg1 initialKeyboardFrame:(CGRect)arg2 ;
-(void)handleAppDidEnterBackgroundWithID:(id)arg1 ;
-(double)handleAppActivationAnimationDelay;
-(double)handleAppDeactivationAnimationDelay;
-(double)handleAppSwitcherRevealAnimationDelay;
-(void)zoomLensViewControllerDidChangeStandbyMode:(id)arg1 ;
-(void)zoomLensViewController:(id)arg1 willBeginMovingLens:(id)arg2 ;
-(void)zoomLensViewController:(id)arg1 didMoveLens:(id)arg2 withDelta:(CGPoint)arg3 ;
-(void)zoomLensViewController:(id)arg1 didFinishMovingLens:(id)arg2 ;
-(BOOL)isZoomInStandByModeWithSmartZoom:(id)arg1 ;
-(BOOL)touchTrapView:(id)arg1 shouldReportSelfInHitTestAtLocation:(CGPoint)arg2 ;
-(void)touchTrapView:(id)arg1 didTrapTouches:(id)arg2 withEvent:(id)arg3 ;
-(void)willBeginAutopanningLensWithAutopanner:(id)arg1 ;
-(void)didFinishAutopanningLensWithAutopanner:(id)arg1 ;
-(void)_updateStealingSingleFingerPanning:(BOOL)arg1 ;
-(void)setLensAutopanner:(ZWLensAutopanner *)arg1 ;
-(void)setPipLensViewController:(ZWZoomPIPLensViewController *)arg1 ;
-(void)setFullscreenLensViewController:(ZWZoomFullscreenLensViewController *)arg1 ;
-(void)setMenuViewController:(ZWMenuViewController *)arg1 ;
-(ZWMenuViewController *)menuViewController;
-(ZWZoomPIPLensViewController *)pipLensViewController;
-(ZWZoomFullscreenLensViewController *)fullscreenLensViewController;
-(ZWZoomSlugViewController *)slugViewController;
-(void)_updateSlugLayoutAnimated:(BOOL)arg1 ;
-(double)setZoomFactorRespectingUserPreferredMaximumZoom:(double)arg1 ;
-(ZWZoomLensViewController *)activeLensViewController;
-(void)_enableSmartZoomIfNeeded;
-(void)_updateMinimapStatus;
-(void)_removeAllSystemGestureDisablingAssertions;
-(void)setDeactivatedAppIDs:(NSMutableSet *)arg1 ;
-(void)setDisableNotificationCenterAssertionPIPLensOnTop:(AXAssertion *)arg1 ;
-(void)setDisableControlCenterAssertionPIPLensOnBottom:(AXAssertion *)arg1 ;
-(void)setDisableNotificationCenterAssertionFullscreenLensNotOnTop:(AXAssertion *)arg1 ;
-(void)setDisableControlCenterAssertionFullscreenLensNotOnBottom:(AXAssertion *)arg1 ;
-(void)_removePIPSystemGestureDisablingAssertions;
-(void)_removeFullscreenSystemGestureDisablingAssertions;
-(BOOL)_pipLensIsNearTopOfScreen;
-(AXAssertion *)disableNotificationCenterAssertionPIPLensOnTop;
-(BOOL)_pipLensIsNearBottomOfScreen;
-(AXAssertion *)disableControlCenterAssertionPIPLensOnBottom;
-(CGSize)_lensDefaultSize;
-(void)setTouchTrapView:(ZWTouchTrapView *)arg1 ;
-(void)sendCurrentZoomAttributes;
-(void)_transitionToLensForMode:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateZoomListeners;
-(ZWAlertManager *)zoomAlertManager;
-(void)_updateLensLayout;
-(void)_updateLensEdgeMaskForZoomController:(id)arg1 ;
-(void)_focusLensOnRect:(CGRect)arg1 panLensContent:(BOOL)arg2 recentreLens:(BOOL)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_transitionToLens:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableSet *)deactivatedAppIDs;
-(void)_updateKeyboardFrame:(CGRect)arg1 ;
-(void)_setPIPLensResizingEnabled:(BOOL)arg1 ;
-(void)_dismissMenuAnimated:(BOOL)arg1 ;
-(void)_unzoomDueToAppTransitionIfNeeded;
-(void)_rezoomDueToAppTransitionIfNeeded;
-(void)setZoomWasUnzoomedDueToAppTransition:(BOOL)arg1 ;
-(void)setDebugFocusView:(UIView *)arg1 ;
-(void)_moveZoomItemWithController:(id)arg1 byDelta:(CGPoint)arg2 animated:(BOOL)arg3 userInitiated:(BOOL)arg4 ;
-(NSObject*<OS_dispatch_queue>)cachedValuesSerialQueue;
-(BOOL)isActiveLensTransitioning;
-(void)setActiveLensTransitioning:(BOOL)arg1 ;
-(void)setActiveLensViewController:(ZWZoomLensViewController *)arg1 ;
-(void)_beginObservingValuesForLens:(id)arg1 ;
-(void)_applyInitialConstraintsForLensViewController:(id)arg1 ;
-(void)_updateSystemGestureDisablingAssertionsForPipLensPosition;
-(AXAssertion *)disableNotificationCenterAssertionFullscreenLensNotOnTop;
-(AXAssertion *)disableControlCenterAssertionFullscreenLensNotOnBottom;
-(void)_updateSystemGestureDisablingAssertionsForFullscreenZoom;
-(void)_endObservingValuesForLens:(id)arg1 ;
-(void)setLensDragXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLensDragYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)lensWidthConstraint;
-(void)setLensWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLensHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)lensHeightConstraint;
-(BOOL)_isZoomedToMinimum;
-(CGRect)_determineSuitableLensFrame;
-(NSLayoutConstraint *)lensDragXConstraint;
-(NSLayoutConstraint *)lensDragYConstraint;
-(CGSize)_lensMinimumSize;
-(CGSize)_lensMaximumSize;
-(NSLayoutConstraint *)slugRingDragXConstraint;
-(void)setSlugRingDragXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSlugRingDragYConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)_slugOriginForNormalizedPosition:(CGPoint)arg1 ;
-(NSLayoutConstraint *)slugRingDragYConstraint;
-(BOOL)_isZoomFactorAtMinimum:(double)arg1 ;
-(CGPoint)_slugNormalizedPositionForCurrentPosition;
-(void)setPipLensEdgeMask:(unsigned long long)arg1 ;
-(void)setSlugEdgeMask:(unsigned long long)arg1 ;
-(BOOL)zoomWasUnzoomedDueToAppTransition;
-(void)_menuDidDisappear;
-(void)_presentMenuWithAnchorView:(id)arg1 animated:(BOOL)arg2 ignoreCooldown:(BOOL)arg3 ;
-(void)_toggleZoomStandby;
-(void)_updateZoomFactor:(double)arg1 ;
-(void)_resizeZoomLensByDelta:(CGPoint)arg1 ;
-(void)_exitStandbyIfNecessary;
-(BOOL)isZoomSlugVisible;
-(void)_transitionToNextLensModeAnimated:(BOOL)arg1 saveAsNewPreferredLensMode:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_disableZoomWindowHitTesting;
-(void)_handleZoomWheelEventWithDelta:(long long)arg1 ;
-(void)_handlePanWheelEventWithDelta:(long long)arg1 ;
-(BOOL)brailleInputUIIsShowing;
-(CGPoint)mirrorPanOffsetForRTLIfNecessary:(CGPoint)arg1 ;
-(void)_enableZoomWindowHitTesting;
-(void)_toggleStealingSingleFingerPanning;
-(BOOL)_smartZoomFocusedElementIsBeingSampled;
-(void)_updateOrbLocation:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_interfaceAwareAdjustedAngleForScreenAngle:(double)arg1 ;
-(void)_zoomMovementHeartbeat;
-(BOOL)_shouldBlockShowNotificationGesture;
-(BOOL)_shouldBlockShowControlCenterGesture;
-(void)_zoomMovementHeartbeat:(double)arg1 fullscreenEventHandler:(id)arg2 ;
-(void)slugWasSingleTappedWithSlugViewController:(id)arg1 ;
-(void)slugWasDoubleTappedWithSlugViewController:(id)arg1 ;
-(BOOL)shouldBeginAutopanningLensWithSlugViewController:(id)arg1 ;
-(void)wantsToStartAutopannerWithSlugViewController:(id)arg1 ;
-(void)zoomSlugViewController:(id)arg1 wantsToAdjustZoomLevelWithDelta:(CGPoint)arg2 ;
-(void)zoomSlugViewController:(id)arg1 didDragSlug:(id)arg2 withDelta:(CGPoint)arg3 ;
-(void)wantsToStopAutopannerWithSlugViewController:(id)arg1 ;
-(BOOL)snarfingWheelEventsForPan;
-(void)setAxuiService:(id<AXUIService>)arg1 ;
-(id)initWithAXUIService:(id)arg1 ;
-(id<AXUIService>)axuiService;
-(void)setSnarfingWheelEventsForPan:(BOOL)arg1 ;
-(double)accruedOvershoot;
-(void)setLastEventTime:(double)arg1 ;
-(void)setAccruedOvershoot:(double)arg1 ;
-(void)setSnarfingWheelEventsForZoom:(BOOL)arg1 ;
-(BOOL)shouldSendTapEventWithATVEventProcessor:(id)arg1 ;
-(void)atvEventProcessor:(id)arg1 adjustZoomLevelWithDelta:(CGPoint)arg2 ;
-(void)didGetSpeakContentGestureWithATVEventProcessor:(id)arg1 ;
-(void)wantsToStartAutopannerWithATVEventProcessor:(id)arg1 ;
-(void)didGetToggleZoomGestureWithATVEventProcessor:(id)arg1 ;
-(double)lastEventTime;
-(void)wantsToStopAutopannerWithATVEventProcessor:(id)arg1 ;
-(void)setLastWheelDelta:(double)arg1 ;
-(double)lastWheelDelta;
-(BOOL)shouldShowSlugWithSlugViewController:(id)arg1 ;
-(BOOL)isSweepingToNextZoomRow;
-(void)didGetTogglePanningModeGestureWithATVEventProcessor:(id)arg1 ;
-(void)setMinimapView:(ZWUIMinimapView *)arg1 ;
-(void)dismissMenuWithMenuViewController:(id)arg1 ;
-(void)dealloc;
-(UIView *)containerView;
-(id)title;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(double)reachabilityOffset;
-(CGPoint)zoomPanOffset;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)sendUserEventOccurred;
-(double)zoomLevel;
-(void)setReachabilityOffset:(double)arg1 ;
-(BOOL)hostingWindowShouldMoveForReachability;
-(void)handleReachabilityToggled:(double)arg1 ;
-(void)didAnimateForReachabilityToOffset:(double)arg1 ;
-(CGRect)zoomFrame;
-(double)reachabilityScaleFactor;
@end

