/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSULocale;

@interface TSTCell : NSObject <NSCopying> {

	SCD_Struct_TS546* mPrivate;
	TSULocale* mLocale;

}

@property (nonatomic,readonly) TSULocale * locale; 
-(void)setLocale:(TSULocale *)arg1 ;
-(void)clearValue;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(BOOL)arg3 ;
-(id)initWithStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(BOOL)isCellContentsEqualToCell:(id)arg1 ;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(BOOL)arg3 suppressingTransmutation:(BOOL)arg4 ;
-(void)writeToStorageRef:(TSTCellStorage*)arg1 ;
-(BOOL)isEmptyForDataStore;
-(void)clearAllFormats;
-(void)applyFormulaResult:(const TSCEValue*)arg1 context:(id)arg2 hasWarnings:(BOOL)arg3 outWriteDidBeginOrEndWithTextCell:(BOOL*)arg4 ;
-(void)applyFormulaResult:(const TSCEValue*)arg1 ;
-(BOOL)hasEqualValueToCell:(id)arg1 ;
-(void)clearStrokes;
-(id)formulaSyntaxErrorString;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(TSULocale *)locale;
-(void)clear;
-(id)initWithCell:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
@end

