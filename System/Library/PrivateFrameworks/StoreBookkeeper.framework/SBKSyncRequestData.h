/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKRequestData.h>

@interface SBKSyncRequestData : SBKRequestData
-(id)syncTransaction;
-(id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableConflictDetectionValue;
-(BOOL)_needsConflictDetection;
-(id)_serializableConflictDetectionOrdinalForKey:(id)arg1 ;
-(id)serializableRequestBodyPropertyList;
@end
