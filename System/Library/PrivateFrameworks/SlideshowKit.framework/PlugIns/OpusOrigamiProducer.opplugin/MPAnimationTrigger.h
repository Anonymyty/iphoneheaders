/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAction.h>

@class NSString, NSMutableDictionary, NSDictionary;

@interface MPAnimationTrigger : MPAction {

	NSString* _animationKey;
	NSMutableDictionary* _animationAttributes;

}

@property (nonatomic,copy) NSString * animationKey;                         //@synthesize animationKey=_animationKey - In the implementation block
@property (nonatomic,copy) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
+(id)animationTrigger;
-(id)animationAttributeForKey:(id)arg1 ;
-(NSDictionary *)animationAttributes;
-(void)setAnimationKey:(NSString *)arg1 ;
-(NSString *)animationKey;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimationAttributes:(NSDictionary *)arg1 ;
-(void)setAction:(id)arg1 ;
@end

