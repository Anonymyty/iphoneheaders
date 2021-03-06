/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CNAutocompleteFetchContext, NSArray;

@interface CNAutocompleteFetchRequest : NSObject <NSCopying> {

	NSString* _searchString;
	NSString* _priorityDomainForSorting;
	unsigned long long _searchType;
	CNAutocompleteFetchContext* _fetchContext;
	BOOL _includeContacts;
	BOOL _includeRecents;
	BOOL _includeSuggestions;
	BOOL _includeDirectoryServers;
	BOOL _includeCalendarServers;
	BOOL _includePredictions;

}

@property (copy) NSString * searchString;                                //@synthesize searchString=_searchString - In the implementation block
@property (copy) NSString * priorityDomainForSorting;                    //@synthesize priorityDomainForSorting=_priorityDomainForSorting - In the implementation block
@property (assign) unsigned long long searchType;                        //@synthesize searchType=_searchType - In the implementation block
@property (copy) NSString * sendingAddress; 
@property (copy) CNAutocompleteFetchContext * fetchContext;              //@synthesize fetchContext=_fetchContext - In the implementation block
@property (assign) BOOL includeContacts;                                 //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign) BOOL includeRecents;                                  //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign) BOOL includeSuggestions;                              //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign) BOOL includeServers; 
@property (assign) BOOL includeDirectoryServers;                         //@synthesize includeDirectoryServers=_includeDirectoryServers - In the implementation block
@property (assign) BOOL includeCalendarServers;                          //@synthesize includeCalendarServers=_includeCalendarServers - In the implementation block
@property (assign) BOOL includePredictions;                              //@synthesize includePredictions=_includePredictions - In the implementation block
@property (readonly) NSArray * searchableProperties; 
+(id)request;
+(id)searchablePropertiesForSearchType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(unsigned long long)searchType;
-(void)setIncludeCalendarServers:(BOOL)arg1 ;
-(void)setIncludePredictions:(BOOL)arg1 ;
-(NSString *)priorityDomainForSorting;
-(void)setPriorityDomainForSorting:(NSString *)arg1 ;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(id)includeDebugString;
-(id)searchTypeDebugString;
-(id)executeWithDelegate:(id)arg1 ;
-(BOOL)canExecute;
-(NSArray *)searchableProperties;
-(NSString *)sendingAddress;
-(void)setIncludeContacts:(BOOL)arg1 ;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(void)setIncludeServers:(BOOL)arg1 ;
-(void)setIncludeSuggestions:(BOOL)arg1 ;
-(void)setSearchType:(unsigned long long)arg1 ;
-(void)setIncludeDirectoryServers:(BOOL)arg1 ;
-(void)setFetchContext:(CNAutocompleteFetchContext *)arg1 ;
-(BOOL)includeContacts;
-(BOOL)includeRecents;
-(BOOL)includeSuggestions;
-(BOOL)includeServers;
-(CNAutocompleteFetchContext *)fetchContext;
-(void)setSendingAddress:(NSString *)arg1 ;
@end

