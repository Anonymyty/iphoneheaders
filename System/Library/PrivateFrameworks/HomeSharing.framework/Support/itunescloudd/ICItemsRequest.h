/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:53 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICItemsRequest : ICRequest
+(id)requestWithDatabaseID:(unsigned)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(BOOL)arg5 ;
+(id)requestWithDatabaseID:(unsigned)arg1 paginationToken:(id)arg2 ;
-(id)_bodyDataForMetadataFilter:(id)arg1 queryFilter:(id)arg2 purchaseTokens:(id)arg3 includeHiddenItems:(BOOL)arg4 paginationToken:(id)arg5 ;
-(id)initWithDatabaseID:(unsigned)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(BOOL)arg5 paginationToken:(id)arg6 ;
-(double)timeoutInterval;
@end
