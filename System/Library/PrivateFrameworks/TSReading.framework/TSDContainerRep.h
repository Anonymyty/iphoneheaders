/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDContainerRep <TSDLayerProviderRep>
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@optional
-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1;
-(void)willBeginEditingContainedRep;
-(void)willEndEditingContainedRep;
-(id)childRepsForHitTesting;
-(BOOL)containerManagesChildView;
-(void)addAdditionalChildBackgroundLayersToArray:(id)arg1;
-(void)addChildViewsToArray:(id)arg1;
-(void)addAlternateLayersForChildViewsToArray:(id)arg1;
-(void)willAddChildView:(id)arg1 toView:(id)arg2;
-(void)didAddChildView:(id)arg1;
-(void)willRemoveChildView:(id)arg1;
-(BOOL)canHandleGesture:(id)arg1 forChildRep:(id)arg2;
-(BOOL)allowSublayerUpdatesWhenPaused;
-(int)positionForChildView:(id)arg1;
-(int)positionForChildViewAlternateLayer:(id)arg1;
-(id)viewControllerForView:(id)arg1;

@required
-(id)childReps;
-(BOOL)canSelectChildRep:(id)arg1;
-(void)selectChildRep:(id)arg1;
-(NSObject*<TSDContainerInfo>)containerInfo;

@end
