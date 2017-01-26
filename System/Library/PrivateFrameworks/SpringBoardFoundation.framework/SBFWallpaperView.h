/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver;
@class SBFWallpaperSettings, UIView, _UILegibilitySettingsProvider, _UILegibilitySettings, UIColor, NSTimer, SBFWallpaperParallaxSettings, NSString, UIImage;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver, SBFLegibilitySettingsProvider> {

	SBFWallpaperSettings* _wallpaperSettings;
	UIView* _parallaxView;
	double _contentScaleFactor;
	long long _variant;
	_UILegibilitySettingsProvider* _legibilitySettingsProvider;
	_UILegibilitySettings* _legibilitySettings;
	UIColor* _lastAverageColor;
	NSTimer* _colorSampleTimer;
	BOOL _shouldGenerateBlurredImagesWhenVisible;
	BOOL _generatingBlurredImages;
	SBFWallpaperParallaxSettings* _parallaxSettings;
	BOOL _wantsRasterization;
	long long _disallowRasterizationBlockCount;
	BOOL _parallaxEnabled;
	BOOL _continuousColorSamplingEnabled;
	BOOL _wallpaperAnimationEnabled;
	BOOL _rotating;
	BOOL _sharesContentsAcrossVariants;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;
	UIView* _contentView;
	double _zoomFactor;
	double _parallaxFactor;
	NSString* _wallpaperName;
	id<SBFWallpaperViewInternalObserver> _internalObserver;

}

@property (nonatomic,retain) UIView * contentView;                                                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long variant;                                                         //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) UIImage * wallpaperImage; 
@property (assign,nonatomic) double zoomFactor;                                                         //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                                                      //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                                                     //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) BOOL continuousColorSamplingEnabled;                                       //@synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled - In the implementation block
@property (assign,nonatomic) BOOL wallpaperAnimationEnabled;                                            //@synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                           //@synthesize rotating=_rotating - In the implementation block
@property (nonatomic,copy) NSString * wallpaperName;                                                    //@synthesize wallpaperName=_wallpaperName - In the implementation block
@property (assign,nonatomic) BOOL sharesContentsAcrossVariants;                                         //@synthesize sharesContentsAcrossVariants=_sharesContentsAcrossVariants - In the implementation block
@property (assign,nonatomic,__weak) id<SBFWallpaperViewInternalObserver> internalObserver;              //@synthesize internalObserver=_internalObserver - In the implementation block
@property (nonatomic,readonly) BOOL needsImmediateLayoutBeforeRotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_allowsRasterization;
+(BOOL)_allowsParallax;
+(BOOL)_shouldScaleForParallax;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(double)contentScaleFactor;
-(void)invalidate;
-(BOOL)isRotating;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setRotating:(BOOL)arg1 ;
-(double)contrast;
-(void)_updateScaleFactor;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(BOOL)supportsCropping;
-(id)_displayedImage;
-(id)_displayedSurfaceImage;
-(void)_updateContentViewScale;
-(void)_updateParallaxSettings;
-(void)_updateRasterizationState;
-(id)initWithFrame:(CGRect)arg1 variant:(long long)arg2 ;
-(id)_computeAverageColor;
-(void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2 ;
-(void)_beginDisallowRasterizationBlock;
-(void)_endDisallowRasterizationBlock;
-(void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 ;
-(void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 forced:(BOOL)arg3 ;
-(void)_handleVariantChange;
-(void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2 ;
-(NSString *)wallpaperName;
-(id)_primaryColorOverride;
-(void)legibilitySettingsDidChange;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 ;
-(void)_updateGeneratingBlurs;
-(id)_blurReplacementImage;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB8)arg1 includeTint:(BOOL)arg2 ;
-(void)_handleVisibilityChange;
-(void)_applyParallaxSettings;
-(void)_notifyBlursInvalidated;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(void)_addParallax;
-(void)_removeParallax;
-(void)_notifyGeometryInvalidated;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(BOOL)contrastRequiresTreatments;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(double)cropZoomScale;
-(void)updateLegibilitySettingsForAverageColor:(id)arg1 ;
-(void)setGeneratesBlurredImages:(BOOL)arg1 ;
-(id)snapshotImage;
-(id)blurredImage;
-(id)imageForBackdropParameters:(SCD_Struct_SB8)arg1 includeTint:(BOOL)arg2 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)wantsRasterization;
-(BOOL)needsImmediateLayoutBeforeRotation;
-(BOOL)luminanceInRectRequiresTreatments:(CGRect)arg1 ;
-(BOOL)contrastRequiresGradient;
-(BOOL)continuousColorSamplingEnabled;
-(void)setContinuousColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)wallpaperAnimationEnabled;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)setWallpaperName:(NSString *)arg1 ;
-(BOOL)sharesContentsAcrossVariants;
-(void)setSharesContentsAcrossVariants:(BOOL)arg1 ;
-(id<SBFWallpaperViewInternalObserver>)internalObserver;
-(void)setInternalObserver:(id<SBFWallpaperViewInternalObserver>)arg1 ;
-(UIImage *)wallpaperImage;
-(CGRect)cropRect;
-(double)parallaxFactor;
-(void)setParallaxFactor:(double)arg1 ;
-(BOOL)parallaxEnabled;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(BOOL)_isVisible;
-(long long)variant;
-(void)setVariant:(long long)arg1 ;
@end
