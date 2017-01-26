/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPLayer.h>
#import <OpusOrigamiProducer/MPEffectSupportPrivate.h>
#import <OpusOrigamiProducer/MPEffectSupport.h>

@protocol MZEffectTiming;
@class MCContainerEffect, NSString, NSMutableArray, NSMutableDictionary, NSObject, NSArray;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport> {

	MCContainerEffect* _layerEffect;
	NSString* _effectID;
	NSString* _presetID;
	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableDictionary* _effectAttributes;
	long long _randomSeed;
	NSObject*<MZEffectTiming> _effectTiming;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	long long _liveIndex;

}

@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(id)layerEffectWithEffectID:(id)arg1 ;
+(id)layerEffectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
+(id)layerEffectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(void)applyFormattedAttributes;
-(id)formattedAttributes;
-(void)copyTexts:(id)arg1 ;
-(void)copySecondarySlides:(id)arg1 ;
-(void)copySlides:(id)arg1 ;
-(void)setSkipEffectTiming:(BOOL)arg1 ;
-(id)slideInformation;
-(id)slideForMCSlide:(id)arg1 ;
-(void)setLayerEffect:(id)arg1 ;
-(BOOL)isLive;
-(void)updateTiming;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(double)lowestDisplayTime;
-(long long)liveIndex;
-(long long)maxNumberOfSlides;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3 ;
-(void)setLiveIndex:(long long)arg1 ;
-(void)createSlidesWithPaths:(id)arg1 ;
-(long long)maxNumberOfSecondarySlides;
-(double)fullDuration;
-(id)container;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)setEffectAttributes:(id)arg1 ;
-(void)setPresetID:(NSString *)arg1 ;
-(id)_effectAttributes;
-(double)mainDuration;
-(void)_updateTiming:(BOOL)arg1 ;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(void)addTexts:(id)arg1 ;
-(void)setEffectID:(NSString *)arg1 ;
-(NSArray *)slides;
-(id)secondarySlides;
-(id)allSlides:(BOOL)arg1 ;
-(NSString *)presetID;
-(void)removeAllTexts;
-(void)removeAllSecondarySlides;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)addSlides:(id)arg1 ;
-(NSObject*<MZEffectTiming>)effectTiming;
-(NSArray *)texts;
-(void)_updateEffectTiming;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)setRandomSeed:(long long)arg1 ;
-(void)addSecondarySlide:(id)arg1 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)effectAttributes;
-(NSString *)effectID;
-(void)removeAllSlides;
-(void)setPhaseInDuration:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)randomSeed;
-(void)addText:(id)arg1 ;
-(void)addSlide:(id)arg1 ;
@end
