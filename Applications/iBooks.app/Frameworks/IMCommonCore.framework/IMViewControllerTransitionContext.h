/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <UIKit/UIViewControllerContextTransitioning.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class NSArray, UIView, NSMapTable, NSString;

@interface IMViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioning> {

	double _previousPercentComplete;
	NSArray* _disabledViews;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
	}  _transitionContextFlags;
	BOOL _isCurrentlyInteractive;
	BOOL _initiallyInteractive;
	BOOL _isAnimated;
	long long __completionCurve;
	double _duration;
	double __completionVelocity;
	long long _presentationStyle;
	long long __state;
	NSArray* __containerViews;
	double __percentOffset;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id<UIViewControllerInteractiveTransitioning> _interactor;
	UIView* _containerView;
	/*^block*/id __interactiveUpdateHandler;
	/*^block*/id __postInteractiveCompletionHandler;
	/*^block*/id __willCompleteHandler;
	/*^block*/id __completionHandler;
	id __auxContext;
	NSMapTable* _trackedAnimations;

}

@property (assign,setter=_setCompletionCurve:,nonatomic) long long _completionCurve;                                       //@synthesize _completionCurve=__completionCurve - In the implementation block
@property (assign,setter=_setDuration:,nonatomic) double duration;                                                         //@synthesize duration=_duration - In the implementation block
@property (assign,setter=_setCompletionVelocity:,nonatomic) double _completionVelocity;                                    //@synthesize _completionVelocity=__completionVelocity - In the implementation block
@property (assign,setter=_setPresentationStyle:,nonatomic) long long presentationStyle;                                    //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,setter=_setState:,nonatomic) long long _state;                                                           //@synthesize _state=__state - In the implementation block
@property (assign,setter=_setIsCurrentlyInteractive:,nonatomic) BOOL isCurrentlyInteractive;                               //@synthesize isCurrentlyInteractive=_isCurrentlyInteractive - In the implementation block
@property (assign,setter=_setInitiallyInteractive:,nonatomic) BOOL initiallyInteractive;                                   //@synthesize initiallyInteractive=_initiallyInteractive - In the implementation block
@property (assign,setter=_setIsAnimated:,nonatomic) BOOL isAnimated;                                                       //@synthesize isAnimated=_isAnimated - In the implementation block
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews;                                         //@synthesize _containerViews=__containerViews - In the implementation block
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset;                                              //@synthesize _percentOffset=__percentOffset - In the implementation block
@property (assign,setter=_setAnimator:,nonatomic) id<UIViewControllerAnimatedTransitioning> animator;                      //@synthesize animator=_animator - In the implementation block
@property (assign,setter=_setInteractor:,nonatomic) id<UIViewControllerInteractiveTransitioning> interactor;               //@synthesize interactor=_interactor - In the implementation block
@property (assign,setter=_setContainerView:,nonatomic) UIView * containerView;                                             //@synthesize containerView=_containerView - In the implementation block
@property (setter=_setInteractiveUpdateHandler:,nonatomic,copy) id _interactiveUpdateHandler;                              //@synthesize _interactiveUpdateHandler=__interactiveUpdateHandler - In the implementation block
@property (setter=_setPostInteractiveCompletionHandler:,nonatomic,copy) id _postInteractiveCompletionHandler;              //@synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler - In the implementation block
@property (setter=_setWillCompleteHandler:,nonatomic,copy) id _willCompleteHandler;                                        //@synthesize _willCompleteHandler=__willCompleteHandler - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                                            //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (setter=_setAuxContext:,nonatomic,retain) id _auxContext;                                                        //@synthesize _auxContext=__auxContext - In the implementation block
@property (nonatomic,retain) NSMapTable * trackedAnimations;                                                               //@synthesize trackedAnimations=_trackedAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_associatedTransitionContextForObject:(id)arg1 ;
-(NSMapTable *)trackedAnimations;
-(void)trackAnimation:(id)arg1 withLayer:(id)arg2 ;
-(void)setTrackedAnimations:(NSMapTable *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(long long)_completionCurve;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(double)duration;
-(id)_completionHandler;
-(long long)presentationStyle;
-(id)_transitionCoordinator;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setIsAnimated:(BOOL)arg1 ;
-(void)_setContainerView:(id)arg1 ;
-(void)_setCompletionCurve:(long long)arg1 ;
-(void)_setAnimator:(id)arg1 ;
-(void)_setDuration:(double)arg1 ;
-(void)_enableInteractionForDisabledViews;
-(long long)_state;
-(void)_setInteractor:(id)arg1 ;
-(void)_setPresentationStyle:(long long)arg1 ;
-(id)_postInteractiveCompletionHandler;
-(void)_setPostInteractiveCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsInFlight:(BOOL)arg1 ;
-(void)_setInteractiveUpdateHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsCompleting:(BOOL)arg1 ;
-(id)_auxContext;
-(void)__runAlongsideAnimations;
-(void)_disableInteractionForViews:(id)arg1 ;
-(double)_completionVelocity;
-(id)_willCompleteHandler;
-(void)_setWillCompleteHandler:(/*^block*/id)arg1 ;
-(BOOL)isAnimated;
-(BOOL)initiallyInteractive;
-(void)_setState:(long long)arg1 ;
-(double)_previousPercentComplete;
-(NSArray *)_containerViews;
-(CGAffineTransform)targetTransform;
-(BOOL)_transitionIsInFlight;
-(id<UIViewControllerAnimatedTransitioning>)animator;
-(void)_setInitiallyInteractive:(BOOL)arg1 ;
-(void)_setIsCurrentlyInteractive:(BOOL)arg1 ;
-(BOOL)isCurrentlyInteractive;
-(id)_interactiveUpdateHandler;
-(double)_percentOffset;
-(void)_interactivityDidChange:(BOOL)arg1 ;
-(void)_runAlongsideCompletions;
-(void)_setContainerViews:(id)arg1 ;
-(void)_setPercentOffset:(double)arg1 ;
-(void)_setPreviousPercentComplete:(double)arg1 ;
-(void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1 ;
-(BOOL)_transitionIsCompleting;
-(void)_setCompletionVelocity:(double)arg1 ;
-(void)_setAuxContext:(id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)interactor;
@end
