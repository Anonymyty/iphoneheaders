/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXInteractivityManagerProtocol;
#import <Silex/Silex-Structs.h>
@class UIScrollView, UIDynamicAnimator, NSMutableSet;

@interface SXComponentBehaviorController : NSObject {

	UIScrollView* _scrollView;
	id<SXInteractivityManagerProtocol> _interactivityManager;
	UIDynamicAnimator* _animator;
	NSMutableSet* _behaviorHandlers;
	CGSize _contentSize;

}

@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,__weak,readonly) id<SXInteractivityManagerProtocol> interactivityManager;              //@synthesize interactivityManager=_interactivityManager - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                            //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) UIDynamicAnimator * animator;                                                //@synthesize animator=_animator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * behaviorHandlers;                                             //@synthesize behaviorHandlers=_behaviorHandlers - In the implementation block
-(id)initWithHostingScrollView:(id)arg1 andInteractivityManager:(id)arg2 ;
-(void)scrollViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateComponentView:(id)arg1 ;
-(id<SXInteractivityManagerProtocol>)interactivityManager;
-(void)unregisterComponentView:(id)arg1 ;
-(void)registerComponentView:(id)arg1 behavior:(id)arg2 ;
-(id)existingHandlerForComponentView:(id)arg1 behavior:(id)arg2 ;
-(NSMutableSet *)behaviorHandlers;
-(CGSize)contentSize;
-(void)reset;
-(UIScrollView *)scrollView;
-(void)setContentSize:(CGSize)arg1 ;
-(void)update;
-(UIDynamicAnimator *)animator;
@end

