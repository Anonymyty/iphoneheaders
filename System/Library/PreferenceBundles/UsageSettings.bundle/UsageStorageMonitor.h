/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIBarButtonItem, UILabel, NSArray, UsageStorageCache;

@interface UsageStorageMonitor : NSObject {

	float _availableSize;
	UIBarButtonItem* _footerItem;
	UILabel* _footerLabel;
	NSArray* _footerItems;
	long long _storageClientCount;
	UsageStorageCache* _cache;
	float _usedSize;

}

@property (nonatomic,readonly) NSArray * footerItems; 
@property (nonatomic,readonly) float availableSize;                //@synthesize availableSize=_availableSize - In the implementation block
@property (assign,nonatomic) float usedSize;                       //@synthesize usedSize=_usedSize - In the implementation block
+(id)sharedMonitor;
-(void)deregisterUsageStorageClient;
-(void)registerUsageStorageClient;
-(id)mediaCollectionForKey:(id)arg1 ;
-(void)_setAvailable:(float)arg1 ;
-(void)clearUsageDataCache;
-(float)availableSize;
-(void)setUsedSize:(float)arg1 ;
-(void)populateUsageDataWithProgressBlock:(/*^block*/id)arg1 ;
-(void)removeMediaCollectionCacheForKey:(id)arg1 ;
-(void)flushViews;
-(float)usedSize;
-(id)init;
-(NSArray *)footerItems;
-(void)fetchSystemSizeStrings;
@end
