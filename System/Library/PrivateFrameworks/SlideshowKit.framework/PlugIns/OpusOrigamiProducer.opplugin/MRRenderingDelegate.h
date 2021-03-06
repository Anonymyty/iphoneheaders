/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRRenderingDelegate <NSObject>
@property (nonatomic,readonly) BOOL hudIsOn; 
@optional
-(void)isMorphingWithProgress:(float)arg1;
-(void)renderer:(id)arg1 willRenderAtTime:(double)arg2;
-(void)renderer:(id)arg1 didRenderAtTime:(double)arg2;
-(void)hideHUD;
-(void)showHUD;
-(BOOL)hudIsOn;
-(BOOL)slideshowShouldWrap;
-(void)setAudioFadingLevel:(float)arg1 andDuckingLevel:(float)arg2;
-(void)resumeMusic;
-(void)pauseMusic;

@end

