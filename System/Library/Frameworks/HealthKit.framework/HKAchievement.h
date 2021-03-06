/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSNumber, NSData;

@interface HKAchievement : NSObject <NSSecureCoding> {

	BOOL _alerted;
	BOOL _viewed;
	NSUUID* _UUID;
	unsigned long long _achievementType;
	NSDate* _completedDate;
	NSNumber* _value;

}

@property (nonatomic,retain) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long achievementType;              //@synthesize achievementType=_achievementType - In the implementation block
@property (nonatomic,retain) NSDate * completedDate;                          //@synthesize completedDate=_completedDate - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                //@synthesize value=_value - In the implementation block
@property (assign,getter=isAlerted,nonatomic) BOOL alerted;                   //@synthesize alerted=_alerted - In the implementation block
@property (assign,getter=isViewed,nonatomic) BOOL viewed;                     //@synthesize viewed=_viewed - In the implementation block
@property (nonatomic,retain) NSData * extraData; 
+(BOOL)supportsSecureCoding;
+(id)_nextUUID;
+(Class)_classForAchievementType:(unsigned long long)arg1 ;
+(BOOL)_requiresValueForAchievementType:(unsigned long long)arg1 ;
+(id)_achievementStringFromType:(unsigned long long)arg1 ;
+(id)_achievementTypeNameMappings;
+(id)achievementWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3 ;
+(unsigned long long)_achievementTypeFromString:(id)arg1 ;
+(id)_allAchievementTypeNames;
+(void)setOverridenUUID:(id)arg1 ;
+(id)achievementWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
+(id)_achievementWithUUID:(id)arg1 type:(unsigned long long)arg2 completedDate:(id)arg3 value:(id)arg4 extraData:(id)arg5 alerted:(BOOL)arg6 ;
-(id)fiui_badgeTexturePath;
-(id)fiui_badgePlistPath;
-(id)_fiui_baseAssetName;
-(id)_fiui_assetNameForSizeClass:(long long)arg1 ;
-(id)fiui_badgeModelBaseAssetName;
-(id)fiui_imageForSizeClass:(long long)arg1 ;
-(id)fiui_uncompressedBadgeModelPath;
-(id)fiui_compressedBadgeModelPath;
-(id)localizedDescription;
-(id)localizedTitle;
-(id)_localizedDescriptionForCompleteNumberOfTimes:(long long)arg1 ;
-(id)_localizedDescriptionForIncomplete;
-(id)_localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1 ;
-(id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1 ;
-(id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1 ;
-(id)localizedDescriptionForAlertWithUserName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(unsigned long long)achievementType;
-(void)setAchievementType:(unsigned long long)arg1 ;
-(void)setCompletedDate:(NSDate *)arg1 ;
-(NSDate *)completedDate;
-(BOOL)_validateConfiguration;
-(BOOL)_hasExtraData;
-(void)_encodeExtraDataWithCoder:(id)arg1 ;
-(void)_decodeExtraDataWithCoder:(id)arg1 ;
-(id)_achievementTypeString;
-(BOOL)isAlerted;
-(BOOL)isViewed;
-(void)setAlerted:(BOOL)arg1 ;
-(void)setExtraData:(NSData *)arg1 ;
-(void)setViewed:(BOOL)arg1 ;
-(id)initWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3 ;
-(NSData *)extraData;
@end

