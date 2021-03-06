/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSearchableIndexInterface.h>
#import <libobjc.A.dylib/CSSearchableIndexServiceInterface.h>

@protocol MDIndexer;
@class CSIndexingQueue, MDIndexAgent, NSObject, NSString, NSSet;

@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface> {

	CSIndexingQueue* _activityQueue;
	BOOL _isInternal;
	BOOL _quotaDisabled;
	unsigned _clientUID;
	MDIndexAgent* _agent;
	NSObject*<MDIndexer> _indexer;
	NSString* _clientBundleID;
	NSString* _protectionClass;
	NSSet* _tccAllowances;

}

@property (assign,nonatomic,__weak) MDIndexAgent * agent;                                                                 //@synthesize agent=_agent - In the implementation block
@property (nonatomic,readonly) NSObject*<CSSearchableIndexServiceInterface>*<NSXPCProxyCreating> clientLink; 
@property (nonatomic,retain) NSObject*<MDIndexer> indexer;                                                                //@synthesize indexer=_indexer - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                                                     //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) unsigned clientUID;                                                                          //@synthesize clientUID=_clientUID - In the implementation block
@property (nonatomic,copy) NSString * protectionClass;                                                                    //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,retain) NSSet * tccAllowances;                                                                       //@synthesize tccAllowances=_tccAllowances - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                                                                             //@synthesize isInternal=_isInternal - In the implementation block
@property (assign,nonatomic) BOOL quotaDisabled;                                                                          //@synthesize quotaDisabled=_quotaDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)performIndexJob:(id)arg1 ;
-(BOOL)isInternal;
-(void)setProtectionClass:(NSString *)arg1 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 ;
-(void)checkInWithProtectionClass:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2 ;
-(void)_issueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(MDIndexAgent *)agent;
-(void)setAgent:(MDIndexAgent *)arg1 ;
-(NSString *)protectionClass;
-(NSObject*<CSSearchableIndexServiceInterface>*<NSXPCProxyCreating>)clientLink;
-(void)setIndexer:(NSObject*<MDIndexer>)arg1 ;
-(NSObject*<MDIndexer>)indexer;
-(void)setIsInternal:(BOOL)arg1 ;
-(void)setQuotaDisabled:(BOOL)arg1 ;
-(void)setClientUID:(unsigned)arg1 ;
-(void)setTccAllowances:(NSSet *)arg1 ;
-(void)_notifyIndexAndObserversForActivities:(id)arg1 ;
-(id)_checkBundleIDHelper:(id)arg1 ;
-(BOOL)_bundleIsInTCCWhiteList:(id)arg1 ;
-(unsigned)clientUID;
-(NSSet *)tccAllowances;
-(id)_checkItems:(id)arg1 identifiers:(id)arg2 protectionClass:(id)arg3 bundleID:(id)arg4 allowedOnH4:(BOOL)arg5 ;
-(void)processObserversForBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 deletes:(id)arg7 ;
-(BOOL)_jobForTest:(long long)arg1 ;
-(BOOL)_jobForDuet:(long long)arg1 ;
-(BOOL)_jobForSuggestions:(long long)arg1 ;
-(BOOL)_jobForIndex:(long long)arg1 ;
-(void)_userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 ;
-(BOOL)quotaDisabled;
@end

