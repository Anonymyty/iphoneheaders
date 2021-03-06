/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:01:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@class Database, NSString;

@interface Package : NSObject {

	unsigned era_ : 25;
	unsigned role_ : 3;
	unsigned essential_ : 1;
	unsigned obsolete_ : 1;
	unsigned ignored_ : 1;
	unsigned pooled_ : 1;
	CYPool* pool_;
	unsigned rank_;
	Database* database_;
	VerIterator* version_;
	PkgIterator* iterator_;
	VerFileIterator* file_;
	CYString* id_;
	CYString* name_;
	CYString* transform_;
	CYString* latest_;
	CYString* installed_;
	long upgraded_;
	const char* section_;
	NSString* section$_;
	MenesObjectHandle<Source, 0> source_;
	PackageValue* metadata_;
	ParsedPackage* parsed_;
	MenesObjectHandle<NSMutableArray, 0> tags_;

}
+(id)_attributeKeys;
+(id)packageWithIterator:(PkgIterator*)arg1 withZone:(NSZone*)arg2 inPool:(CYPool*)arg3 database:(id)arg4 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)getField:(id)arg1 ;
-(char)upgradableAndEssential:(char)arg1 ;
-(long)seen;
-(CYString*)cyname;
-(id)getRecord;
-(id)initWithVersion:(VerIterator*)arg1 withZone:(NSZone*)arg2 inPool:(CYPool*)arg3 database:(id)arg4 ;
-(id)simpleSection;
-(char)unfiltered;
-(PkgIterator*)iterator;
-(id)downgrades;
-(id)longSection;
-(id)shortSection;
-(id)maintainer;
-(id)md5sum;
-(id)latest;
-(id)installed;
-(char)uninstalled;
-(char)essential;
-(char)broken;
-(char)half;
-(char)halfConfigured;
-(char)halfInstalled;
-(id)homepage;
-(id)support;
-(long)upgraded;
-(unsigned)recent;
-(id)primaryPurpose;
-(id)purposes;
-(BOOL)isCommercial;
-(unsigned)compareBySection:(id)arg1 ;
-(char)matches:(id)arg1 ;
-(id)files;
-(void)install;
-(unsigned long)size;
-(void)dealloc;
-(id)description;
-(id)state;
-(id)name;
-(id)section;
-(id)source;
-(char)visible;
-(id)tags;
-(id)selection;
-(id)mode;
-(unsigned short)index;
-(void)clear;
-(id)shortDescription;
-(id)icon;
-(void)remove;
-(void)setIndex:(unsigned long)arg1 ;
-(PackageValue*)metadata;
-(id)author;
-(id)attributeKeys;
-(char)hasMode;
-(unsigned)rank;
-(BOOL)subscribed;
-(BOOL)setSubscribed:(BOOL)arg1 ;
-(id)relations;
-(id)longDescription;
-(char)ignored;
-(id)applications;
-(void)parse;
-(id)depiction;
-(char)hasTag:(id)arg1 ;
-(id)id;
-(id)uri;
-(id)warnings;
-(id)architecture;
@end

