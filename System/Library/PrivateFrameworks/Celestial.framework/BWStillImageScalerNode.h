/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	SCD_Struct_BW12 _nativeOutputDimensions;
	BOOL _defersCropToJPEGEncoderWhenPossible;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(void)_purgeResources;
-(BOOL)_updatePoolWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaledDenormalizedInputCropRectOut:(CGRect*)arg3 ;
-(int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_buildScalingSession;
-(void)setNativeOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(SCD_Struct_BW12)nativeOutputDimensions;
-(void)setDefersCropToJPEGEncoderWhenPossible:(BOOL)arg1 ;
-(BOOL)defersCropToJPEGEncoderWhenPossible;
@end

