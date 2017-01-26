/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoLeash/NanoLeash-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, GraphViewSegment, GraphTextView;

@interface GraphView : UIView {

	NSMutableArray* _segments;
	GraphViewSegment* _current;
	GraphTextView* _text;

}

@property (nonatomic,retain) NSMutableArray * segments;               //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) GraphViewSegment * current;              //@synthesize current=_current - In the implementation block
@property (nonatomic,retain) GraphTextView * text;                    //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GraphTextView *)text;
-(void)setText:(GraphTextView *)arg1 ;
-(void)commonInit;
-(id)accessibilityValue;
-(GraphViewSegment *)current;
-(void)setCurrent:(GraphViewSegment *)arg1 ;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)addAvgRSSI:(double)arg1 actualRSSI:(double)arg2 ;
-(id)addSegment;
-(void)recycleSegment;
@end
