/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKABRecord.h>

@class GKABMultiValue;

@interface GKABPerson : GKABRecord

@property (nonatomic,retain) GKABMultiValue * socialProfile; 
-(GKABMultiValue *)socialProfile;
-(id)emails;
-(void)setSocialProfile:(GKABMultiValue *)arg1 ;
-(BOOL)updateSocialProfileWithPlayer:(id)arg1 ;
@end
