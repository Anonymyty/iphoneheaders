/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject {

	MDLTexture* texture;
	MDLTextureFilter* hardwareFilter;
	MDLTransform* transform;

}

@property (nonatomic,retain) MDLTexture * texture; 
@property (nonatomic,retain) MDLTextureFilter * hardwareFilter; 
@property (nonatomic,retain) MDLTransform * transform; 
-(void)setTransform:(MDLTransform *)arg1 ;
-(MDLTransform *)transform;
-(void)setHardwareFilter:(MDLTextureFilter *)arg1 ;
-(MDLTexture *)texture;
-(void)setTexture:(MDLTexture *)arg1 ;
-(MDLTextureFilter *)hardwareFilter;
@end

