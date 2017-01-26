/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationCalloutController.h>
#import <libobjc.A.dylib/_MKPopoverEmbeddingViewWindowDelegate.h>
#import <libobjc.A.dylib/_UIPopoverControllerMapsTransitionDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>
#import <libobjc.A.dylib/MKSmallCalloutViewControllerDelegate.h>

@class UIPopoverController, MKSmallCalloutViewController, UIView, _MKPopoverEmbeddingView, NSString;

@interface MKPopoverBasedAnnotationCalloutController : MKAnnotationCalloutController <_MKPopoverEmbeddingViewWindowDelegate, _UIPopoverControllerMapsTransitionDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate, MKSmallCalloutViewControllerDelegate> {

	UIPopoverController* _popoverController;
	MKSmallCalloutViewController* _calloutViewController;
	/*^block*/id _afterMoveToWindowBlock;
	UIView* _layoutConstraintsView;
	_MKPopoverEmbeddingView* _embeddingView;
	BOOL _isHidingForImplementationReasons;
	BOOL _allowsPopoverWhenNotInWindow;
	BOOL _animatingIn;
	BOOL _isShowingPopover;
	BOOL _isCalloutExpanded;

}

@property (nonatomic,readonly) UIPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
@property (assign,nonatomic) BOOL allowsPopoverWhenNotInWindow;                      //@synthesize allowsPopoverWhenNotInWindow=_allowsPopoverWhenNotInWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)popoverTargetRectForAnnotationView:(id)arg1 inView:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_setTitle:(id)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(UIPopoverController *)popoverController;
-(void)_popoverControllerWillBeginMapsTransitionMovingSideways:(id)arg1 ;
-(void)_popoverControllerDidFinishMapsTransitionExpanding:(id)arg1 ;
-(BOOL)_isShowingCallout;
-(void)_setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showCalloutAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(id)_subtitle;
-(BOOL)isCalloutExpanded;
-(void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)embeddingView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)embeddingView:(id)arg1 didMoveToWindow:(id)arg2 ;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)smallCalloutViewControllerDidAppear:(id)arg1 ;
-(void)hideCalloutAnimated:(BOOL)arg1 ;
-(void)setAllowsPopoverWhenNotInWindow:(BOOL)arg1 ;
-(void)_updatePopoverContentSize:(BOOL)arg1 ;
-(void)_snapLayoutConstraintsViewToContainerBounds;
-(void)_updateCalloutAnimated:(BOOL)arg1 ;
-(BOOL)allowsPopoverWhenNotInWindow;
-(void)setMapDisplayStyle:(SCD_Struct_MK15)arg1 ;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end
