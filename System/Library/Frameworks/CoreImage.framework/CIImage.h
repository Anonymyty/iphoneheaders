/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, CIFilterShape, NSURL;

@interface CIImage : NSObject <NSSecureCoding, NSCopying> {

	void* _priv;

}

@property (nonatomic,readonly) CGRect extent; 
@property (readonly) NSDictionary * properties; 
@property (readonly) CIFilterShape * definition; 
@property (readonly) NSURL * url; 
@property (readonly) CGColorSpaceRef colorSpace; 
+(int)pu_orientationFromAngle:(double)arg1 ;
+(double)pu_angleFromOrientation:(int)arg1 ;
+(id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
+(id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
+(id)imageWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(id)imageWithImageProvider:(id)arg1 size:(unsigned long long)arg2 :(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
+(id)imageWithCGLayer:(CGLayerRef)arg1 options:(id)arg2 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfURL:(id)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfFile:(id)arg1 options:(id)arg2 ;
+(id)imageWithInternalRepresentation:(void*)arg1 ;
+(id)nullImage;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)imageWithCGLayer:(CGLayerRef)arg1 ;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4 ;
+(id)imageWithMTLTexture:(id)arg1 options:(id)arg2 ;
+(id)imageWithCVImageBuffer:(CVBufferRef)arg1 ;
+(id)noiseImage;
+(id)noiseImageNearest;
+(id)noiseImagePadded;
+(id)imageWithData:(id)arg1 options:(id)arg2 ;
+(id)imageWithArrayOfImages:(id)arg1 selector:(/*^block*/id)arg2 ;
+(id)emptyImage;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithColor:(id)arg1 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfURL:(id)arg1 ;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)pu_loadAdjustments:(id)arg1 orientation:(int)arg2 ;
-(BOOL)pu_getSuggestionForCropRect:(CGRect*)arg1 straightenAngle:(double*)arg2 orientation:(int)arg3 ;
-(id)bl_moveAlphaToBlue;
-(id)bl_moveBlueToAlpha;
-(id)bl_imageFromAlphaChannel;
-(id)bl_imageToAlphaChannel;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 options:(id)arg2 ;
-(id)getAutoRotateFilter:(id)arg1 ciImage:(id)arg2 rgbRows:(id)arg3 inputRect:(CGRect)arg4 rotateCropRect:(CGRect*)arg5 ;
-(void)getAutocropRect:(id)arg1 rotateXfrm:(CGAffineTransform)arg2 inputImageRect:(CGRect)arg3 clipRect:(CGRect*)arg4 ;
-(id)autoRotateFilterFFT:(id)arg1 image:(CGImageRef)arg2 inputRect:(CGRect)arg3 ;
-(CGPoint)calcIntersection:(CGPoint)arg1 slope1:(CGPoint)arg2 pt2:(CGPoint)arg3 slope2:(CGPoint)arg4 ;
-(id)smartBlackAndWhiteAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartBlackAndWhiteStatistics;
-(id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4 ;
-(id)_scaleImageToMaxDimension:(unsigned)arg1 ;
-(id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2 ;
-(id)_dictForFeature:(id)arg1 scale:(double)arg2 imageHeight:(float)arg3 ;
-(id)autoAdjustmentFilters;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3 ;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2 ;
-(id)autoAdjustmentFiltersWithOptions:(id)arg1 ;
-(id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartToneStatistics;
-(id)smartColorStatistics;
-(id)imageWithExtent:(CGRect)arg1 processorDescription:(id)arg2 inputFormat:(int)arg3 outputFormat:(int)arg4 roiCallback:(/*^block*/id)arg5 processor:(/*^block*/id)arg6 options:(id)arg7 ;
-(id)initWithImageProvider:(/*^block*/id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)initWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(id)initWithImageProvider:(id)arg1 size:(unsigned long long)arg2 :(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)_initWithImageProvider:(/*^block*/id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 surfaceCache:(BOOL)arg6 options:(id)arg7 ;
-(id)filteredImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)_imageByApplyingBlur:(double)arg1 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(void*)_internalRepresentation;
-(CGRect)regionOfInterestForImage:(id)arg1 inRect:(CGRect)arg2 ;
-(id)_imageByMatchingColorSpaceToWorkingSpace:(CGColorSpaceRef)arg1 ;
-(id)imageByClampingToExtent;
-(id)_initWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 owner:(void*)arg3 ;
-(id)_initNaiveWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithCGLayer:(CGLayerRef)arg1 options:(id)arg2 ;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4 ;
-(id)initWithMTLTexture:(id)arg1 options:(id)arg2 ;
-(id)_initWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithColorR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
-(CGAffineTransform)imageTransformForOrientation:(int)arg1 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(id)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(id)arg2 ;
-(id)initWithArrayOfImages:(id)arg1 selector:(/*^block*/id)arg2 ;
-(id)initWithCGLayer:(CGLayerRef)arg1 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithCVImageBuffer:(CVBufferRef)arg1 ;
-(id)imageByCompositingOverImage:(id)arg1 ;
-(id)_imageByPremultiplying;
-(id)_imageByUnpremultiplying;
-(id)_imageByApplyingGamma:(double)arg1 ;
-(id)_imageByMatchingWorkingSpaceToColorSpace:(CGColorSpaceRef)arg1 ;
-(id)_imageByRenderingToIntermediate;
-(id)_imageBySamplingNearest;
-(id)_imageBySamplingLinear;
-(void)setCacheHint:(BOOL)arg1 ;
-(BOOL)cacheHint;
-(void)writeToTIFF:(id)arg1 ;
-(void)printTree;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSURL *)url;
-(void)setUserInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGRect)extent;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)isOpaque;
-(id)initWithColor:(id)arg1 ;
-(id)imageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2 ;
-(CIFilterShape *)definition;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)properties;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)imageByApplyingTransform:(CGAffineTransform)arg1 ;
-(id)imageByCroppingToRect:(CGRect)arg1 ;
-(id)imageByApplyingOrientation:(int)arg1 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
-(id)TIFFRepresentation;
-(void)finalize;
-(CGColorSpaceRef)colorSpace;
@end

