/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKMultiplayerBulletin.h>

@class NSDictionary;

@interface GKBulletinNearbyInvite : GKMultiplayerBulletin {

	NSDictionary* _inviteDictionary;

}

@property (retain) NSDictionary * inviteDictionary;              //@synthesize inviteDictionary=_inviteDictionary - In the implementation block
-(id)initWithPlayer:(id)arg1 localizedGameName:(id)arg2 inviteDictionary:(id)arg3 ;
-(NSDictionary *)inviteDictionary;
-(void)setInviteDictionary:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)handleAction:(id)arg1 ;
@end

