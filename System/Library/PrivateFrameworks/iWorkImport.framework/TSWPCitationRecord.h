/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSString;

@interface TSWPCitationRecord : TSPObject {

	BOOL _hideAuthorNames;
	BOOL _hideYear;
	BOOL _shouldRemove;
	BOOL _recordXMLApplied;
	NSString* _endNoteXML;
	NSString* _pageRange;
	NSString* _prefix;
	NSString* _suffix;
	NSString* _authorsString;
	NSString* _title;
	NSString* _year;
	NSString* _type;

}

@property (nonatomic,copy) NSString * endNoteXML;                 //@synthesize endNoteXML=_endNoteXML - In the implementation block
@property (assign,nonatomic) BOOL hideAuthorNames;                //@synthesize hideAuthorNames=_hideAuthorNames - In the implementation block
@property (assign,nonatomic) BOOL hideYear;                       //@synthesize hideYear=_hideYear - In the implementation block
@property (nonatomic,copy) NSString * pageRange;                  //@synthesize pageRange=_pageRange - In the implementation block
@property (nonatomic,copy) NSString * prefix;                     //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * suffix;                     //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy) NSString * authorsString;              //@synthesize authorsString=_authorsString - In the implementation block
@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * year;                       //@synthesize year=_year - In the implementation block
@property (nonatomic,copy) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL shouldRemove;                   //@synthesize shouldRemove=_shouldRemove - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) BOOL recordXMLApplied;               //@synthesize recordXMLApplied=_recordXMLApplied - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)p_copyPropertiesToObject:(id)arg1 ;
-(NSString *)endNoteXML;
-(NSString *)pageRange;
-(BOOL)hideAuthorNames;
-(BOOL)hideYear;
-(BOOL)recordXMLApplied;
-(void)p_applyEndNoteXML;
-(NSString *)authorsString;
-(id)authorYearString;
-(void)setEndNoteXML:(NSString *)arg1 ;
-(void)setHideAuthorNames:(BOOL)arg1 ;
-(void)setHideYear:(BOOL)arg1 ;
-(void)setPageRange:(NSString *)arg1 ;
-(void)setAuthorsString:(NSString *)arg1 ;
-(BOOL)shouldRemove;
-(void)setShouldRemove:(BOOL)arg1 ;
-(void)setRecordXMLApplied:(BOOL)arg1 ;
-(BOOL)isRecordEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cacheKey;
-(NSString *)year;
-(void)setYear:(NSString *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)prefix;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
@end

