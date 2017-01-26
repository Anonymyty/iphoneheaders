/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TwoSteps/TwoSteps-Structs.h>
#import <TwoSteps/BKUIBundleEnrollViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class BiometricKitIdentity, NSDate, NSTimer, NSString, UIView, UILabel, UIButton, BKUIAlertView, UIImageView, BKUICurvesView, BKUIRadarButton, NSMutableArray, NSLayoutConstraint;

@interface BKUIFingerprintEnrollViewController : BKUIBundleEnrollViewController <UIAlertViewDelegate> {

	BOOL _restartRequest;
	BOOL _willDisappear;
	BOOL _enrollmentPhaseTwo;
	BOOL _matchInProgress;
	long long _mesaEnrollSecondPhaseSteps;
	long long _ignoreTouchOffset;
	BiometricKitIdentity* _mesaEnrollFingerIdentity;
	NSDate* _enrollmentEndTime;
	NSTimer* _messageTimer;
	int _movedFingerCount;
	BOOL _movedFingerAlertShown;
	BOOL _stillFingerAlertShown;
	BOOL _showLiftYourFingerMsg;
	NSString* _lastPromptMessage;
	BOOL _cancelForRadar;
	BOOL _cancelForRestart;
	BOOL _displayingFirstTitle;
	BOOL _titleEffectFromBottomLeft;
	double _liftFingerMsgDelay;
	long long _msgTransType;
	long long _msgTransSubType1;
	long long _msgTransSubType2;
	double _msgTransLength;
	double _msgShowTimeout;
	BOOL _enrollInProgress;
	BOOL _waitInProgress;
	float _currentProgress;
	UIView* _mesaEnrollView;
	UILabel* _mesaEnrollTutorTitle;
	UILabel* _mesaEnrollTutorIntro;
	UILabel* _mesaEnrollTutorText;
	UIView* _mesaEnrollTitleContainer;
	UILabel* _mesaEnrollTitle1;
	UILabel* _mesaEnrollTitle2;
	UILabel* _mesaEnrollPrompt;
	UIButton* _mesaEnrollButton;
	UIButton* _mesaEnrollTutorButton;
	BKUIAlertView* _alertView;
	UIView* _tutorialView;
	UIImageView* _mesaEnrollTutorImage;
	UIView* _mesaEnrollContainer;
	BKUICurvesView* _mesaFirstEnrollView;
	BKUICurvesView* _mesaSecondEnrollView;
	BKUIRadarButton* _radarButton;
	UIView* _disclaimerView;
	UILabel* _disclaimerText;
	UIView* _mesaEnrollErrorButtonsContainer;
	UIButton* _mesaEnrollErrorButtonRestartEnroll;
	UIButton* _mesaEnrollErrorButtonSkipEnroll;
	UIView* _alertHudView;
	UILabel* _alertHudText;
	float _alertHudWhite;
	float _alertHudAlpha;
	float _alertHudCorners;
	float _alertHudBorder;
	BOOL _smallCoverageMessage;
	long long _smallCoverageCount;
	long long _smallCoverageInRowCount;
	long long _maxSmallCoverageCount;
	NSMutableArray* _mesaEnrollContainerConstraints;
	double _tutorIntroTextGapConstraintConstant;
	NSLayoutConstraint* _tutorIntroHeightConstraint;
	NSLayoutConstraint* _tutorIntroTextGapConstraint;
	NSLayoutConstraint* _tutorButtonHeightConstraint;
	BOOL _inBuddy;
	CGSize _lastLayoutSize;
	NSString* _lastTutorialImageName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_showDirtOnSensorAlertView;
-(void)_finishEnrollmentPhaseTwo;
-(void)_stopTutorial;
-(void)_updatePromptMessage:(id)arg1 ;
-(void)_startTutorial:(BOOL)arg1 ;
-(void)_updateTutorialLayoutPhaseTwo;
-(void)_failEnrollmentWithAlert;
-(void)_showSmallCoverageAlertView;
-(void)_startMessageTimer:(double)arg1 ;
-(id)_getTransSubTypeString:(long long)arg1 ;
-(void)_startEnrollmentMatch;
-(void)_stopBiometricOperations;
-(void)tutorialButtonPressed:(id)arg1 ;
-(void)respondToTapGesture:(id)arg1 ;
-(void)_setFadeAnimation:(id)arg1 ;
-(void)_setTutorialImage;
-(void)initPromptMessage;
-(void)_restartEnrollment;
-(void)_setHiddenWithAnimation:(id)arg1 hidden:(BOOL)arg2 ;
-(void)_enrollHapticFeedback:(id)arg1 ;
-(void)_hapticFeedback:(BOOL)arg1 ;
-(void)_showLiftYourFingerWithDelay;
-(void)_showLiftYourFinger;
-(void)_cancelEnrollmentMatch;
-(id)_getTransTypeString:(long long)arg1 ;
-(void)_showSkipEnrollmentAlert;
-(void)_cancelEnrollmentAndRestart:(BOOL)arg1 ;
-(void)_setTutorHiddenWithAnimation:(BOOL)arg1 ;
-(void)_stopMessageTimer;
-(void)_cancelActiveEnrollOperation;
-(void)continueButtonPressed:(id)arg1 ;
-(void)_safeBioKitDelegateClear;
-(void)_failEnrollmentAlertDismissed;
-(void)_setButtonFontSize:(id)arg1 smallFont:(BOOL)arg2 ;
-(void)_transitionPromptMessage;
-(void)_startInitialTutorial:(BOOL)arg1 ;
-(void)skipEnrollmentPressed:(id)arg1 ;
-(void)_updateTutorialLayoutPhaseOne;
-(void)_failEnrollment:(int)arg1 withMessage:(id)arg2 ;
-(void)restartEnrollPressed:(id)arg1 ;
-(void)_showEnrollmentPhaseTwo;
-(id)bundleAlertView;
-(void)_skipEnrollment;
-(void)_fileRadar;
-(void)_setTapRecognizer:(id)arg1 ;
-(void)_updateEnrollViewsForSize:(CGSize)arg1 ;
-(void)_messageTimeout;
-(BOOL)_radarComposeFrameworkExistOnDevice;
-(void)_startEnroll;
-(void)_radarTapped:(id)arg1 ;
-(void)_resetUI;
-(BOOL)_canFillRadars;
-(double)_subtitleBorder;
-(void)handleProgress:(unsigned)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_titleFont;
-(void)_setConstraints;
-(id)_subtitleFont;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)enrollResult:(id)arg1 ;
-(void)matchResult:(id)arg1 withDetails:(id)arg2 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enrollProgress:(id)arg1 ;
-(void)homeButtonPressed;
-(void)restartEnroll;
@end
