/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class SAFmfGeoFence, MKMapView, UILabel, UIImageView, NSString;

@interface FMFAFGeoFenceTableViewCell : UITableViewCell <MKMapViewDelegate> {

	SAFmfGeoFence* aceFmfGeoFence;
	MKMapView* mapView;
	UILabel* nameLabel;
	UILabel* fenceLabel;
	UIImageView* friendImageView;
	UIImageView* geoFenceIconImageView;
	double zoomLevel;

}

@property (nonatomic,retain) SAFmfGeoFence * aceFmfGeoFence; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,nonatomic) double zoomLevel; 
@property (nonatomic,retain) UILabel * nameLabel; 
@property (nonatomic,retain) UILabel * fenceLabel; 
@property (nonatomic,retain) UIImageView * friendImageView; 
@property (nonatomic,retain) UIImageView * geoFenceIconImageView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImageView *)geoFenceIconImageView;
-(id)friendHandle;
-(UILabel *)fenceLabel;
-(id)friendEmail;
-(id)friendPhone;
-(void)setFriendImageView:(UIImageView *)arg1 ;
-(void)setFenceLabel:(UILabel *)arg1 ;
-(UIImageView *)friendImageView;
-(void)updateMap;
-(void)setGeoFenceIconImageView:(UIImageView *)arg1 ;
-(id)friendName;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setZoomLevel:(double)arg1 ;
-(SAFmfGeoFence *)aceFmfGeoFence;
-(void)setAceFmfGeoFence:(SAFmfGeoFence *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(double)zoomLevel;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end
