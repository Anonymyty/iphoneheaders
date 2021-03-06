/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledRep.h>

@class CALayer, CAShapeLayer, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

@interface TSDMediaRep : TSDStyledRep {

	BOOL mIsZooming;
	CALayer* mTapToReplaceLayer;
	CAShapeLayer* mMaskLayer;
	CAShapeLayer* mStrokeLayer;
	CALayer* mFrameMaskLayer;
	TSDFrameRep* mFrameRep;
	CGRect mLastPictureFrameLayerRect;

}

@property (nonatomic,readonly) TSDMediaInfo * mediaInfo; 
@property (nonatomic,readonly) TSDMediaLayout * mediaLayout; 
@property (nonatomic,readonly) BOOL shouldShowMediaReplaceUI; 
-(void)i_updateFrameRep;
-(BOOL)i_shouldRenderStroke:(id)arg1 ;
-(void)willBeginZooming;
-(void)didEndZooming;
-(id)additionalLayersOverLayer;
-(id)overlayLayers;
-(void)processChangedProperty:(int)arg1 ;
-(BOOL)shouldCreateKnobs;
-(void)addKnobsToArray:(id)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(CGPoint)positionOfHyperlinkKnob;
-(BOOL)replaceButtonContainsPoint:(CGPoint)arg1 ;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldAllowReplacementFromPaste;
-(id)visibleMediaReplaceButtonLayer;
-(TSDMediaLayout *)mediaLayout;
-(BOOL)canResetMediaSize;
-(BOOL)shouldAllowReplacementFromDrop;
-(void)p_addLayerForReplaceButtonToArray:(id)arg1 ;
-(CGSize)p_replaceButtonSize;
-(id)p_tapToReplaceLayer;
-(id)currentReplaceButtonImage;
-(void)p_updateTapToReplaceLayerPosition;
-(CGPoint)p_scaledPositionOfImageReplaceKnob;
-(id)currentReplaceButtonHighlightedImage;
-(void)dealloc;
-(BOOL)isPlaceholder;
-(TSDMediaInfo *)mediaInfo;
@end

