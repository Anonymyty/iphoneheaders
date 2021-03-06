/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <MobileCal/CalendarDebugReportProblemViewControllerDelegate.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>
#import <UIKit/UIWindowDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <MobileCal/WeekViewControllerDelegate.h>
#import <MobileCal/DebugWindowSizeButtonDelegate.h>
#import <MobileCal/FutureTraitEnvironment.h>

@class UITraitCollection, UIBarButtonItem, UIButton, CompactMonthDividedListSwitchButton, ListViewSwitchButton, _UINavigationControllerPalette, NSAttributedString, UILabel, UIFont, NSMutableDictionary, NSUserActivity, DebugWindowSizeControlPanel, CalendarModel, PaletteView, UINavigationController, NSString;

@interface RootNavigationController : UINavigationController <UIPopoverPresentationControllerDelegate, EKEventViewDelegatePrivate, EKEventEditViewDelegate, CalendarDebugReportProblemViewControllerDelegate, NSUserActivityDelegate, UIWindowDelegate, UINavigationControllerDelegate, WeekViewControllerDelegate, DebugWindowSizeButtonDelegate, FutureTraitEnvironment> {

	UIBarButtonItem* _modeToggleBarButtonItem;
	UIBarButtonItem* _addEventBarButtonItem;
	UIBarButtonItem* _searchBarButtonItem;
	UIButton* _currentVisibleModeToggleButton;
	CompactMonthDividedListSwitchButton* _phoneMonthDividedListSwitchButton;
	ListViewSwitchButton* _listViewSwitchButton;
	_UINavigationControllerPalette* _palette;
	NSAttributedString* _currentDateLabelString;
	UILabel* _currentDateLabel;
	UIBarButtonItem* _leftFixedSpaceBarItem;
	UIBarButtonItem* _labelBarItem;
	UIFont* _navBarStringYearFontPortrait;
	UIFont* _navBarStringYearFontLandscape;
	UIFont* _navBarStringYearFontRegularWidthCompactHeight;
	UIFont* _navBarStringYearSmallFontRegularWidthCompactHeight;
	UIFont* _navBarStringMonthFontPortrait;
	UIFont* _navBarStringMonthFontLandscape;
	UIFont* _navBarStringMonthFontRegularWidthCompactHeight;
	NSMutableDictionary* _navBarDateStringCache;
	NSUserActivity* _userActivityForDateInView;
	NSUserActivity* _userActivityForEvent;
	BOOL _traitCollectionChangeShouldResultInCompactDayView;
	BOOL _hideNavBarAfterTraitCollectionTransition;
	BOOL _shouldSetNavBarVisibilityAfterTraitCollectionTransition;
	DebugWindowSizeControlPanel* _debugWindowSizeHUDView;
	CGPoint _debugWindowSizeHUDPosition;
	BOOL _debugWindowSizeAnimatedWindowActive;
	UITraitCollection* _debugOverriddenTraitCollection;
	BOOL _isTransitioningTraitCollection;
	BOOL _showingOverriddenToolbarItems;
	CalendarModel* _model;
	UIBarButtonItem* _todayBarButtonItem;
	UIBarButtonItem* _inboxBarButtonItem;
	UIBarButtonItem* _calendarsBarButtonItem;
	UIBarButtonItem* _leftPaddingItem;
	UIBarButtonItem* _rightPaddingItem;
	PaletteView* _paletteView;
	UINavigationController* _reportProblemNavigationController;
	unsigned long long _numberOfNotifications;

}

@property (nonatomic,retain) CalendarModel * model;                                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * searchBarButtonItem; 
@property (nonatomic,readonly) UIBarButtonItem * addEventBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * todayBarButtonItem;                                    //@synthesize todayBarButtonItem=_todayBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * inboxBarButtonItem;                                    //@synthesize inboxBarButtonItem=_inboxBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * calendarsBarButtonItem;                                //@synthesize calendarsBarButtonItem=_calendarsBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftPaddingItem;                                       //@synthesize leftPaddingItem=_leftPaddingItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightPaddingItem;                                      //@synthesize rightPaddingItem=_rightPaddingItem - In the implementation block
@property (nonatomic,retain) PaletteView * paletteView;                                               //@synthesize paletteView=_paletteView - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioningTraitCollection;                                   //@synthesize isTransitioningTraitCollection=_isTransitioningTraitCollection - In the implementation block
@property (nonatomic,readonly) long long activeWidthSizeClass; 
@property (nonatomic,retain) UINavigationController * reportProblemNavigationController;              //@synthesize reportProblemNavigationController=_reportProblemNavigationController - In the implementation block
@property (assign,nonatomic) BOOL showingOverriddenToolbarItems;                                      //@synthesize showingOverriddenToolbarItems=_showingOverriddenToolbarItems - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * modeToggleBarButtonItem; 
@property (assign,nonatomic) unsigned long long numberOfNotifications;                                //@synthesize numberOfNotifications=_numberOfNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL debugAnimatedWindowActive; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
+(id)_inboxTitleForNotificationCount:(unsigned long long)arg1 ;
+(id)_blacklistedClassesToBuildInToJournal;
+(void)recursiveAnimationRemove:(id)arg1 ;
+(BOOL)_diagnosticsAvailable;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)resetToMonthView;
-(void)showDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(id)bestDateForNewEvent;
-(BOOL)isTransitioningTraitCollection;
-(void)_selectedDateChanged:(id)arg1 ;
-(/*^block*/id)_doneBlock;
-(id)resetToDayView;
-(id)resetToYearView;
-(void)showCalendarsAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(PaletteView *)paletteView;
-(void)setPaletteView:(PaletteView *)arg1 ;
-(id)topMainViewControllerContainer;
-(id)showInboxAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNavBarStringFromDate:(id)arg1 includeMonth:(BOOL)arg2 ;
-(id)pushCalendarViewControllerWithViewType:(int)arg1 andDate:(id)arg2 ;
-(void)weekViewController:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)weekViewController:(id)arg1 didEditEvent:(id)arg2 ;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)_calendarsChanged:(id)arg1 ;
-(void)_selectedOccurrenceChanged:(id)arg1 ;
-(void)_restoreLastUsedCalendarViewType;
-(void)_configureDebugHUDView;
-(long long)activeWidthSizeClass;
-(void)_updateAddEventButtonEnabledness;
-(void)_userActivityChanged;
-(int)currentViewType;
-(void)_saveUserActivityInfo:(id)arg1 ;
-(void)_addButtonsToNavigationBar;
-(void)_configureListViewToggleButton;
-(void)_configureDividedListViewToggleButton;
-(void)_configureNoToggleButton;
-(void)_createLeftFixedSpaceBarItemIfNeeded;
-(UIBarButtonItem *)todayBarButtonItem;
-(void)todayPressed;
-(void)setTodayBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)calendarsBarButtonItem;
-(void)calendarsPressed;
-(void)setCalendarsBarButtonItem:(UIBarButtonItem *)arg1 ;
-(unsigned long long)numberOfNotifications;
-(UIBarButtonItem *)inboxBarButtonItem;
-(void)inboxPressed;
-(void)setInboxBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setLeftPaddingItem:(UIBarButtonItem *)arg1 ;
-(void)setRightPaddingItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)leftPaddingItem;
-(UIBarButtonItem *)rightPaddingItem;
-(void)_centerCalendarsButton;
-(void)setShowingOverriddenToolbarItems:(BOOL)arg1 ;
-(UIBarButtonItem *)addEventBarButtonItem;
-(void)_searchPressed;
-(void)addEventPressed;
-(UIBarButtonItem *)searchBarButtonItem;
-(UIBarButtonItem *)modeToggleBarButtonItem;
-(id)_listViewSwitchButton;
-(void)listTogglePressed;
-(void)_dividedListViewTogglePressed;
-(void)_configureModeToggleButtonWithButton:(id)arg1 ;
-(id)_compactMonthDividedListSwitchButton;
-(void)_cullToggleButtons;
-(id)showSearchAnimated:(BOOL)arg1 becomeFirstResponder:(BOOL)arg2 ;
-(void)showAddEventAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_replaceDayAndListViewContainersAccordingToSavedPreference;
-(void)doCrossfadeAnimationWithNavigationViewContents;
-(void)selectTodayWithTrigger:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)dismissPresentedViewController;
-(id)_popToViewControllerSatisfying:(/*^block*/id)arg1 ;
-(void)_presentAdaptiveModalPopoverViewController:(id)arg1 relativeToBarButtonItem:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 contentSize:(CGSize)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)presentAdaptiveModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentAdaptiveModalViewController:(id)arg1 withPresentationStyleOverride:(long long)arg2 relativeToBarButtonItem:(id)arg3 withSourceView:(id)arg4 sourceRect:(CGRect)arg5 permittedArrowDirections:(unsigned long long)arg6 contentSize:(CGSize)arg7 passThroughViews:(id)arg8 animated:(BOOL)arg9 completion:(/*^block*/id)arg10 ;
-(Class)classForStackBaseContainerForCurrentTraits;
-(id)_ensureStackBaseCalendarViewControllerContainerIsPresent;
-(Class)_classRepresentingViewType:(int)arg1 ;
-(void)_updatePaletteStateWithViewController:(id)arg1 ;
-(void)updateNavigationBarButtonItemsWithViewController:(id)arg1 ;
-(void)addToolbarButtonItemsWithViewController:(id)arg1 ;
-(void)_configureViewSwitcherShowingViewController:(id)arg1 ;
-(void)_updateLeftFixedSpaceBarButtonItemWidthWithViewController:(id)arg1 targetWindowSize:(CGSize)arg2 ;
-(void)_setCurrentDateLabelString:(id)arg1 ;
-(void)_selectTodayForMainViewControllerContainer:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showNowForMainViewControllerContainer:(id)arg1 animated:(BOOL)arg2 ;
-(void)doCrossfadeAnimationWithCurrentScreenContents;
-(void)_updateViewSwitcherSegmentWidthsAfterWindowSizeChange;
-(void)_updateNavbarStringForNewStateAfterWindowSizeChange;
-(void)recursiveBuildJournalOfViewControllerSubtree:(id)arg1 returnedArray:(id)arg2 stopCondition:(/*^block*/id)arg3 ;
-(BOOL)_isViewControllerOrParentsImmuneToCustomAdaption:(id)arg1 ;
-(void)_performCustomRotationAnimationForMainWindowWithTransitionCoordinator:(id)arg1 ;
-(void)recursiveAnimationRemoveForSmallLayers:(id)arg1 ;
-(void)_rebuildTreeOfShownViewControllersFromJournal:(id)arg1 withRootNode:(id)arg2 topMainVC:(id)arg3 ;
-(id)_tornDownJournalOfShownViewControllers;
-(void)_selectEventInModelAssociatedWithControllersInJournal:(id)arg1 ;
-(void)_setNavigationStackOfMainViewControllersForTraitsTransitionFromTraitCollection:(id)arg1 toNewTraitCollection:(id)arg2 withPretransitionViewType:(int)arg3 ;
-(void)_setSegmentWidthsForViewSwitcher:(id)arg1 ;
-(void)_updateDateLabelFrame;
-(id)_higherScopeCompactCalendarViewController;
-(void)_invalidateNavBarDateStringCache;
-(double)_dateLabelMaxWidth;
-(id)_navBarDateStringFromDate:(id)arg1 includingMonth:(BOOL)arg2 format:(long long)arg3 ;
-(id)_navBarStringYearFontForInterfaceOrientation:(long long)arg1 useSmallerSize:(BOOL)arg2 ;
-(id)_navBarStringMonthFontForInterfaceOrientation:(long long)arg1 ;
-(double)_viewSwitcherSegmentWidth;
-(unsigned long long)_viewSwitcherNumSegments;
-(int)_viewTypeRepresentedByViewSwitcherIndex:(unsigned long long)arg1 ;
-(id)_viewSwitcherSegmentedControl;
-(unsigned long long)_viewSwitcherIndexRepresentingViewType:(int)arg1 ;
-(BOOL)_shouldShowListViewInModeSwitcher;
-(id)_viewSwitcherLabelStrings;
-(void)_viewSwitcherSelectedValueChanged:(id)arg1 ;
-(void)setNumberOfNotifications:(unsigned long long)arg1 ;
-(BOOL)showingOverriddenToolbarItems;
-(id)showInboxAnimated:(BOOL)arg1 ;
-(void)_showDebugReportProblemViewController;
-(UINavigationController *)reportProblemNavigationController;
-(void)setReportProblemNavigationController:(UINavigationController *)arg1 ;
-(void)_cancelPressedWhileInReportProblemView;
-(void)_dismissReportProblemController;
-(void)_performNewEventKeyCommand;
-(void)_performSearchKeyCommand;
-(void)_performTodayKeyCommand;
-(void)_performRefreshKeyCommand;
-(void)_performDayKeyCommand;
-(void)_performWeekKeyCommand;
-(void)_performMonthKeyCommand;
-(void)_performYearKeyCommand;
-(void)_performSearchCancelKeyCommand;
-(void)_switchToView:(int)arg1 ;
-(void)_windowSizeDebugHUDPanned:(id)arg1 ;
-(void)animateWindowSizeChanging;
-(BOOL)debugAnimatedWindowActive;
-(void)reportProblemViewControllerDidFinish:(id)arg1 ;
-(void)debugMenuSelectedSizeClassChange:(long long)arg1 ;
-(void)debugMenuSelectedFractionalWindowWidth:(double)arg1 ;
-(void)debugMenuVisibilityToggle;
-(void)showAddEventAnimated:(BOOL)arg1 ;
-(void)presentAdaptiveModalViewController:(id)arg1 ;
-(void)presentAdaptiveModalPopoverViewController:(id)arg1 relativeToSourceRect:(CGRect)arg2 withSourceView:(id)arg3 passThroughViews:(id)arg4 permittedArrowDirections:(unsigned long long)arg5 contentSize:(CGSize)arg6 animated:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)setDebugWindowAnimatedWindowActive:(BOOL)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)applicationDidResume;
-(void)userActivityWillSave:(id)arg1 ;
-(void)loadView;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(CalendarModel *)model;
-(void)viewDidLoad;
-(void)presentModalViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animatorForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithModel:(id)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)eventViewControllerShouldHideInlineEditButton;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)_setUpkeyCommands;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)didBecomeActive;
-(id)_now;
@end

