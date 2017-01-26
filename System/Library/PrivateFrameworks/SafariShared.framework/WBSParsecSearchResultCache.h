/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface WBSParsecSearchResultCache : NSObject {

	NSMutableDictionary* _resultSetCache;
	NSMutableDictionary* _resultCache;
	NSMutableDictionary* _resultSetsByPrefix;
	unsigned long long _cachedQueriesLimit;
	unsigned long long _cachedResultsLimit;

}

@property (nonatomic,readonly) NSArray * allCachedQueries; 
@property (nonatomic,readonly) NSArray * allCachedResultIdentifiers; 
-(id)resultSetWithQuery:(id)arg1 ;
-(void)cacheResultSet:(id)arg1 ;
-(id)resultWithIdentifier:(id)arg1 ;
-(void)cacheResult:(id)arg1 ;
-(BOOL)_shouldCacheResultSetForQueryMatching:(id)arg1 ;
-(BOOL)_resultSet:(id)arg1 isMatchForQuery:(id)arg2 ;
-(id)initWithCachedQueriesLimit:(unsigned long long)arg1 cachedResultsLimit:(unsigned long long)arg2 ;
-(void)cacheResultSetsFromSearchResponse:(id)arg1 ;
-(id)bestResultSetForQuery:(id)arg1 ;
-(NSArray *)allCachedQueries;
-(NSArray *)allCachedResultIdentifiers;
@end
