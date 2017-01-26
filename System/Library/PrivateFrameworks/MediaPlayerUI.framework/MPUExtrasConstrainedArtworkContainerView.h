/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUArtworkView, UIImage, UIImageView, NSArray;

@interface MPUExtrasConstrainedArtworkContainerView : UIView {

	BOOL _shouldAutoresizeMaskLayerToFillBounds;
	BOOL _shouldBottomAlignArtwork;
	MPUArtworkView* _artworkView;
	UIImage* _overlayImage;
	double _overlayScale;
	UIImageView* _overlayView;
	NSArray* _overlaySizeConstraints;

}

@property (nonatomic,retain) MPUArtworkView * artworkView;                            //@synthesize artworkView=_artworkView - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoresizeMaskLayerToFillBounds;              //@synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds - In the implementation block
@property (assign,nonatomic) BOOL shouldBottomAlignArtwork;                           //@synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                  //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) double overlayScale;                                     //@synthesize overlayScale=_overlayScale - In the implementation block
@property (nonatomic,retain) UIImageView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSArray * overlaySizeConstraints;                        //@synthesize overlaySizeConstraints=_overlaySizeConstraints - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)overlayImage;
-(void)setOverlayView:(UIImageView *)arg1 ;
-(UIImageView *)overlayView;
-(MPUArtworkView *)artworkView;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)setOverlayScale:(double)arg1 ;
-(void)setShouldBottomAlignArtwork:(BOOL)arg1 ;
-(void)setArtworkView:(MPUArtworkView *)arg1 ;
-(BOOL)shouldBottomAlignArtwork;
-(BOOL)shouldAutoresizeMaskLayerToFillBounds;
-(void)setShouldAutoresizeMaskLayerToFillBounds:(BOOL)arg1 ;
-(double)overlayScale;
-(NSArray *)overlaySizeConstraints;
-(void)setOverlaySizeConstraints:(NSArray *)arg1 ;
@end
