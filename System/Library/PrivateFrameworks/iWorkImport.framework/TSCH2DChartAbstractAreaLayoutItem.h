/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAbstractAreaLayoutItem.h>

@class TSCHChartTitleLayoutItem, TSCHChartDataSetNameLayoutItem, TSCHChartBodyLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {

	TSCHChartTitleLayoutItem* mTitleElement;
	TSCHChartDataSetNameLayoutItem* mDataSetNameElement;
	TSCHChartBodyLayoutItem* mChartBody;

}

@property (nonatomic,readonly) TSCHChartBodyLayoutItem * bodyLayoutItem; 
-(void)setChartBodyLayoutSize:(CGSize)arg1 ;
-(CGRect)chartBodyLayoutRect;
-(TSCHChartBodyLayoutItem *)bodyLayoutItem;
-(CGRect)i_currentBufferAreaUnitRect;
-(void)dealloc;
@end
