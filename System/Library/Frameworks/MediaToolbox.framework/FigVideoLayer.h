/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {

	FigVideoLayerInternal* _videoLayer;

}
+(id)defaultActionForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)notificationBarrier;
-(BOOL)isVideoLayerBeingServiced;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)finalize;
@end

