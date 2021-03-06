/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCPlugTiming
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
@required
-(void)setLoopDuration:(double)arg1;
-(double)phaseOutDuration;
-(double)loopDuration;
-(void)setPhaseOutDuration:(double)arg1;
-(double)fullDuration;
-(void)setPhaseInDuration:(double)arg1;
-(double)phaseInDuration;
-(void)setNumberOfLoops:(double)arg1;
-(double)numberOfLoops;

@end

