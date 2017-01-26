/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry {

	unsigned _isPresentationInstance : 1;
	unsigned _usesCustomScaleFactor : 1;
	float _reflectivity;
	float _reflectionFalloffStart;
	float _reflectionFalloffEnd;
	float _reflectionResolutionScaleFactor;
	unsigned long long _reflectionSampleCount;

}

@property (assign,nonatomic) double reflectivity; 
@property (assign,nonatomic) double reflectionFalloffStart; 
@property (assign,nonatomic) double reflectionFalloffEnd; 
@property (assign,nonatomic) double reflectionResolutionScaleFactor; 
+(BOOL)supportsSecureCoding;
+(id)floor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(double)reflectionFalloffStart;
-(double)reflectionFalloffEnd;
-(void)setReflectionFalloffStart:(double)arg1 ;
-(void)setReflectionFalloffEnd:(double)arg1 ;
-(double)reflectionResolutionScaleFactor;
-(void)setReflectionResolutionScaleFactor:(double)arg1 ;
-(unsigned long long)reflectionSampleCount;
-(void)setReflectionSampleCount:(unsigned long long)arg1 ;
-(void)_customDecodingOfSCNFloor:(id)arg1 ;
-(_C3DFloor*)floorRef;
-(double)reflectionFallOffStart;
-(double)reflectionFallOffEnd;
-(void)setReflectionFallOffStart:(double)arg1 ;
-(void)setReflectionFallOffEnd:(double)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(double)reflectivity;
-(void)setReflectivity:(double)arg1 ;
@end
