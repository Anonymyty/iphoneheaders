/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKRenderingExporter <TSKExporter>
@required
-(CGRect*)boundsRect;
-(CGRect*)unscaledClipRect;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4;
-(BOOL)incrementPage;
-(BOOL)preparePage:(unsigned long long)arg1;
-(double)progressForCurrentPage;
-(BOOL)setInfosToCurrentPage;
-(BOOL)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)imager;
-(void)setPaginate:(BOOL)arg1;
-(BOOL)paginate;
-(BOOL)hasMoreThanOnePageToPrint;
-(unsigned long long)pageCount;
-(void)setup;
-(void)teardown;

@end
