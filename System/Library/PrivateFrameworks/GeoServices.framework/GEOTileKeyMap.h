/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileKeyMap : NSObject {

	long long _type;
	void* _map;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(id)contentsDescription;
-(id)initWithMapType:(long long)arg1 ;
@end

