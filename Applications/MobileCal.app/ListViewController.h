/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/MainViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/ABPersonViewControllerDelegate.h>
#import <MobileCal/ListTableViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <MobileCal/MainViewControllerOptionalMethods.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol UIViewControllerPreviewing, ListViewControllerDelegate;
@class NSDate, NSIndexPath, EKUIRecurrenceAlertController, NSUserActivity, EKCalendarDate, CalendarModel, UINavigationItem, ListTableView, UITableView, NSString, UITraitCollection;

@interface ListViewController : MainViewController <UITableViewDataSource, ABPersonViewControllerDelegate, ListTableViewDelegate, EKEventViewDelegatePrivate, EKEventViewDelegate, UIViewControllerPreviewingDelegate, MainViewControllerOptionalMethods, UISearchBarDelegate, UITableViewDelegate> {

	NSDate* _currentYearStart;
	NSDate* _currentYearEnd;
	int _canUseTwoPartHeaderString;
	NSIndexPath* _swipedRow;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	NSUserActivity* _userActivity;
	BOOL _needsRefresh;
	BOOL _isVisible;
	EKCalendarDate* _dateToShowWhenVisible;
	BOOL _editorDismissedFromDelete;
	BOOL _needsTableReload;
	id<UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
	BOOL _allowExtendedHeightCells;
	BOOL _showFilteredData;
	BOOL _occurrenceCacheIsUnavailable;
	CalendarModel* _model;
	id<ListViewControllerDelegate> _delegate;
	UINavigationItem* _navItem;
	ListTableView* _tableView;

}

@property (nonatomic,retain) CalendarModel * model;                                                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL allowExtendedHeightCells;                                                //@synthesize allowExtendedHeightCells=_allowExtendedHeightCells - In the implementation block
@property (nonatomic,retain) id<ListViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showFilteredData;                                                        //@synthesize showFilteredData=_showFilteredData - In the implementation block
@property (nonatomic,readonly) BOOL occurrenceCacheIsUnavailable;                                          //@synthesize occurrenceCacheIsUnavailable=_occurrenceCacheIsUnavailable - In the implementation block
@property (nonatomic,readonly) UITableView * tableViewForTesting; 
@property (nonatomic,retain) UINavigationItem * navItem;                                                   //@synthesize navItem=_navItem - In the implementation block
@property (nonatomic,retain) ListTableView * tableView;                                                    //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
@property (nonatomic,readonly) BOOL isTransitioningTraitCollection; 
@property (assign,nonatomic) BOOL isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (nonatomic,readonly) BOOL shouldAdaptEventViewControllers; 
-(id)noContentStringForListTableView:(id)arg1 ;
-(BOOL)occurrenceCacheIsUnavailable;
-(void)_removeAllObservers;
-(void)setupViewConstraints;
-(void)_addAllObservers;
-(void)scrollToSelectedDateAnimated:(BOOL)arg1 ;
-(BOOL)showFilteredData;
-(BOOL)_selectedDateIsVisible;
-(void)_setTopVisibleDateAsSelectedDate;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 showComments:(BOOL)arg4 ;
-(id)backButtonTitleForEventDetails;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setTopVisibleDateAsSelectedDateAndUpdateBackButton;
-(void)refreshIfNeeded;
-(BOOL)shouldAutoScrollToSelectedDateAfterFirstRefresh;
-(void)scrollToDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)_dateForFirstVisibleRow;
-(id)_indexPathForDate:(id)arg1 ;
-(BOOL)shouldUpdateModelSelectedDate;
-(void)_updateBackButtonOnBackViewControllerToDate:(id)arg1 ;
-(id)_eventForRowAtIndexPath:(id)arg1 ;
-(id)_indexPathForEvent:(id)arg1 ;
-(void)_timeChangedSignificantly:(id)arg1 ;
-(void)_receivedSelectedDateChangeNotification:(id)arg1 ;
-(void)_contentCategorySizeChangedNotification:(id)arg1 ;
-(BOOL)_isDateInCurrentYear:(id)arg1 ;
-(id)_stringForHeaderDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_processScrollingMessagesOnEveryFrameFromListViewController;
-(void)_clearSwipedRow;
-(void)_deleteEventAtIndexPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldPushNextLevelViewControllerWhenTodayIsVisible;
-(id)bestDateForNewEvent;
-(BOOL)showEventDetailsWhenNewEventAdded;
-(BOOL)isTodayVisible;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(void)_selectTodayDate;
-(UITableView *)tableViewForTesting;
-(id)defaultEventForSelectedDate;
-(void)selectEvent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowExtendedHeightCells;
-(void)setAllowExtendedHeightCells:(BOOL)arg1 ;
-(void)setShowFilteredData:(BOOL)arg1 ;
-(UINavigationItem *)navItem;
-(void)setNavItem:(UINavigationItem *)arg1 ;
-(void)setDelegate:(id<ListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<ListViewControllerDelegate>)delegate;
-(double)contentInset;
-(void)loadView;
-(ListTableView *)tableView;
-(id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(ListTableView *)arg1 ;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(CalendarModel *)model;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(BOOL)arg3 ;
-(void)eventViewControllerWillDisappear:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)refresh;
-(BOOL)_isVisible;
-(void)setNeedsRefresh:(BOOL)arg1 ;
@end

