/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIView, NSLayoutConstraint;

@interface PKPaymentAuthorizationPresentationController : UIPresentationController {

	UIView* _dimmingView;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;
	CGSize _preferredContentSize;
	CFArrayRef _observers;

}

@property (nonatomic,readonly) CGSize maximumContentSize; 
@property (nonatomic,readonly) CGSize contentSize; 
-(void)dealloc;
-(CGSize)contentSize;
-(BOOL)shouldRemovePresentersView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(CGSize)maximumContentSize;
-(void)_notifyObserversAboutWillAdjustToSize:(CGSize)arg1 ;
-(void)_notifyObserversAboutDidAdjustToSize:(CGSize)arg1 ;
-(void)addPresentationObserver:(id)arg1 ;
-(void)removePresentationObserver:(id)arg1 ;
@end

