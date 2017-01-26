/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MREffect.h>

@class MRTextRenderer, MRCroppingSprite, NSMutableArray, MRImage, NSArray, NSMutableDictionary, MRCAMLBezierData, MROrigamiAnimationPath;

@interface MREffectOrigamiTitle : MREffect {

	MRTextRenderer* mText0Renderer;
	MRCroppingSprite* mText0Sprite;
	NSMutableArray* mText0Images;
	NSMutableArray* mText0Offsets;
	MRImage* mText0Image;
	unsigned char mLineWordCounts[3];
	NSMutableArray* mWordIndexForGlyph;
	NSArray* mPatchworkAtEnd;
	NSMutableDictionary* mSprites;
	CGSize mImageSize;
	long long mWordCount;
	MRCAMLBezierData* mBreakCurve;
	MROrigamiAnimationPath* mBigSwing;
	MRImage* mBackColorImage;
	float mBackColorForImage[3];
	NSMutableDictionary* _offsetsForTransitions;

}
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unload;
-(void)_setupSwingTimings;
-(void)renderTitleEffectAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderTextEffectAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderFallImage:(id)arg1 atProgress:(double)arg2 strength:(double)arg3 inContext:(id)arg4 withArguments:(id)arg5 inRect:(CGRect)arg6 withAttributes:(id)arg7 :(CGPoint*)arg8 :(CGPoint)arg9 ;
-(void)renderStillImage:(id)arg1 withKey:(id)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFallBreakImage:(id)arg1 atProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 :(CGPoint*)arg7 :(CGPoint)arg8 ;
-(void)renderBreakImage:(id)arg1 atProgress:(double)arg2 withKey:(id)arg3 inContext:(id)arg4 withArguments:(id)arg5 inRect:(CGRect)arg6 withAttributes:(id)arg7 ;
-(void)renderFallImage:(id)arg1 atProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 :(CGPoint*)arg7 :(CGPoint)arg8 ;
-(id)_retainedByUserBackColorImageInContext:(id)arg1 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)_cleanupSwingTimings;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(id)init;
-(void)_cleanup;
@end
