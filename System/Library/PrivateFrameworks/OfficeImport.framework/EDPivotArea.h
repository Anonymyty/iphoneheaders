/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {

	BOOL mGrandCol;
	BOOL mGrandRow;
	BOOL mOutline;
	int mType;
	EDCollection* mReferences;
	EDReference* mOffset;

}
+(id)pivotArea;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setOffset:(id)arg1 ;
-(id)offset;
-(id)references;
-(BOOL)grandRow;
-(void)setGrandRow:(BOOL)arg1 ;
-(BOOL)grandCol;
-(void)setGrandCol:(BOOL)arg1 ;
-(BOOL)outline;
-(void)setOutline:(BOOL)arg1 ;
@end

