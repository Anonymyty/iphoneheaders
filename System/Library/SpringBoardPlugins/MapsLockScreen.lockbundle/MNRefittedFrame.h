/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsLockScreen/MapsLockScreen-Structs.h>
@class NSAttributedString;

@interface MNRefittedFrame : NSObject {

	double _width;
	unsigned long long _maximumNumberOfLines;
	double _minimumLineHeight;
	CTFrameRef _frame;
	BOOL _measured;
	unsigned long long _numberOfLines;
	double _maxLineHeight;
	double _maxLineWidth;
	NSRange _fittedRange;
	NSAttributedString* _string;

}

@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) double width;                                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double widthUsed; 
@property (nonatomic,readonly) NSRange fittedRange; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) unsigned long long numberOfLines; 
@property (nonatomic,readonly) BOOL textFitsEntirely; 
@property (nonatomic,readonly) CTFrameRef CTFrame; 
@property (nonatomic,copy) NSAttributedString * string;                            //@synthesize string=_string - In the implementation block
-(id)getLayersForBounds:(CGRect)arg1 ;
-(NSRange)fittedRange;
-(CTFrameRef)newFrameFromFramesetter:(CTFramesetterRef)arg1 ;
-(BOOL)textFitsEntirely;
-(double)widthUsed;
-(CTFrameRef)CTFrame;
-(void)measureIfNeeded;
-(id)initWithAttributedString:(id)arg1 width:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3 minimumLineHeight:(double)arg4 ;
-(void)dealloc;
-(NSAttributedString *)string;
-(double)width;
-(double)height;
-(NSAttributedString *)attributedString;
-(unsigned long long)numberOfLines;
-(void)setString:(NSAttributedString *)arg1 ;
@end
