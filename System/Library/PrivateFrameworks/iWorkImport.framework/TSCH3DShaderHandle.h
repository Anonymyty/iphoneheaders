/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DGLHandle.h>

@interface TSCH3DShaderHandle : TSCH3DGLHandle {

	unsigned mType;

}

@property (nonatomic,readonly) unsigned type; 
+(id)handleWithType:(unsigned)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(id)initWithGLHandle:(unsigned)arg1 ;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
@end
