/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, GEOPDAutocompleteEntry, NSData;

@interface GEOSuggestionsUsageLogMessage : PBCodable <NSCopying> {

	NSMutableArray* _displayedResults;
	NSString* _prefix;
	int _searchFieldType;
	int _selectedIndex;
	GEOPDAutocompleteEntry* _suggestionEntry;
	int _suggestionEntryIndex;
	int _suggestionEntryListIndex;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasSuggestionEntryListIndex; 
@property (assign,nonatomic) int suggestionEntryListIndex;                          //@synthesize suggestionEntryListIndex=_suggestionEntryListIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex;                              //@synthesize suggestionEntryIndex=_suggestionEntryIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                           //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry;              //@synthesize suggestionEntry=_suggestionEntry - In the implementation block
@property (nonatomic,readonly) BOOL hasPrefix; 
@property (nonatomic,retain) NSString * prefix;                                     //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayedResults;                     //@synthesize displayedResults=_displayedResults - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedIndex; 
@property (assign,nonatomic) int selectedIndex;                                     //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSearchFieldType; 
@property (assign,nonatomic) int searchFieldType;                                   //@synthesize searchFieldType=_searchFieldType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(NSData *)suggestionEntryMetadata;
-(BOOL)hasSuggestionEntryIndex;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(BOOL)hasSuggestionEntry;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(int)suggestionEntryIndex;
-(BOOL)hasSuggestionEntryMetadata;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(unsigned long long)displayedResultsCount;
-(void)setSuggestionEntryListIndex:(int)arg1 ;
-(NSMutableArray *)displayedResults;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setSearchFieldType:(int)arg1 ;
-(NSString *)prefix;
-(BOOL)hasSelectedIndex;
-(void)setDisplayedResults:(NSMutableArray *)arg1 ;
-(int)suggestionEntryListIndex;
-(void)addDisplayedResult:(id)arg1 ;
-(void)clearDisplayedResults;
-(int)searchFieldType;
-(void)setHasSuggestionEntryListIndex:(BOOL)arg1 ;
-(void)setHasSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasSearchFieldType;
-(BOOL)hasSuggestionEntryListIndex;
-(BOOL)hasPrefix;
-(void)setHasSearchFieldType:(BOOL)arg1 ;
-(id)displayedResultAtIndex:(unsigned long long)arg1 ;
@end

