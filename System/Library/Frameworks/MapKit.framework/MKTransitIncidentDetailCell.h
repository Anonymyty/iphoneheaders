/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class UITextView, UILabel, NSLayoutConstraint, NSDate, NSString;

@interface MKTransitIncidentDetailCell : MKTableViewCell {

	UITextView* _descriptionLabel;
	UILabel* _lastUpdatedLabel;
	NSLayoutConstraint* _descriptionToTopConstraint;
	NSLayoutConstraint* _lastUpdatedToDescriptionConstraint;
	NSDate* _lastUpdated;

}

@property (nonatomic,copy) NSString * incidentDescription; 
@property (nonatomic,retain) NSDate * lastUpdated;                      //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(void)dealloc;
-(void)didMoveToWindow;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setIncidentDescription:(NSString *)arg1 ;
-(void)setConstraints;
-(void)_updateLastUpdatedLabel;
-(NSString *)incidentDescription;
@end

