/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {

	OITSUNoCopyDictionary* mFontTable;
	NSMutableArray* mFontsInOrderOfInsertion;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(void)clear;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(id)fonts;
-(id)createFontWithName:(id)arg1 ;
-(unsigned long long)indexOfFont:(id)arg1 ;
-(id)fontWithName:(id)arg1 ;
-(id)fontWithName:(id)arg1 create:(BOOL)arg2 ;
@end

