/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@interface MPSImageThresholdToZero : MPSUnaryImageKernel {

	SCD_Struct_MP14 filterInfo;

}

@property (nonatomic,readonly) float thresholdValue; 
@property (nonatomic,readonly) const float* transform; 
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(long long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const SCD_Struct_MP10*)arg5 ;
-(id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 linearGrayColorTransform:(const float*)arg3 ;
-(id)debugDescription;
-(const float*)transform;
-(float)thresholdValue;
-(id)initWithDevice:(id)arg1 ;
@end
