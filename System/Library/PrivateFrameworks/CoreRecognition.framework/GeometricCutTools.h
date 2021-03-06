/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreRecognition/CoreRecognition-Structs.h>
@interface GeometricCutTools : NSObject
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andLineThroughPoint:(CGPoint)arg3 andPoint:(CGPoint)arg4 intersectAt:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andSegmentStartingAt:(CGPoint)arg3 andEndingAt:(CGPoint)arg4 intersectAt:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andRectangle:(CGRect)arg3 intersectAtPoint:(CGPoint*)arg4 andPoint:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andImageWithSize:(CGSize)arg3 intersectAtPoint:(CGPoint*)arg4 andPoint:(CGPoint*)arg5 ;
+(id)widestVersionOfRect:(id)arg1 insideImageWithSize:(CGSize)arg2 ;
+(BOOL)isPointArrayARectangle:(id)arg1 ;
+(id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(CGSize)arg2 plusPadding:(CGPoint)arg3 destSize:(CGSize*)arg4 ;
+(id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2 ;
+(id)cleanTextDetectorOutput:(id)arg1 ;
+(id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(CGSize)arg2 ;
+(BOOL)derotateContentsOf:(id)arg1 inImage:(vImage_Buffer*)arg2 andOutputTo:(vImage_Buffer*)arg3 withPadding:(CGPoint)arg4 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(CHNeuralNetwork*)arg6 invert:(BOOL)arg7 ;
@end

