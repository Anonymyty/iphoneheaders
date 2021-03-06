/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBSceneLayoutReferenceOrientedView.h>

@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView> {

	long long _layoutOrientation;
	long long _referenceOrientation;

}

@property (nonatomic,readonly) NSArray * elementWrapperViews; 
@property (assign,nonatomic) long long referenceOrientation;               //@synthesize referenceOrientation=_referenceOrientation - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                  //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)elementWrapperViewForLayoutRole:(long long)arg1 ;
-(NSArray *)elementWrapperViews;
-(void)crossfadeWithCompletion:(/*^block*/id)arg1 ;
-(long long)referenceOrientation;
-(void)setReferenceOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
@end

