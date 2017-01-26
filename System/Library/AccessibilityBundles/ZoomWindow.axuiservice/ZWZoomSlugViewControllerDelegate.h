/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZWZoomSlugViewControllerDelegate <NSObject>
@required
-(void)slugWasSingleTappedWithSlugViewController:(id)arg1;
-(void)slugWasDoubleTappedWithSlugViewController:(id)arg1;
-(BOOL)shouldBeginAutopanningLensWithSlugViewController:(id)arg1;
-(void)wantsToStartAutopannerWithSlugViewController:(id)arg1;
-(void)zoomSlugViewController:(id)arg1 wantsToAdjustZoomLevelWithDelta:(CGPoint)arg2;
-(void)zoomSlugViewController:(id)arg1 didDragSlug:(id)arg2 withDelta:(CGPoint)arg3;
-(void)wantsToStopAutopannerWithSlugViewController:(id)arg1;
-(BOOL)shouldShowSlugWithSlugViewController:(id)arg1;

@end
