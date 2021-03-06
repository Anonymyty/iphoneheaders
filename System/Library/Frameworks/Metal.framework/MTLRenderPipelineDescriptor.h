/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLVertexDescriptor, MTLRenderPipelineColorAttachmentDescriptorArray;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> vertexFunction; 
@property (nonatomic,retain) id<MTLFunction> fragmentFunction; 
@property (nonatomic,copy) MTLVertexDescriptor * vertexDescriptor; 
@property (assign,nonatomic) unsigned long long sampleCount; 
@property (assign,getter=isAlphaToCoverageEnabled,nonatomic) BOOL alphaToCoverageEnabled; 
@property (assign,getter=isAlphaToOneEnabled,nonatomic) BOOL alphaToOneEnabled; 
@property (assign,getter=isRasterizationEnabled,nonatomic) BOOL rasterizationEnabled; 
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) unsigned long long depthAttachmentPixelFormat; 
@property (assign,nonatomic) unsigned long long stencilAttachmentPixelFormat; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

