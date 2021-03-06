/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResource.h>
#import <iWorkImport/TSCH3DStringIndexableResource.h>

@class TSCH3DLabelResourceAttributes;

@interface TSCH3DLabelResource : TSCH3DResource <TSCH3DStringIndexableResource> {

	BOOL mSizeAndOffsetCalculated;
	tvec2<float> mTightSize;
	tvec2<float> mSize;
	tvec2<float> mLabelRenderOffset;
	tvec2<float> mBitmapLabelRenderOffset;
	TSCH3DLabelResourceAttributes* mAttributes;

}

@property (nonatomic,readonly) tvec2<float> labelSize; 
@property (nonatomic,readonly) tvec2<float> tightSize; 
@property (nonatomic,readonly) tvec2<int> clampedLabelSampledSize; 
@property (nonatomic,readonly) tvec2<float> labelRenderOffset; 
@property (nonatomic,copy) TSCH3DLabelResourceAttributes * attributes; 
@property (nonatomic,readonly) tvec2<float> bitmapLabelRenderOffset; 
+(id)resourceWithLabelAttributes:(id)arg1 ;
-(tvec2<int>)clampedLabelSampledSize;
-(id)initWithLabelAttributes:(id)arg1 ;
-(tvec2<int>)p_clampedLabelSampledSizeReturningClampedRatio:(float*)arg1 ;
-(tvec2<float>)bitmapLabelRenderOffset;
-(void)p_calculateSizeAndOffset;
-(tvec2<int>)labelSizeWithSamples:(double)arg1 ;
-(tvec2<float>)tightSize;
-(tvec2<float>)labelRenderOffset;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(tvec2<float>)labelSize;
-(TSCH3DLabelResourceAttributes *)attributes;
-(void)setAttributes:(TSCH3DLabelResourceAttributes *)arg1 ;
-(id)get;
@end

