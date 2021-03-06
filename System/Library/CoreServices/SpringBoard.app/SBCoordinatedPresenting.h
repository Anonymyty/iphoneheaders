/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol SBCoordinatedPresenting <NSObject>
@property (nonatomic,readonly) long long coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) double hintDisplacement; 
@property (nonatomic,readonly) unsigned long long hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
@optional
-(NSSet *)gestures;
-(NSSet *)tapExcludedViews;
-(void)cancelGestureRecognizer:(id)arg1;
-(void)reenableGestureRecognizer:(id)arg1;
-(void)treatCurrentPositionAsBoundaryforGesture:(id)arg1;
-(BOOL)shouldBeginHintForGesture:(id)arg1;
-(NSSet *)conflictingGestures;
-(id<SBPresentingDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id)arg1;

@required
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 presentationBegunHandler:(/*^block*/id)arg2;
-(BOOL)isPresentingControllerTransitioning;
-(void)abortAnimatedTransition;
-(long long)coordinatedPresentingControllerIdentifier;
-(double)hintDisplacement;
-(unsigned long long)hintEdge;

@end

