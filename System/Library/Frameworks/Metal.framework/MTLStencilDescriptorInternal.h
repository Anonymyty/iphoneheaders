/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStencilDescriptor.h>

@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {

	MTLStencilDescriptorPrivate _private;

}

@property (readonly) const MTLStencilDescriptorPrivate* stencilPrivate; 
-(unsigned)writeMask;
-(const MTLStencilDescriptorPrivate*)stencilPrivate;
-(unsigned long long)stencilCompareFunction;
-(unsigned long long)stencilFailureOperation;
-(unsigned long long)depthFailureOperation;
-(unsigned long long)depthStencilPassOperation;
-(unsigned)readMask;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStencilCompareFunction:(unsigned long long)arg1 ;
-(void)setStencilFailureOperation:(unsigned long long)arg1 ;
-(void)setDepthFailureOperation:(unsigned long long)arg1 ;
-(void)setDepthStencilPassOperation:(unsigned long long)arg1 ;
-(void)setReadMask:(unsigned)arg1 ;
-(void)setWriteMask:(unsigned)arg1 ;
@end

