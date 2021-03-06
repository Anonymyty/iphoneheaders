/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NPTOPreference : NSObject {

	NSString* _preferenceKey;
	NSString* _notificationName;

}

@property (nonatomic,retain) NSString * preferenceKey;                 //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (nonatomic,retain) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
+(id)syncedAlbumIdentifierPreference;
+(id)syncedPhotosLimitPreference;
+(id)diskPressureMissingPhotoCountPreference;
-(void)setPreferenceKey:(NSString *)arg1 ;
-(NSString *)preferenceKey;
-(id)changeObserverInQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithPreferenceKey:(id)arg1 notificationName:(id)arg2 ;
-(void)_synchronizeAndNotifyObservers;
-(void)removeValue;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
@end

