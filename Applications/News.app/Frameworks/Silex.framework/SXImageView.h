/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIImageView.h>
#import <Silex/SXAXCustomRotorElement.h>
#import <Silex/SXAnimatedImageDelegate.h>

@protocol SXImageViewDelegate, SXResourceDataSource;
@class SXImageResource, SXAnimatedImage, UIImage, NSMapTable, UIActivityIndicatorView, CADisplayLink, UILongPressGestureRecognizer, NSString;

@interface SXImageView : UIImageView <SXAXCustomRotorElement, SXAnimatedImageDelegate> {

	BOOL _shouldShowLoadingIndicator;
	BOOL _scrubbingEnabled;
	BOOL _isScrubbing;
	BOOL _autoPlayEnabled;
	BOOL _shouldResume;
	BOOL _shouldResumeAfterLoad;
	id<SXImageViewDelegate> _delegate;
	SXImageResource* _imageResource;
	id<SXResourceDataSource> _resourceDataSource;
	SXAnimatedImage* _animatedImage;
	unsigned long long _frameIndex;
	/*^block*/id _frameChangeBlock;
	/*^block*/id _preferredQualityImageRequestCancelHandler;
	/*^block*/id _highQualityImageRequestCancelHandler;
	UIImage* _preferredQualityImage;
	UIImage* _highQualityImage;
	unsigned long long _preferredQualityInterest;
	unsigned long long _highQualityInterest;
	NSMapTable* _interestTable;
	UIActivityIndicatorView* _activityIndicatorView;
	double _timeSinceLastImageChange;
	unsigned long long _loopsLeft;
	CADisplayLink* _displayLink;
	UILongPressGestureRecognizer* _scrubGesture;
	CGSize _preferredImageSize;
	CGSize _preferredQualityLoadingImageSize;
	CGPoint _previousPoint;

}

@property (assign,nonatomic) BOOL shouldShowLoadingIndicator;                                   //@synthesize shouldShowLoadingIndicator=_shouldShowLoadingIndicator - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorStyle; 
@property (assign,nonatomic) BOOL scrubbingEnabled;                                             //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) CGSize preferredImageSize;                                         //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
@property (assign,nonatomic,__weak) id<SXImageViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXImageResource * imageResource;                                 //@synthesize imageResource=_imageResource - In the implementation block
@property (nonatomic,__weak,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (nonatomic,readonly) BOOL containsAnimatedImage; 
@property (nonatomic,readonly) BOOL hasLoadedImage; 
@property (assign,nonatomic) BOOL isScrubbing;                                                  //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,readonly) SXAnimatedImage * animatedImage;                                 //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,nonatomic) unsigned long long frameIndex;                                     //@synthesize frameIndex=_frameIndex - In the implementation block
@property (nonatomic,copy) id frameChangeBlock;                                                 //@synthesize frameChangeBlock=_frameChangeBlock - In the implementation block
@property (nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic) BOOL autoPlayEnabled;                                              //@synthesize autoPlayEnabled=_autoPlayEnabled - In the implementation block
@property (nonatomic,copy) id preferredQualityImageRequestCancelHandler;                        //@synthesize preferredQualityImageRequestCancelHandler=_preferredQualityImageRequestCancelHandler - In the implementation block
@property (nonatomic,copy) id highQualityImageRequestCancelHandler;                             //@synthesize highQualityImageRequestCancelHandler=_highQualityImageRequestCancelHandler - In the implementation block
@property (assign,nonatomic) CGSize preferredQualityLoadingImageSize;                           //@synthesize preferredQualityLoadingImageSize=_preferredQualityLoadingImageSize - In the implementation block
@property (nonatomic,retain) UIImage * preferredQualityImage;                                   //@synthesize preferredQualityImage=_preferredQualityImage - In the implementation block
@property (nonatomic,retain) UIImage * highQualityImage;                                        //@synthesize highQualityImage=_highQualityImage - In the implementation block
@property (assign,nonatomic) unsigned long long preferredQualityInterest;                       //@synthesize preferredQualityInterest=_preferredQualityInterest - In the implementation block
@property (assign,nonatomic) unsigned long long highQualityInterest;                            //@synthesize highQualityInterest=_highQualityInterest - In the implementation block
@property (nonatomic,readonly) BOOL hasInterest; 
@property (nonatomic,readonly) BOOL prefersHighQuality; 
@property (nonatomic,retain) NSMapTable * interestTable;                                        //@synthesize interestTable=_interestTable - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                   //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (assign,nonatomic) BOOL shouldResume;                                                 //@synthesize shouldResume=_shouldResume - In the implementation block
@property (assign,nonatomic) BOOL shouldResumeAfterLoad;                                        //@synthesize shouldResumeAfterLoad=_shouldResumeAfterLoad - In the implementation block
@property (assign,nonatomic) double timeSinceLastImageChange;                                   //@synthesize timeSinceLastImageChange=_timeSinceLastImageChange - In the implementation block
@property (assign,nonatomic) unsigned long long loopsLeft;                                      //@synthesize loopsLeft=_loopsLeft - In the implementation block
@property (nonatomic,readonly) CADisplayLink * displayLink;                                     //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * scrubGesture;                       //@synthesize scrubGesture=_scrubGesture - In the implementation block
@property (assign,nonatomic) CGPoint previousPoint;                                             //@synthesize previousPoint=_previousPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animatedImage:(id)arg1 madeImageAvailableForFrameAtIndex:(unsigned long long)arg2 ;
-(void)layoutActivityIndicator;
-(BOOL)hasLoadedImage;
-(NSMapTable *)interestTable;
-(void)giveUpInterestForObject:(id)arg1 ;
-(void)addInterestInImageQuality:(int)arg1 forObject:(id)arg2 ;
-(void)validateLoadedImage;
-(BOOL)hasInterest;
-(BOOL)containsAnimatedImage;
-(BOOL)prefersHighQuality;
-(UIImage *)highQualityImage;
-(void)setHighQualityImage:(UIImage *)arg1 ;
-(id)preferredQualityImageRequestCancelHandler;
-(void)setPreferredQualityImageRequestCancelHandler:(id)arg1 ;
-(void)setPreferredQualityLoadingImageSize:(CGSize)arg1 ;
-(id)highQualityImageRequestCancelHandler;
-(void)setHighQualityImageRequestCancelHandler:(id)arg1 ;
-(unsigned long long)preferredQualityInterest;
-(unsigned long long)highQualityInterest;
-(void)loadHighQualityImage;
-(void)crossfadeToImage:(id)arg1 ;
-(UIImage *)preferredQualityImage;
-(CGSize)preferredQualityLoadingImageSize;
-(void)loadPreferredQualityImage;
-(void)didLoadAnimatedImage:(id)arg1 ;
-(void)setPreferredQualityImage:(UIImage *)arg1 ;
-(void)fadeInImageWhenVisible:(id)arg1 ;
-(id<SXResourceDataSource>)resourceDataSource;
-(UILongPressGestureRecognizer *)scrubGesture;
-(void)handleScrubGesture:(id)arg1 ;
-(void)setScrubGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setFrameIndex:(unsigned long long)arg1 allowNearest:(BOOL)arg2 ;
-(BOOL)autoPlayEnabled;
-(void)setShouldResume:(BOOL)arg1 ;
-(BOOL)shouldResume;
-(BOOL)shouldResumeAfterLoad;
-(void)setShouldResumeAfterLoad:(BOOL)arg1 ;
-(double)timeSinceLastImageChange;
-(void)setTimeSinceLastImageChange:(double)arg1 ;
-(unsigned long long)loopsLeft;
-(void)setLoopsLeft:(unsigned long long)arg1 ;
-(id)frameChangeBlock;
-(id)customRotorMembership;
-(id)initWithImageResource:(id)arg1 resourceDataSource:(id)arg2 ;
-(void)setShouldShowLoadingIndicator:(BOOL)arg1 ;
-(BOOL)objectHasQualityInterest:(id)arg1 quality:(int*)arg2 ;
-(CGSize)loadedImageSize;
-(void)setPreferredImageSize:(CGSize)arg1 ;
-(void)setFrameChangeBlock:(id)arg1 ;
-(void)setAutoPlayEnabled:(BOOL)arg1 ;
-(void)setPreferredQualityInterest:(unsigned long long)arg1 ;
-(void)setHighQualityInterest:(unsigned long long)arg1 ;
-(void)setInterestTable:(NSMapTable *)arg1 ;
-(void)setDelegate:(id<SXImageViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(id<SXImageViewDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)resume;
-(BOOL)isVisible;
-(void)setPreviousPoint:(CGPoint)arg1 ;
-(CGPoint)previousPoint;
-(BOOL)paused;
-(void)pause;
-(SXImageResource *)imageResource;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)tick:(id)arg1 ;
-(void)setLoadingIndicatorStyle:(long long)arg1 ;
-(long long)loadingIndicatorStyle;
-(BOOL)shouldShowLoadingIndicator;
-(CGSize)preferredImageSize;
-(BOOL)isScrubbing;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(BOOL)scrubbingEnabled;
-(unsigned long long)frameIndex;
-(void)setFrameIndex:(unsigned long long)arg1 ;
-(void)setAnimatedImage:(SXAnimatedImage *)arg1 ;
-(SXAnimatedImage *)animatedImage;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
@end
