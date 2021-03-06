/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier {

	tquat<float> _GLPoint4DValue;
	tquat<float> _proposedGLPoint4DValue;

}

@property (getter=LPoint4DValue,nonatomic,readonly) tquat<float> GLPoint4DValue;              //@synthesize GLPoint4DValue=_GLPoint4DValue - In the implementation block
@property (assign,nonatomic) tquat<float> proposedGLPoint4DValue;                             //@synthesize proposedGLPoint4DValue=_proposedGLPoint4DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(tquat<float>)GLPoint4DValue;
-(void)setProposedGLPoint4DValue:(tquat<float>)arg1 ;
-(tquat<float>)proposedGLPoint4DValue;
-(id)description;
@end

