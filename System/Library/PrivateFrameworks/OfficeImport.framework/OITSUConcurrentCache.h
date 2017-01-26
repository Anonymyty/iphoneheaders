/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OITSUCache.h>

@class OITSUReadWriteQueue;

@interface OITSUConcurrentCache : OITSUCache {

	OITSUReadWriteQueue* mReadWriteQueue;

}

@property (nonatomic,readonly) OITSUReadWriteQueue * readWriteQueue; 
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)unload;
-(BOOL)hasFlushableContent;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(OITSUReadWriteQueue *)readWriteQueue;
@end
