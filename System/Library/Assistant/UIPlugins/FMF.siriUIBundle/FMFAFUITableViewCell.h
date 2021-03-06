/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol CurrentLocationDelegate;
@class FMFSALocation, MKMapView, UIColor, UILabel, UIView, UIImageView, FMFSAMapAnnotation;

@interface FMFAFUITableViewCell : UITableViewCell {

	BOOL displayMap;
	BOOL refreshingCancelled;
	BOOL showLocatingFriends;
	BOOL showAllCell;
	BOOL isVisibilityCell;
	BOOL isFirstCell;
	BOOL isLastCell;
	BOOL _isCellBeforeShowAll;
	BOOL _isRegionSetOnMap;
	FMFSALocation* location;
	MKMapView* mapView;
	double zoomLevel;
	UIColor* borderColor;
	UILabel* nameLabel;
	UILabel* locationLabel;
	UILabel* timeLabel;
	UILabel* distanceLabel;
	UIView* border;
	UIImageView* friendImageView;
	FMFSAMapAnnotation* mapAnnotation;
	id<CurrentLocationDelegate> currentLocationDelegate;

}

@property (assign,nonatomic) id<CurrentLocationDelegate> currentLocationDelegate; 
@property (nonatomic,retain) FMFSALocation * location; 
@property (assign,nonatomic) BOOL displayMap; 
@property (assign,nonatomic) BOOL refreshingCancelled; 
@property (assign,nonatomic) BOOL showLocatingFriends; 
@property (assign,nonatomic) BOOL showAllCell; 
@property (assign,nonatomic) BOOL isVisibilityCell; 
@property (assign,nonatomic) BOOL isFirstCell; 
@property (assign,nonatomic) BOOL isLastCell; 
@property (assign,nonatomic) BOOL isCellBeforeShowAll;                                         //@synthesize isCellBeforeShowAll=_isCellBeforeShowAll - In the implementation block
@property (nonatomic,retain) UIColor * borderColor; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,nonatomic) double zoomLevel; 
@property (nonatomic,retain) UILabel * nameLabel; 
@property (nonatomic,retain) UILabel * locationLabel; 
@property (nonatomic,retain) UILabel * timeLabel; 
@property (nonatomic,retain) UILabel * distanceLabel; 
@property (nonatomic,retain) UIView * border; 
@property (nonatomic,retain) UIImageView * friendImageView; 
@property (nonatomic,retain) FMFSAMapAnnotation * mapAnnotation; 
@property (assign,nonatomic) BOOL isRegionSetOnMap;                                            //@synthesize isRegionSetOnMap=_isRegionSetOnMap - In the implementation block
+(id)bundle;
-(BOOL)displayMap;
-(double)yOffsetForDimension:(double)arg1 ;
-(void)updateMapWithLocation:(id)arg1 ;
-(void)setIsVisibilityCell:(BOOL)arg1 ;
-(void)runMapRegionAfterDelay;
-(void)setIsRegionSetOnMap:(BOOL)arg1 ;
-(void)setDistanceLabel:(UILabel *)arg1 ;
-(id)showLocatingFriendsString;
-(void)setFriendImageView:(UIImageView *)arg1 ;
-(BOOL)isCellBeforeShowAll;
-(BOOL)isRegionSetOnMap;
-(void)setRefreshingCancelled:(BOOL)arg1 ;
-(void)setShowLocatingFriends:(BOOL)arg1 ;
-(FMFSAMapAnnotation *)mapAnnotation;
-(BOOL)isLastCell;
-(void)setCurrentLocationDelegate:(id<CurrentLocationDelegate>)arg1 ;
-(void)setIsLastCell:(BOOL)arg1 ;
-(void)setShowAllCell:(BOOL)arg1 ;
-(BOOL)refreshingCancelled;
-(BOOL)showLocatingFriends;
-(void)setIsCellBeforeShowAll:(BOOL)arg1 ;
-(UIImageView *)friendImageView;
-(void)setIsFirstCell:(BOOL)arg1 ;
-(void)updateMap;
-(void)setDisplayMap:(BOOL)arg1 ;
-(BOOL)isVisibilityCell;
-(UILabel *)distanceLabel;
-(BOOL)showAllCell;
-(void)setMapAnnotation:(FMFSAMapAnnotation *)arg1 ;
-(id<CurrentLocationDelegate>)currentLocationDelegate;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(FMFSALocation *)location;
-(void)setLocation:(FMFSALocation *)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)currentLocationUpdated:(id)arg1 ;
-(double)zoomLevel;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(BOOL)isFirstCell;
-(UIView *)border;
-(void)setBorder:(UIView *)arg1 ;
@end

