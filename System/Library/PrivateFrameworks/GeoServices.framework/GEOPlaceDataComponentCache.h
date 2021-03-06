/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOPlaceDataDBWriter, GEOPlaceDataDBReader, NSObject;

@interface GEOPlaceDataComponentCache : NSObject {

	GEOPlaceDataDBWriter* _writer;
	GEOPlaceDataDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;
	int _resultProviderID;

}

@property (nonatomic,readonly) int resultProviderID;              //@synthesize resultProviderID=_resultProviderID - In the implementation block
-(void)deletePhoneNumberMapping;
-(id)allCacheEntries;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
-(void)rememberPlaceData:(id)arg1 ;
-(void)evictPlaceDataForKey:(GEOTileKey)arg1 ;
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(void)evictPlaceDataForMUID:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)shrinkBySize:(unsigned long long)arg1 callback:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(int)resultProviderID;
-(void)rememberComponent:(id)arg1 forKey:(_GEOPlaceDataComponentKey)arg2 ;
-(void)componentsForKeys:(id)arg1 finished:(/*^block*/id)arg2 ;
-(id)componentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(id)initWithPath:(id)arg1 resultProviderID:(int)arg2 ;
-(void)forgetComponentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)evictAllEntries;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
@end

