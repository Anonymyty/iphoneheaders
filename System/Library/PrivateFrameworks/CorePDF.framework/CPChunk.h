/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPObject.h>

@interface CPChunk : CPObject {

	CGRect bounds;
	BOOL shrinksWithChildren;
	BOOL dirtyBounds;
	unsigned position;
	long long insertionOrder;

}
+(float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2 ;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(double)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(CGPoint)anchor;
-(void)setAnchor:(CGPoint)arg1 ;
-(float)fontSize;
-(long long)compareTopDescending:(id)arg1 ;
-(id)copyAndSplitChildrenAtIndex:(unsigned)arg1 ;
-(void)resizeWith:(id)arg1 ;
-(void)add:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addChildrenOf:(id)arg1 ;
-(void)fitBoundsToChildren;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg1 ;
-(CGRect)renderedBounds;
-(float)absoluteGapTo:(id)arg1 ;
-(float)advanceDeltaAfterSpace;
-(long long)compareCommonAnchorX:(id)arg1 ;
-(long long)insertionOrder;
-(unsigned)chunkPosition;
-(void)accept:(id)arg1 ;
-(float)opticalLeading;
-(CGRect)adjustToPointBoundary:(CGRect)arg1 ;
-(id)describeBounds;
-(float)clusterGapTo:(id)arg1 ;
-(float)referenceAdvanceWidth;
-(void)setInsertionOrder:(long long)arg1 ;
-(long long)compareAnchorY:(id)arg1 ;
-(long long)compareAnchorX:(id)arg1 ;
-(long long)compareAnchorYDescending:(id)arg1 ;
-(long long)compareX:(id)arg1 ;
-(long long)compareInsertionOrder:(id)arg1 ;
-(long long)compareZ:(id)arg1 ;
-(long long)compareZDescending:(id)arg1 ;
-(long long)compareXBounds:(id)arg1 ;
-(long long)compareLinearBounds:(id)arg1 ;
-(long long)compareY:(id)arg1 ;
-(long long)compareYBounds:(id)arg1 ;
-(long long)compareYDescending:(id)arg1 ;
-(long long)compareYDescendingX:(id)arg1 ;
-(long long)compareChunkPosition:(id)arg1 ;
-(int)clusterLevelHint;
-(void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2 ;
-(BOOL)overlapsHorizontallyWith:(id)arg1 ;
-(BOOL)overlapsVerticallyWith:(id)arg1 ;
-(BOOL)geometricallyContains:(id)arg1 ;
-(BOOL)boundsEqualsRect:(CGRect)arg1 accuracy:(double)arg2 ;
-(BOOL)shrinksWithChildren;
-(void)setShrinksWithChildren:(BOOL)arg1 ;
-(BOOL)intersectsChild:(CGRect)arg1 ;
-(void)translateObjectYBy:(double)arg1 ;
-(void)setChunkPosition:(unsigned)arg1 ;
-(void)removeAll;
-(void)setChildren:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(CGSize)advance;
-(void)add:(id)arg1 ;
-(double)left;
-(double)top;
-(double)right;
-(double)bottom;
-(double)rotationAngle;
@end

