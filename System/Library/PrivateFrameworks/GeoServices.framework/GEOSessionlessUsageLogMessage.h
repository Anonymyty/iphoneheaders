/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEODirectionsFeedbackLogMessage, GEOTimeToLeaveHypothesisLogMessage, GEOTimeToLeaveInitialTravelTimeLogMessage, GEOTransitAppLaunchLogMessage;

@interface GEOSessionlessUsageLogMessage : PBCodable <NSCopying> {

	GEODirectionsFeedbackLogMessage* _directionsFeedbackLogMessage;
	GEOTimeToLeaveHypothesisLogMessage* _timeToLeaveHypothesisLogMessage;
	GEOTimeToLeaveInitialTravelTimeLogMessage* _timeToLeaveInitialTravelTimeLogMessage;
	GEOTransitAppLaunchLogMessage* _transitAppLaunchLogMessage;

}

@property (nonatomic,readonly) BOOL hasDirectionsFeedbackLogMessage; 
@property (nonatomic,retain) GEODirectionsFeedbackLogMessage * directionsFeedbackLogMessage;                                  //@synthesize directionsFeedbackLogMessage=_directionsFeedbackLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAppLaunchLogMessage; 
@property (nonatomic,retain) GEOTransitAppLaunchLogMessage * transitAppLaunchLogMessage;                                      //@synthesize transitAppLaunchLogMessage=_transitAppLaunchLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeToLeaveHypothesisLogMessage; 
@property (nonatomic,retain) GEOTimeToLeaveHypothesisLogMessage * timeToLeaveHypothesisLogMessage;                            //@synthesize timeToLeaveHypothesisLogMessage=_timeToLeaveHypothesisLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeToLeaveInitialTravelTimeLogMessage; 
@property (nonatomic,retain) GEOTimeToLeaveInitialTravelTimeLogMessage * timeToLeaveInitialTravelTimeLogMessage;              //@synthesize timeToLeaveInitialTravelTimeLogMessage=_timeToLeaveInitialTravelTimeLogMessage - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOTimeToLeaveInitialTravelTimeLogMessage *)timeToLeaveInitialTravelTimeLogMessage;
-(void)setTimeToLeaveInitialTravelTimeLogMessage:(GEOTimeToLeaveInitialTravelTimeLogMessage *)arg1 ;
-(BOOL)hasTimeToLeaveHypothesisLogMessage;
-(BOOL)hasTransitAppLaunchLogMessage;
-(GEODirectionsFeedbackLogMessage *)directionsFeedbackLogMessage;
-(void)setTransitAppLaunchLogMessage:(GEOTransitAppLaunchLogMessage *)arg1 ;
-(void)setDirectionsFeedbackLogMessage:(GEODirectionsFeedbackLogMessage *)arg1 ;
-(GEOTransitAppLaunchLogMessage *)transitAppLaunchLogMessage;
-(BOOL)hasDirectionsFeedbackLogMessage;
-(void)setTimeToLeaveHypothesisLogMessage:(GEOTimeToLeaveHypothesisLogMessage *)arg1 ;
-(GEOTimeToLeaveHypothesisLogMessage *)timeToLeaveHypothesisLogMessage;
-(BOOL)hasTimeToLeaveInitialTravelTimeLogMessage;
@end
