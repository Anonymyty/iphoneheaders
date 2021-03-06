/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol MKAnnotation;
@class MKMapView, MKMapItem, _MKPlaceViewController, MKLocalSearch, NSString;

@interface CKMapViewController : UIViewController <MKMapViewDelegate> {

	id<MKAnnotation> _annotation;
	MKMapView* _mapView;
	MKMapItem* _mapItem;
	_MKPlaceViewController* _mapViewController;
	MKLocalSearch* _localSearch;

}

@property (nonatomic,retain) id<MKAnnotation> annotation;                             //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                     //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                     //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) _MKPlaceViewController * mapViewController;              //@synthesize mapViewController=_mapViewController - In the implementation block
@property (nonatomic,retain) MKLocalSearch * localSearch;                             //@synthesize localSearch=_localSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<MKAnnotation>)annotation;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithAnnotation:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(MKMapView *)mapView;
-(void)selectPin;
-(void)_toolbarItemPressed:(id)arg1 ;
-(_MKPlaceViewController *)mapViewController;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(void)setMapViewController:(_MKPlaceViewController *)arg1 ;
-(MKLocalSearch *)localSearch;
@end

