/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay> {

	SCD_Struct_MK7 _centroid;
	NSArray* _interiorPolygons;
	BOOL _isDefinitelyConvex;

}

@property (readonly) NSArray * interiorPolygons;                             //@synthesize interiorPolygons=_interiorPolygons - In the implementation block
@property (assign,nonatomic) BOOL _isDefinitelyConvex;                       //@synthesize isDefinitelyConvex=_isDefinitelyConvex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK7 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK10 boundingMapRect; 
+(id)polygonWithCoordinates:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)_polygonWithMapRect:(SCD_Struct_MK10)arg1 ;
+(id)polygonEnclosingMapPoints:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonWithPoints:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithPoints:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonWithCoordinates:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)intersectsMapRect:(SCD_Struct_MK10)arg1 ;
-(SCD_Struct_MK10)boundingMapRect;
-(NSArray *)interiorPolygons;
-(BOOL)_isDefinitelyConvex;
-(void)set_isDefinitelyConvex:(BOOL)arg1 ;
-(SCD_Struct_MK7)coordinate;
@end

