/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/GraphRenderOperationDelegate.h>

@protocol StockGraphViewContainer;
@class LineGraphView, VolumeGraphView, UIView, StockChartData, NSMutableArray, NSArray, GraphRenderOperation, StockChartDisplayMode;

@interface StockGraphView : UIView <GraphRenderOperationDelegate> {

	LineGraphView* _lineView;
	VolumeGraphView* _volumeView;
	UIView*<StockGraphViewContainer> _chartViewDelegate;
	StockChartData* _chartData;
	int _valueIndex;
	int _valueCount;
	CGPoint* _points;
	CGPoint* _values;
	NSMutableArray* _linePointCounts;
	NSArray* _dottedLinePositions;
	NSArray* _dottedLinePositionsForStyleOnly;
	unsigned _dataSize;
	unsigned _dataCount;
	SCD_Struct_St4* _volumeBars;
	unsigned _volumeSize;
	unsigned _volumeCount;
	double _volumeBarWidth;
	unsigned long long _maxVolume;
	GraphRenderOperation* _renderOperation;
	BOOL _isRendered;
	StockChartDisplayMode* _displayMode;
	UIEdgeInsets _graphInsets;

}

@property (assign,nonatomic,__weak) UIView*<StockGraphViewContainer> chartViewDelegate;              //@synthesize chartViewDelegate=_chartViewDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isRendered;                                                      //@synthesize isRendered=_isRendered - In the implementation block
@property (nonatomic,readonly) BOOL isRendering; 
@property (assign,nonatomic) UIEdgeInsets graphInsets;                                               //@synthesize graphInsets=_graphInsets - In the implementation block
@property (nonatomic,retain) StockChartDisplayMode * displayMode;                                    //@synthesize displayMode=_displayMode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDisplayMode:(StockChartDisplayMode *)arg1 ;
-(StockChartDisplayMode *)displayMode;
-(void)_layoutSubviews;
-(void)clearData;
-(void)setChartViewDelegate:(UIView*<StockGraphViewContainer>)arg1 ;
-(void)loadStockChartData:(id)arg1 ;
-(void)recomputePathsAndRenderIfNeededForSize:(CGSize)arg1 ;
-(BOOL)isRendered;
-(CGRect)_lineViewFrameForBoundsSize:(CGSize)arg1 ;
-(CGRect)_volumeViewFrameForBoundsSize:(CGSize)arg1 ;
-(void)setShowingSelectedLine:(BOOL)arg1 ;
-(void)clearPaths;
-(void)_finishCurrentLine;
-(float)_priceAtTime:(double)arg1 dataPosition:(double*)arg2 ;
-(double)_timeAtPosition:(double)arg1 ;
-(unsigned long long)_normalizedAccumulatedVolumeInDataRange:(CGPoint)arg1 ;
-(UIView*<StockGraphViewContainer>)chartViewDelegate;
-(void)cancelRenderOperation;
-(void)_processGraphDataForWidth:(double)arg1 ;
-(void)readyForDisplayFromChartData;
-(void)setGraphInsets:(UIEdgeInsets)arg1 ;
-(void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(CGRect)_trueGraphPointsRegion;
-(void)graphRenderOperationDidFinish:(id)arg1 ;
-(void)setShowingSelectedVolumeRegion:(BOOL)arg1 ;
-(void)setDottedLinePositionsWithLabelInfo:(id)arg1 ;
-(void)setEvenlySpacedDottedLinePositionsWithCount:(unsigned long long)arg1 ;
-(BOOL)isRendering;
-(CGPoint)rightmostPlottedPoint;
-(SCD_Struct_St0)plottedPointNearestToPoint:(CGPoint*)arg1 ;
-(CGRect)volumeBarRectNearestToPoint:(CGPoint)arg1 ;
-(UIEdgeInsets)graphInsets;
@end
