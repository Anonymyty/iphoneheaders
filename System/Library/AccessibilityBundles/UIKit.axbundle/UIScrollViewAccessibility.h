/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIScrollViewAccessibility_super.h>

@interface UIScrollViewAccessibility : __UIScrollViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_staticScrollBar;
-(void)_notifyDidScroll;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(CGRect)accessibilityFrame;
-(id)_accessibilityFirstOpaqueElement;
-(id)_accessibilityLastOpaqueElement;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)_accessibilitySubviews;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityDelegateScrollStatus;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(void)_announceDelayedStatus;
-(void)_accessibilityScrollToTopWithAnnouncement:(BOOL)arg1 touchLocation:(CGPoint)arg2 originalHandler:(/*^block*/id)arg3 ;
-(BOOL)_accessibilityScrollingEnabled;
-(id)_accessibilityFirstLastOpaqueElement:(BOOL)arg1 ;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(BOOL)_axShouldScrollToAlignWithPage;
-(BOOL)_accessibilityShouldAnimateScrollToVisible;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 type:(int)arg3 ;
-(double)_accessibilityScrollHeightDistance;
-(double)_accessibilityScrollWidthDistance;
-(BOOL)_accessibilityScrollStatusPrefersVertical;
-(BOOL)_accessibilityUseContentInset;
-(UIEdgeInsets)_accessibilityContentInset;
-(id)_accessibilityFindRefreshControl;
-(id)_accessibilityRetrieveDelegate;
-(id)_accessibilityScrollStatusFormatString;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(BOOL)arg2 ;
-(void)_manipulateWithRefreshControl:(id)arg1 ;
-(BOOL)_accessibilityCanHandleContentPullDown;
-(void)_handleScrollViewPullDown;
-(BOOL)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(CGPoint*)arg2 distanceMultiplier:(double)arg3 ;
-(BOOL)_accessibilityShouldAnimateScroll;
-(double)_accessibilityScrollAnimationDurationDelay;
-(void)_accessibilitySendScrollStatus;
-(BOOL)_accessibilityScrollPageInDirection:(int)arg1 ;
-(id)_accessibilityStoredVisibleContentInset;
-(UIEdgeInsets)_accessibilityNavigationControllerInset;
-(void)_accessibilitySetStoredVisibleContentInset:(id)arg1 ;
-(BOOL)_accessibilityIsScrollAncestor;
-(CGRect)_accessibilityScrollViewVisibleFrame;
-(CGPoint)_accessibilityContentOffset;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 ;
-(BOOL)accessibilityScrollUpPageSupported;
-(BOOL)accessibilityScrollDownPageSupported;
-(long long)_accessibilityPageCount;
-(long long)_accessibilityPageIndex;
-(void)_accessibilitySetScrollStatus:(id)arg1 ;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1 ;
-(BOOL)accessibilityScrollUpPage;
-(BOOL)accessibilityScrollDownPage;
-(BOOL)accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollRightPage;
-(CGRect)_accessibilityContentFrame;
-(void)_accessibilitySetVisibleContentInset:(UIEdgeInsets)arg1 ;
-(void)_accessibilitySetNavigationControllerInset:(UIEdgeInsets)arg1 ;
-(CGRect)_accessibilityUIViewAccessibilityFrame;
@end
