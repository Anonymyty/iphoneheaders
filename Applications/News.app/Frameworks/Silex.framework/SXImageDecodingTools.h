/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class CALayer, NSOperationQueue;

@interface SXImageDecodingTools : NSObject {

	CALayer* _rootLayer;
	NSOperationQueue* _decodingQueue;

}

@property (nonatomic,retain) CALayer * rootLayer;                           //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * decodingQueue;              //@synthesize decodingQueue=_decodingQueue - In the implementation block
+(id)sharedInstance;
-(NSOperationQueue *)decodingQueue;
-(id)decodeImage:(CGImageRef)arg1 ;
-(id)imageFromData:(id)arg1 size:(CGSize)arg2 ;
-(CGImageRef)newImageByDecodingImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
-(CFStringRef)contentTypeForImageData:(id)arg1 ;
-(void)loadImageFromImageData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageFromData:(id)arg1 ;
-(id)loadAnimatedImageFromImageData:(id)arg1 ;
-(BOOL)isValidJPEG:(id)arg1 ;
-(BOOL)imageDataIsPNG:(id)arg1 ;
-(BOOL)dataIsAnimatedImage:(id)arg1 ;
-(void)setDecodingQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(void)setRootLayer:(CALayer *)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CALayer *)rootLayer;
@end
