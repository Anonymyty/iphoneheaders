/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIView.h>

@interface AKSignatureBaselineView : UIView {

	double _baselinePercent;

}

@property (assign,nonatomic) double baselinePercent;              //@synthesize baselinePercent=_baselinePercent - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(double)scaleFactor;
-(BOOL)_isRTL;
-(void)setBaselinePercent:(double)arg1 ;
-(void)_drawBaselineInContext:(CGContextRef)arg1 ;
-(double)baselinePercent;
@end

