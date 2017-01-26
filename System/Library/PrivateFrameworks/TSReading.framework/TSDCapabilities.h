/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDCapabilities : NSObject {

	long long _platform;
	long long _device;
	long long _renderer;

}

@property (nonatomic,readonly) long long platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) long long device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long renderer;                     //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) BOOL isRendererH3OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH4OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH5OrBelow; 
@property (nonatomic,readonly) BOOL hasLightningPort; 
@property (nonatomic,readonly) CGSize maximumTextureSize; 
+(id)currentCapabilities;
-(BOOL)isRendererH4OrBelow;
-(CGSize)maximumTextureSize;
-(void)p_setupPlatform;
-(void)p_setupDevice;
-(BOOL)isRendererH3OrBelow;
-(BOOL)isRendererH5OrBelow;
-(BOOL)hasLightningPort;
-(id)init;
-(long long)platform;
-(long long)renderer;
-(long long)device;
@end
