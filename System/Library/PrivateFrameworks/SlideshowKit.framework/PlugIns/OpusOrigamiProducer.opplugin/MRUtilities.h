/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@interface MRUtilities : NSObject
+(long long)operatingSystemMinorVersion;
+(id)executeScript:(id)arg1 withHeader:(id)arg2 andAttributes:(id)arg3 ;
+(CGPoint)valueForPointAnimationPath:(id)arg1 withPlugTiming:(id)arg2 atTime:(double)arg3 defaultsTo:(CGPoint)arg4 previousKeyPoint:(CGPoint*)arg5 nextKeyPoint:(CGPoint*)arg6 animationIsOver:(BOOL*)arg7 ;
+(double)transformTime:(double)arg1 forAnimationPath:(id)arg2 withPlugTiming:(id)arg3 ;
+(double)valueForScalarAnimationPath:(id)arg1 withPlugTiming:(id)arg2 atTime:(double)arg3 defaultsTo:(double)arg4 previousKeyValue:(double*)arg5 nextKeyValue:(double*)arg6 animationIsOver:(BOOL*)arg7 ;
+(long long)operatingSystemMajorVersion;
+(long long)operationQueueConcurrentOperationCount;
+(void)initialize;
+(CGColorSpaceRef)newColorSpaceForDevice;
@end
