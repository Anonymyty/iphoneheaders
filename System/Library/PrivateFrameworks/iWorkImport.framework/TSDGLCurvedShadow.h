/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShadow.h>

@class TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLShader, CIContext;

@interface TSDGLCurvedShadow : TSDGLShadow {

	TSDGLFrameBuffer* mAlphaFrameBuffer;
	TSDGLDataBuffer* mAlphaDataBuffer;
	TSDGLShader* mAlphaShader;
	TSDGLShader* mCurvedShader;
	TSDGLFrameBuffer* mCurveInterpolationFrameBuffer;
	TSDGLDataBuffer* mCurveInterpolationDataBuffer;
	TSDGLShader* mCurveInterpolationShader;
	char* mBuffer;
	CIContext* mCIContext;

}
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
-(void)drawShadow:(id)arg1 forImage:(CGImageRef)arg2 inContext:(CGContextRef)arg3 forSize:(CGSize)arg4 ;
-(BOOL)p_shrinkImageIfNecessary:(CGImageRef)arg1 originalSize:(CGSize)arg2 newImage:(CGImage*)arg3 newSize:(CGSize*)arg4 ;
-(void)p_setupCIContextForFramebufferSize:(CGSize)arg1 ;
-(void)p_debugLogImage:(id)arg1 name:(id)arg2 ;
-(id)p_alphaOnlyImageFromImage:(id)arg1 ;
-(id)p_tintedCIImageFromImage:(id)arg1 withColor:(tquat<float>)arg2 ;
-(id)p_curvedImageFromImage:(id)arg1 curveAmount:(double)arg2 padding:(double)arg3 ;
-(double)baseBlurRadiusForCurve:(double)arg1 framebufferSize:(CGSize)arg2 ;
-(id)p_blurredImage:(id)arg1 edgeBlurRadius:(double)arg2 middleBlurRadius:(double)arg3 padding:(double)arg4 edgeOpacity:(double)arg5 middleOpacity:(double)arg6 ;
-(id)p_imageByMultiplyingImage:(id)arg1 withImage:(id)arg2 ;
-(id)p_debugColorOverlayImageFromImage:(id)arg1 ;
-(id)p_gradientImageWithExtent:(CGRect)arg1 middleWhiteValue:(double)arg2 edgeWhiteValue:(double)arg3 includeAlpha:(BOOL)arg4 padding:(double)arg5 ;
-(void)dealloc;
@end

