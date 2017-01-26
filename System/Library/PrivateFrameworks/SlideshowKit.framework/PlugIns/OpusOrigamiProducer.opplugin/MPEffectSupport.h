/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MPEffectSupport
@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming; 
@required
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2;
-(void)removeSecondarySlidesAtIndices:(id)arg1;
-(void)removeTextsAtIndices:(id)arg1;
-(void)setEffectAttributes:(id)arg1;
-(void)setPresetID:(id)arg1;
-(double)mainDuration;
-(double)phaseOutDuration;
-(void)addTexts:(id)arg1;
-(void)setEffectID:(id)arg1;
-(NSArray *)slides;
-(id)secondarySlides;
-(NSString *)presetID;
-(void)removeAllTexts;
-(void)removeAllSecondarySlides;
-(id)effectAttributeForKey:(id)arg1;
-(void)removeSlidesAtIndices:(id)arg1;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2;
-(void)addSlides:(id)arg1;
-(NSObject*<MZEffectTiming>)effectTiming;
-(NSArray *)texts;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2;
-(void)addSecondarySlides:(id)arg1;
-(void)setRandomSeed:(long long)arg1;
-(void)addSecondarySlide:(id)arg1;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2;
-(id)effectAttributes;
-(NSString *)effectID;
-(void)removeAllSlides;
-(double)phaseInDuration;
-(long long)randomSeed;
-(void)addText:(id)arg1;
-(void)addSlide:(id)arg1;

@end
