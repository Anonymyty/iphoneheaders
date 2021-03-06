/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@class NSArray;

@interface AKManhattanLinesAnnotation : AKRectangularShapeAnnotation {

	NSArray* _pathPoints;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (assign) CGPoint startPoint;                //@synthesize startPoint=_startPoint - In the implementation block
@property (assign) CGPoint endPoint;                  //@synthesize endPoint=_endPoint - In the implementation block
@property (retain) NSArray * pathPoints;              //@synthesize pathPoints=_pathPoints - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(id)displayName;
-(CGPoint)endPoint;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(NSArray *)pathPoints;
-(void)setPathPoints:(NSArray *)arg1 ;
@end

