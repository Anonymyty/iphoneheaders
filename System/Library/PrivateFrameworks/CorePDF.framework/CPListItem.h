/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {

	CPList* list;
	int number;
	CFArrayRef paragraphs;

}

@property (nonatomic,retain) CPList * list; 
@property (assign,nonatomic) int number; 
-(void)dealloc;
-(id)init;
-(CPList *)list;
-(void)setList:(CPList *)arg1 ;
-(void)addParagraph:(id)arg1 ;
-(void)dispose;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(unsigned)paragraphCount;
-(void)finalize;
-(int)number;
-(void)setNumber:(int)arg1 ;
@end
