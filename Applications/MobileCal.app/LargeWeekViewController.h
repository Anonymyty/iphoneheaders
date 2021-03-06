/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/WeekViewController.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <MobileCal/EnqueuablePopoverPresentationManagedNavigationControllerDelegate.h>
#import <libobjc.A.dylib/ABPersonViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class EKEventGestureController, EKDayOccurrenceView, NSString;

@interface LargeWeekViewController : WeekViewController <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate, EnqueuablePopoverPresentationManagedNavigationControllerDelegate, ABPersonViewControllerDelegate, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _shouldRePresentPopoverAfterDrag;
	EKEventGestureController* _gestureController;
	EKDayOccurrenceView* _selectedOccurrenceView;
	EKDayOccurrenceView* _selectedOccurrenceFrontmostClonedView;
	BOOL _isTransformingInterfaceSize;
	BOOL _isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
	BOOL _shouldPresentEventCommentsForSelectedOccurrence;
	BOOL _isPresentingPageSheet;

}

@property (assign,nonatomic) BOOL isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 showComments:(BOOL)arg4 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)updatePalette:(id)arg1 ;
-(void)updateNavigationBarDisplayedDateString;
-(BOOL)isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
-(void)setIsWaitingForBackgroundLoadingOfSelectedEventOccurrenceView:(BOOL)arg1 ;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(id)pushedDayViewControllerWithDate:(id)arg1 animated:(BOOL)arg2 ;
-(long long)presentationStyleOverrideForChildViewControllers;
-(id)pushedListViewControllerWithDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_closeEventPresentationAnimated:(BOOL)arg1 ;
-(BOOL)isReadyToShowViewControllersInsideEnqueueableManagedNavigationController:(id)arg1 ;
-(void)enqueuableNavigationController:(id)arg1 requestsDeferShowViewControllerUntilReady:(/*^block*/id)arg2 ;
-(void)enqueueableManagedNavigationController:(id)arg1 requestsConfigurationOfPropertiesForPopoverPresentationController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)headerVerticalOffset;
-(double)scrollToDisplayedDateAnimated:(BOOL)arg1 ;
-(void)overlayCalendarDidChange;
-(void)updateBannerDateStrings;
-(void)customizeWeekGroupView:(id)arg1 ;
-(NSRange)visibleRangeForOffset:(double)arg1 ;
-(void)snapTargetScrollOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)draggingDone;
-(Class)managedNavigationControllerType;
-(void)_resizeInterfaceForWindowSize:(CGSize)arg1 ;
-(void)_setSelectedEvent:(id)arg1 ;
-(void)_showMonthOverlayInCellAtOffset:(double)arg1 animated:(BOOL)arg2 ;
-(void)_weekViewDidEndScrolling:(id)arg1 ;
-(void)_occurrenceViewDidEndSelection:(id)arg1 ;
-(void)_setMinimalModeIfNeededOnEventViewController:(id)arg1 ;
-(void)_displayEventDetailsViewControllerForEvent:(id)arg1 showComment:(BOOL)arg2 ;
-(BOOL)_tooFarToAnimate:(id)arg1 ;
-(void)_presentEventViewController:(id)arg1 forOccurrenceView:(id)arg2 animated:(BOOL)arg3 showComments:(BOOL)arg4 ;
-(void)_cleanupSelectionState;
-(void)_presentDetailViewControllerAsPageSheet:(id)arg1 ;
-(void)_displayOccurrenceViewAsSelectedAndFrontmost:(id)arg1 ;
-(void)_displayEventDetailsViewControllerForSelectedEventWithOccurrenceView:(id)arg1 showComments:(BOOL)arg2 ;
-(id)_occurrenceViewForPopoverSource;
-(void)_rePresentEditPopoverFromTargetView:(id)arg1 ;
-(void)_showSelectedEvent;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(double)minimumHourScale;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(long long)arg5 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1 ;
-(void)eventViewControllerWillBeginEditingEvent:(id)arg1 ;
-(BOOL)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1 ;
-(BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1 ;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(BOOL)arg2 ;
-(BOOL)eventViewControllerShouldHideInlineEditButton;
-(BOOL)eventViewControllerShouldHandleInlineEdit:(id)arg1 ;
-(void)eventViewControllerInlineEditButtonWasTapped:(id)arg1 ;
-(BOOL)eventViewControllerShouldShowInlineEditButtonForInvitations:(id)arg1 ;
-(BOOL)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(int)editorShowTransition;
-(int)editorHideTransition;
@end

