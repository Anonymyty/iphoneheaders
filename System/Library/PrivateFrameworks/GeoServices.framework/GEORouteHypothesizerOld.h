/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEORouteHypothesizerUpdaterDelegate.h>
#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>

@protocol GEORouteHypothesizerDelegate;
@class GEODirectionsRequestFeedback, GEOLocationShifter, GEOComposedWaypoint, NSDate, GEORouteHypothesisOld, GEOLocation, GEOETAUpdater, GEOETARoute, GEORouteAttributes, GEORouteHypothesizerUpdater, GEORoute, NSData, GEOComposedRoute, NSString;

@interface GEORouteHypothesizerOld : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate> {

	id<GEORouteHypothesizerDelegate> _delegate;
	/*^block*/id _handler;
	GEODirectionsRequestFeedback* _feedback;
	GEOLocationShifter* _locationShifter;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	GEORouteHypothesisOld* _hypothesis;
	GEOLocation* _lastLocation;
	NSDate* _suggestedNextUpdateDate;
	NSDate* _lastETARequestDate;
	double _etaUpdateInterval;
	unsigned long long _etaUpdateFrequency;
	GEOETAUpdater* _etaUpdater;
	GEOETARoute* _liveETARoute;
	GEOETARoute* _baselineETARoute;
	GEORouteAttributes* _routeAttributes;
	GEORouteHypothesizerUpdater* _updater;
	GEORoute* _existingRoute;
	NSData* _usualRouteData;

}

@property (assign,nonatomic) id<GEORouteHypothesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long etaUpdateFrequency;                  //@synthesize etaUpdateFrequency=_etaUpdateFrequency - In the implementation block
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic; 
@property (nonatomic,readonly) BOOL supportsDirections; 
@property (nonatomic,readonly) GEOComposedWaypoint * source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                    //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                               //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) NSDate * suggestedNextUpdateDate;                     //@synthesize suggestedNextUpdateDate=_suggestedNextUpdateDate - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<GEORouteHypothesizerDelegate>)arg1 ;
-(void)dealloc;
-(id<GEORouteHypothesizerDelegate>)delegate;
-(GEOComposedWaypoint *)source;
-(void)_commonInit;
-(GEOComposedWaypoint *)destination;
-(NSDate *)arrivalDate;
-(GEOComposedRoute *)route;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(void)_createUpdaterWithStartingLocation:(id)arg1 ;
-(NSDate *)departureDate;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(NSDate *)suggestedNextUpdateDate;
-(unsigned long long)etaUpdateFrequency;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)setEtaUpdateFrequency:(unsigned long long)arg1 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(BOOL)supportsLiveTraffic;
-(BOOL)supportsDirections;
-(void)_updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 ;
-(void)_refreshETAWithRouteMatch:(id)arg1 ;
-(id)initWithExistingRoute:(id)arg1 source:(id)arg2 destination:(id)arg3 etaUpdater:(id)arg4 ;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 usualRouteData:(id)arg4 ;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)_updateLocationAndETAUpdateInterval;
-(void)updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 usualRouteData:(id)arg4 ;
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2 ;
-(void)_updateETAWithRouteMatch:(id)arg1 ;
@end

