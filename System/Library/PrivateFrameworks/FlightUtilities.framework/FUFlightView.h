/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <libobjc.A.dylib/FUFlightInfoViewProtocol.h>

@protocol FUFlightViewDelegate;
@class FUPlaneTrackerAnnotationView, NSMutableArray, FUFLightTrack, UIPageViewController, NSArray, MKMapView, UIVisualEffectView, UIView, UIPageControl, NSString;

@interface FUFlightView : UIView <UIPageViewControllerDelegate, UIPageViewControllerDataSource, FUFlightInfoViewProtocol> {

	FUPlaneTrackerAnnotationView* _planeTracker;
	long long _currentFlightIndex;
	NSMutableArray* _tracks;
	FUFLightTrack* _currentTrack;
	UIPageViewController* _pageViewController;
	BOOL _highlightCurrentFlightLeg;
	BOOL _showInfoPanel;
	NSArray* _flights;
	id<FUFlightViewDelegate> _delegate;
	long long _currentFocus;
	MKMapView* _mapView;
	UIVisualEffectView* _backBlurView;
	UIView* _borderLineViewLandscape;
	UIView* _borderLineViewPortrait;
	UIPageControl* _pageControl;
	UIView* _errorView;
	UIView* _loadingView;
	UIEdgeInsets _mapInsets;

}

@property (assign,nonatomic) UIEdgeInsets mapInsets;                      //@synthesize mapInsets=_mapInsets - In the implementation block
@property (nonatomic,retain) NSArray * flights;                           //@synthesize flights=_flights - In the implementation block
@property (assign,nonatomic) BOOL highlightCurrentFlightLeg;              //@synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg - In the implementation block
@property (assign,nonatomic) BOOL showInfoPanel;                          //@synthesize showInfoPanel=_showInfoPanel - In the implementation block
@property (__weak) id<FUFlightViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long currentFocus;                                //@synthesize currentFocus=_currentFocus - In the implementation block
@property (__weak) MKMapView * mapView;                                   //@synthesize mapView=_mapView - In the implementation block
@property (__weak) UIVisualEffectView * backBlurView;                     //@synthesize backBlurView=_backBlurView - In the implementation block
@property (__weak) UIView * borderLineViewLandscape;                      //@synthesize borderLineViewLandscape=_borderLineViewLandscape - In the implementation block
@property (__weak) UIView * borderLineViewPortrait;                       //@synthesize borderLineViewPortrait=_borderLineViewPortrait - In the implementation block
@property (__weak) UIPageControl * pageControl;                           //@synthesize pageControl=_pageControl - In the implementation block
@property (retain) UIView * errorView;                                    //@synthesize errorView=_errorView - In the implementation block
@property (retain) UIView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<FUFlightViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FUFlightViewDelegate>)delegate;
-(void)awakeFromNib;
-(UIPageControl *)pageControl;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(UIView *)loadingView;
-(void)showInfo;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(MKMapView *)mapView;
-(void)setCurrentFocus:(long long)arg1 ;
-(long long)currentFocus;
-(void)setFlights:(NSArray *)arg1 ;
-(void)setHighlightCurrentFlightLeg:(BOOL)arg1 ;
-(void)setShowInfoPanel:(BOOL)arg1 ;
-(void)cleanupView;
-(BOOL)highlightCurrentFlightLeg;
-(BOOL)showInfoPanel;
-(void)updateMapCamera;
-(void)showLoading;
-(void)showError;
-(NSArray *)flights;
-(void)flightInfoView:(id)arg1 didUpdateFocus:(long long)arg2 ;
-(void)setMapInsets:(UIEdgeInsets)arg1 ;
-(void)setupStyles;
-(UIVisualEffectView *)backBlurView;
-(UIView *)borderLineViewLandscape;
-(UIView *)borderLineViewPortrait;
-(void)setErrorView:(UIView *)arg1 ;
-(UIView *)errorView;
-(void)_refreshMapOverlay;
-(void)updateMapArcs;
-(void)setCurrentIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)addTrack:(id)arg1 ;
-(id)currentFlight;
-(void)fitMap:(BOOL)arg1 ;
-(void)_updateToFocus:(long long)arg1 animated:(BOOL)arg2 ;
-(id)departureCamera;
-(id)arrivalCamera;
-(id)flightCamera;
-(void)changeCurrentPage:(id)arg1 ;
-(UIEdgeInsets)mapInsets;
-(void)setBackBlurView:(UIVisualEffectView *)arg1 ;
-(void)setBorderLineViewLandscape:(UIView *)arg1 ;
-(void)setBorderLineViewPortrait:(UIView *)arg1 ;
-(void)setLoadingView:(UIView *)arg1 ;
@end

