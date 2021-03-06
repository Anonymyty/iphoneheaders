/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSDGLTextureParameter : NSObject {

	unsigned _pname;
	unsigned long long _paramCount;
	int* _intData;
	float* _floatData;

}
+(id)textureParameterWithPName:(unsigned)arg1 integerParameter:(int)arg2 ;
+(id)stringWithCurrentTextureParameters;
+(id)textureParameterWithPName:(unsigned)arg1 integerParameters:(int*)arg2 count:(unsigned long long)arg3 ;
+(id)textureParameterWithPName:(unsigned)arg1 floatParameter:(float)arg2 ;
+(id)textureParameterWithPName:(unsigned)arg1 floatParameters:(float*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithPName:(unsigned)arg1 paramCount:(unsigned long long)arg2 intData:(int*)arg3 floatData:(float*)arg4 ;
-(void)setGLTextureParameter;
-(void)dealloc;
@end

