/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class UIBezierPath;

@interface GAXPathInterpolator : NSObject {

	UIBezierPath* _startingPath;
	UIBezierPath* _endingPath;
	void* _interpolationPathElementMappings;

}

@property (nonatomic,copy) UIBezierPath * startingPath;                           //@synthesize startingPath=_startingPath - In the implementation block
@property (nonatomic,copy) UIBezierPath * endingPath;                             //@synthesize endingPath=_endingPath - In the implementation block
@property (assign,nonatomic) void* interpolationPathElementMappings;              //@synthesize interpolationPathElementMappings=_interpolationPathElementMappings - In the implementation block
-(UIBezierPath *)startingPath;
-(id)interpolatedPathForProgress:(float)arg1 ;
-(void)setStartingPath:(UIBezierPath *)arg1 ;
-(void)setInterpolationPathElementMappings:(void*)arg1 ;
-(void*)interpolationPathElementMappings;
-(id)_enhancedByAddingPointsMatchingPath:(id)arg1 originalPath:(id)arg2 ;
-(CGPoint)_pointFromStartingPointAtDistance:(double)arg1 inPath:(id)arg2 ;
-(id)initWithStartingPath:(id)arg1 endingPath:(id)arg2 ;
-(void)setEndingPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)endingPath;
-(void)dealloc;
-(id)init;
@end
