/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {

	int mQuality;
	double mCanvasScale;
	NSMutableDictionary* mImageMap;

}

@property (nonatomic,readonly) int quality; 
@property (nonatomic,readonly) double canvasScale; 
-(id)initWithQuality:(int)arg1 canvasScale:(float)arg2 ;
-(double)qualityScaleForSize:(CGSize)arg1 ;
-(CGImageRef)degradedImageRefForProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(double)canvasScale;
-(Class)imageMapValueClass;
-(void)doneCaching:(id)arg1 forProvider:(id)arg2 ;
-(void)cacheProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(void)dealloc;
-(int)quality;
@end

