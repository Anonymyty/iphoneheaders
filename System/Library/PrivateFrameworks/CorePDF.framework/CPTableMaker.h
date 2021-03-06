/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTable;

@interface CPTableMaker : NSObject {

	CPZone* tableZone;
	CPTable* table;
	unsigned cellIndex;
	CGPoint* rowYIntervals;
	CGPoint* columnXIntervals;

}
+(void)makeTablesInPage:(id)arg1 ;
+(void)makeTablesInZone:(id)arg1 ;
+(BOOL)isTable:(id)arg1 ;
+(void)makeTableFrom:(id)arg1 ;
-(void)dealloc;
-(id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1 ;
-(id)newTableCellFromZone:(id)arg1 ;
-(void)determineRowsAndColumns:(BOOL)arg1 ;
-(void)makeTable;
-(id)initWithZone:(id)arg1 ;
@end

