/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKPodView.h>

@class SALocation, SAUIAppPunchOut, NSNumber;

@interface SAGKMapPod : SAGKPodView

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * showButton; 
@property (nonatomic,copy) NSNumber * zoomLevel; 
+(id)mapPod;
+(id)mapPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setZoomLevel:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSNumber *)showButton;
-(void)setShowButton:(NSNumber *)arg1 ;
-(NSNumber *)zoomLevel;
-(id)encodedClassName;
@end
