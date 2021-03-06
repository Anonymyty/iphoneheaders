/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class _GEOMapURLBuilder;

@interface _MKURLBuilder : NSObject {

	_GEOMapURLBuilder* _realBuilder;

}
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(unsigned long long)arg3 ;
+(id)URLForAddress:(id)arg1 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(SCD_Struct_MK7)arg4 address:(id)arg5 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
+(id)URLForSearch:(id)arg1 at:(SCD_Struct_MK7)arg2 zoomLevel:(double)arg3 ;
+(id)URLForCoordinate:(SCD_Struct_MK7)arg1 label:(id)arg2 ;
+(id)URLForSearch:(id)arg1 ;
+(id)URLForSearch:(id)arg1 at:(SCD_Struct_MK7)arg2 span:(SCD_Struct_MK7)arg3 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 transport:(unsigned long long)arg2 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 ;
+(id)URLForSearch:(id)arg1 near:(SCD_Struct_MK7)arg2 ;
+(id)URLForAddress:(id)arg1 label:(id)arg2 ;
+(id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
+(id)URLForCoordinate:(SCD_Struct_MK7)arg1 address:(id)arg2 label:(id)arg3 ;
+(id)URLForCoordinate:(SCD_Struct_MK7)arg1 ;
-(void)setTransportType:(unsigned long long)arg1 ;
-(void)setDisplayRegion:(SCD_Struct_MK10)arg1 ;
-(void)setStartAddress:(id)arg1 ;
-(id)initForCoordinate:(SCD_Struct_MK7)arg1 label:(id)arg2 ;
-(void)setSearchLocation:(SCD_Struct_MK7)arg1 span:(SCD_Struct_MK7)arg2 ;
-(void)setBusinessCoordinate:(SCD_Struct_MK7)arg1 ;
-(id)initForCoordinate:(SCD_Struct_MK7)arg1 address:(id)arg2 label:(id)arg3 ;
-(id)initForDirectionsTo:(id)arg1 ;
-(void)setNear:(SCD_Struct_MK7)arg1 ;
-(id)initForSearch:(id)arg1 ;
-(void)setContentProvider:(id)arg1 ;
-(id)initForAddress:(id)arg1 label:(id)arg2 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
-(void)setBusinessAddress:(id)arg1 ;
-(id)buildForWeb;
-(id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
-(id)build;
-(void)setSearchLocation:(SCD_Struct_MK7)arg1 zoomLevel:(double)arg2 ;
@end

