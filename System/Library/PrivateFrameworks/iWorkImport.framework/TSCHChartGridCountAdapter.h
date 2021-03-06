/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartGridAdapter.h>

@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter {

	BOOL mCountFromOne;
	unsigned long long mIndexFactor;

}

@property (assign,nonatomic) BOOL countFromOne; 
@property (assign,nonatomic) unsigned long long indexFactor; 
-(id*)valuesAtIndexes:(NSRange)arg1 ;
-(BOOL)countFromOne;
-(void)setCountFromOne:(BOOL)arg1 ;
-(unsigned long long)indexFactor;
-(void)setIndexFactor:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
@end

